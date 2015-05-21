/*
 * File:   displayGraphics.cpp
 * Author: dm940
 *
 * Created on 20 May 2015, 11:43 AM
 */

#include "displayGraphics.h"
#include "apn.h"
#include <QtGui/QtGui>
#include <GL/glu.h>
#include <GL/gl.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <GL/glut.h>
#include <cmath>
#include <climits>
#include <cstring>
#include <string>
using namespace std;

#define winHeight 720
#define winWidth 1280
#define nodeHeight 55
#define nodeWidth 124
#define PI 3.1415926


APNNode::APNNode()
{
	length = 0;
	earlyStart = 0;
	earlyFinish = 0;
	lateStart = 0;
	lateFinish = INT_MAX;
	leeway = 0;
	numDependencies = 0;
	numDependants = 0;
	level = -1;
	height = -1;
}

void APNNode::setLen(int i)
{
	length = i;
}

void APNNode::setID(int i)
{
	id= i;
}

void APNNode::setName(char* i)
{
	strcpy(taskName, i);
}

void APNNode::setHeight(int i)
{
	height = i;
}

void APNNode::pass1(int l, int prevEF, APNNode tasks [], int &numTasks, int &highestEF)
{
	if (level <= l)
		level = l;
	if (earlyStart <= prevEF)
	{
		earlyStart = prevEF;
		earlyFinish = prevEF + length;
		if (highestEF < earlyFinish)
			highestEF = earlyFinish;
	}
	for (list<int>::iterator it = dependants.begin(); it != dependants.end(); ++it)
	{
		int j = *it;
		for (int i = 0; i < numTasks; i++)
		{
			if (tasks[i].getID() == j)
				tasks[i].pass1(level + 1, earlyFinish, tasks, numTasks, highestEF);
		}
	}
}

void APNNode::pass2(int prevLS, APNNode tasks[], int & numTasks)
{
	if (lateFinish >= prevLS)
	{
		lateFinish = prevLS;
		lateStart = lateFinish - length;
		leeway = lateStart - earlyStart;
	}
	for (list<int>::iterator it = dependencies.begin(); it != dependencies.end(); ++it)
	{
		int j = *it;
		for (int i = 0; i < numTasks; i++)
		{
			if (tasks[i].getID() == j)
				tasks[i].pass2(lateStart, tasks, numTasks);
		}
	}
}

int APNNode::getLen()
{
	return length;
}

int APNNode::getID()
{
	return id;
}

char* APNNode::getName()
{
	return taskName;
}

int APNNode::getES()
{
	return earlyStart;
}

int APNNode::getEF()
{
	return earlyFinish;
}

int APNNode::getLS()
{
	return lateStart;
}

int APNNode::getLF()
{
	return lateFinish;
}

int APNNode::getLW()
{
	return leeway;
}

int APNNode::getNumDependencies()
{
	return numDependencies;
}

int APNNode::getNumDependants()
{
	return numDependants;
}

int APNNode::getDependency(int i)
{
	int j = 0, k = 0;
	for (list<int>::iterator it = dependencies.begin(); it != dependencies.end() && j <= i; ++it)
	{
		k = *it;
		j++;
	}
	return k;
}

int APNNode::getDependant(int i)
{
	int j = 0, k = 0;
	for (list<int>::iterator it = dependants.begin(); it != dependants.end() && j <= i; ++it)
	{
		k = *it;
		j++;
	}
	return k;
}

int APNNode::getLevel()
{
	return level;
}

int APNNode::getHeight()
{
	return height;
}


void APNNode::addDependency(int i)
{
	dependencies.insert(dependencies.end(), i);
	numDependencies++;
}

void APNNode::addDependant(int i)
{
	dependants.insert(dependants.end(), i);
	numDependants++;

}

void APNNode::printDependencies()
{
	for (list<int>::iterator it = dependencies.begin(); it != dependencies.end(); ++it)
		cout << ' ' << *it;
}

void APNNode::printDependants()
{
	for (list<int>::iterator it = dependants.begin(); it != dependants.end(); ++it)
		cout << ' ' << *it;
}

void APNNode::swapHeights(APNNode& secondNode)
{
	int a = height;
	height = secondNode.height;
	secondNode.height = a;
}

displayGraphics::displayGraphics(QGLWidget* parent, char* file):QGLWidget(parent)
{
	this->setFixedSize(1280,720);
	ifstream fin;
	fin.open(file);
	numTasks = 0;
	fin >> numTasks;
	tasks = new APNNode[numTasks];
	fin.ignore();
	int y;
	char z[64];
	for (int i = 0; i < numTasks; i++)
	{
		fin >> y;
		tasks[i].setID(y);
		fin.ignore();

		fin.getline(z, 63);
		tasks[i].setName(z);

		fin >> y;
		tasks[i].setLen(y);
		fin.ignore();

		
		fin >> y;
		for (int j = 0; j < y; j++)
		{
			int a;
			fin >> a;
			tasks[i].addDependency(a);
			fin.ignore();
		}

	}

	//After all dependancies are read in, this does the inverse 
	//and adds all dependants to each task
	for (int i = 0; i < numTasks; i++)
	{
		for (int k = 0; k < tasks[i].getNumDependencies(); k++)
		{
			int j = tasks[i].getDependency(k);
			for (int l = 0; l < numTasks; l++)
			{
				if (tasks[l].getID() == j)
					tasks[l].addDependant(tasks[i].getID());

			}
		}
	}
	
	//The first pass forward. A pass is initiated if it has no dependencies.
	//The first pass determines all earliest starts and finishes, as well as
	//the level of the task, indicating how far across the screen it needs to
	//be displayed. The largest 'earlyFinish' is also found and used for the
	//basis of the second pass.
	int highestEF = 0;
	for (int i = 0; i < numTasks; i++)
	{
		if (tasks[i].getNumDependencies() == 0)
		{
			tasks[i].pass1(0, 0, tasks, numTasks, highestEF);
		}
	}

	//The second pass back. This pass is initiated if it has no dependants. This
	//pass dertermines all latest starts and finishes.
	for (int i = 0; i < numTasks; i++)
	{
		if (tasks[i].getNumDependants() == 0)
		{
			tasks[i].pass2(highestEF, tasks, numTasks);
		}
	}

	//After finding all relevant information for drawing individual tasks on the
	//graph, the last thing that needs to be figured out is the height of each 
	//task on the graph. In order to maintain a neat graph, tasks that are
	//dependant on another task need to have similar heights. In addition to this,
	//if a task is dependant on two or more tasks, said tasks need to be adjacent
	//vertically.
	highestLevel = 0;
	for (int i = 0; i < numTasks; i++)
	{
		if (tasks[i].getLevel() > highestLevel)
		{
			highestLevel = tasks[i].getLevel();
		}
	}


	for (int i = 0; i <= highestLevel; i++)
	{
		int total = 0;
		for (int j = 0; j < numTasks; j++)
		{
			if (tasks[j].getLevel() == i)
				total++;
		}
		int count = 0;
		for (int j = 0; j < numTasks; j++)
		{
			

			if (tasks[j].getLevel() == i)
			{
				tasks[j].setHeight(100 + (winHeight - 100 - nodeHeight) * count / total);
				count++;
			}
		}

		/*for (int j = 0; j < numTasks; j++)
		{
			if (tasks[j].getNumDependencies() == 1)
			{
				tasks[j].setHeight(100 + (winHeight - 100 - nodeHeight) * count / total);
				count++;
			}
		}*/

	}

	//Print Function
	for (int i = 0; i < numTasks; i++)
	{
		cout << "ID: " << tasks[i].getID() << endl;
		cout << "Name: " << tasks[i].getName() << endl;
		cout << "Length: " << tasks[i].getLen() << endl;
		cout << "Dependencies:";
		tasks[i].printDependencies();
		cout << endl;
		cout << "Dependants:";
		tasks[i].printDependants();
		cout << endl;
		cout << "ES: " << tasks[i].getES() << endl;
		cout << "EF: " << tasks[i].getEF() << endl;
		cout << "LS: " << tasks[i].getLS() << endl;
		cout << "LF: " << tasks[i].getLF() << endl;
		cout << "Float: " << tasks[i].getLW() << endl;
		cout << "Level: " << tasks[i].getLevel() << endl;
		cout << "Height: " << tasks[i].getHeight() << endl << endl;
	}
	
}

void displayGraphics::resizeGL(int w, int h){
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();

   gluOrtho2D(-w/2, w/2, -h/2, h/2);
   // Update OpenGL viewport and internal variables
   glViewport(0,0,w,h);
}

displayGraphics::~displayGraphics() {
}

void displayGraphics::initializeGL()
{
	qglClearColor(Qt::gray);
	
}

void displayGraphics::paintGL()
{
	glClear(GL_COLOR_BUFFER_BIT );
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1280.0, 0.0, 720.0);
	qglColor(Qt::white);
	glLineWidth(1);

	
	for (double i = 0.0; i < 2 * PI; i += PI / 6)
	{
		glBegin(GL_TRIANGLES);
		glVertex2f(30.0, winHeight / 2.0);
		glVertex2f(30.0 + cos(i) * 20.0, winHeight / 2.0 + sin(i) * 20.0);
		glVertex2f(30.0 + cos(i + (PI / 6)) * 20.0, winHeight / 2.0 + sin(i + (PI / 6)) * 20.0);
		glEnd();
	}

	for (double i = 0.0; i < 2 * PI; i += PI / 6)
	{
		glBegin(GL_TRIANGLES);
		glVertex2f(winWidth - 30.0, winHeight / 2.0);
		glVertex2f(winWidth - 30.0 + cos(i) * 20.0, winHeight / 2.0 + sin(i) * 20.0);
		glVertex2f(winWidth - 30.0 + cos(i + (PI / 6)) * 20.0, winHeight / 2.0 + sin(i + (PI / 6)) * 20.0);
		glEnd();
	}

	qglColor(Qt::black);

	glBegin(GL_LINE_LOOP);
	for (double i = 0.0; i < 2 * PI; i += PI / 6)
		glVertex2f(30.0 + cos(i) * 20.0, winHeight / 2.0 + sin(i) * 20.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	for (double i = 0.0; i < 2 * PI; i += PI / 6)
		glVertex2f(winWidth - 30.0 + cos(i) * 20.0, winHeight / 2.0 + sin(i) * 20.0);
	glEnd();

	for (int i = 0; i < numTasks; i++)
	{
		float x = static_cast<float>(100 + (winWidth - 200 - nodeWidth) * tasks[i].getLevel() / highestLevel);
		float y = static_cast<float>(tasks[i].getHeight());

		qglColor(Qt::white);

		glBegin(GL_QUADS);
		glVertex2f(x, y);
		glVertex2f(x + nodeWidth, y);
		glVertex2f(x + nodeWidth, y + nodeHeight);
		glVertex2f(x, y + nodeHeight);
		glEnd();

		qglColor(Qt::black);

		glBegin(GL_LINE_LOOP);
		glVertex2f(x, y);
		glVertex2f(x + nodeWidth, y);
		glVertex2f(x + nodeWidth, y + nodeHeight);
		glVertex2f(x, y + nodeHeight);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(x, y + nodeHeight / 3.0);
		glVertex2f(x + nodeWidth, y + nodeHeight / 3.0);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(x, y + nodeHeight * 2.0 / 3.0);
		glVertex2f(x + nodeWidth, y + nodeHeight * 2.0 / 3.0);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(x + nodeWidth / 3.0, y + nodeHeight);
		glVertex2f(x + nodeWidth / 3.0, y + nodeHeight * 2.0 / 3.0);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(x + nodeWidth * 2.0 / 3.0, y + nodeHeight);
		glVertex2f(x + nodeWidth * 2.0 / 3.0, y + nodeHeight * 2.0 / 3.0);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(x + nodeWidth / 3.0, y);
		glVertex2f(x + nodeWidth / 3.0, y + nodeHeight / 3.0);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(x + nodeWidth * 2.0 / 3.0, y);
		glVertex2f(x + nodeWidth * 2.0 / 3.0, y + nodeHeight / 3.0);
		glEnd();

		string pHolder;
		char cstringHolder[16];

		
		pHolder = static_cast<ostringstream*>( &(ostringstream() << tasks[i].getES()))->str();
		strcpy(cstringHolder, pHolder.c_str());
		renderText(x + nodeWidth / 6.0 - 3.0, this->height() - (y + nodeHeight * 2.0 / 3.0 + 5.0), cstringHolder, QFont());

		pHolder = static_cast<ostringstream*>( &(ostringstream() << tasks[i].getEF()))->str();
		strcpy(cstringHolder, pHolder.c_str());
		renderText(x + nodeWidth * 5.0 / 6.0 - 3.0, this->height() - (y + nodeHeight * 2.0 / 3.0 + 5.0), cstringHolder, QFont());

		pHolder = static_cast<ostringstream*>( &(ostringstream() << tasks[i].getLen()))->str();
		strcpy(cstringHolder, pHolder.c_str());
		renderText(x + nodeWidth * 3.0 / 6.0 - 3.0, this->height() - (y + nodeHeight * 2.0 / 3.0 + 5.0), cstringHolder, QFont());

		pHolder = static_cast<ostringstream*>( &(ostringstream() << tasks[i].getLS()))->str();
		strcpy(cstringHolder, pHolder.c_str());
		renderText(x + nodeWidth / 6.0 - 3.0, this->height() - (y + 5.0), cstringHolder, QFont());

		pHolder = static_cast<ostringstream*>( &(ostringstream() << tasks[i].getLF()))->str();
		strcpy(cstringHolder, pHolder.c_str());
		renderText(x + nodeWidth * 5.0 / 6.0 - 3.0, this->height() - (y + 5.0), cstringHolder, QFont());

		pHolder = static_cast<ostringstream*>( &(ostringstream() << tasks[i].getLW()))->str();
		strcpy(cstringHolder, pHolder.c_str());
		renderText(x + nodeWidth * 3.0 / 6.0 - 3.0, this->height() - (y + 5.0), cstringHolder, QFont());

		strcpy(cstringHolder, tasks[i].getName());
		renderText(x + nodeWidth * 3.0 / 6.0 - 3.0, this->height() - (y + nodeHeight / 3.0 + 5.0), cstringHolder, QFont());


		for (int k = 0; k < tasks[i].getNumDependencies(); k++)
		{
			int j = tasks[i].getDependency(k);
			float x2 = 0.0;
			float y2 = 0.0;
			for (int l = 0; l < numTasks; l++)
			{
				if (tasks[l].getID() == j)
				{
					x2 = static_cast<float>(100 + (winWidth - 200 - nodeWidth) * tasks[l].getLevel() / highestLevel);
					y2 = static_cast<float>(tasks[l].getHeight());
				}
			}
			glBegin(GL_LINES);
				glVertex2f(x, y + nodeHeight / 2.0);
				glVertex2f(x2 + nodeWidth, y2 + nodeHeight / 2.0);
			glEnd();

		}

		if (tasks[i].getNumDependencies() == 0)
		{
			float deltaY = winHeight / 2.0 - y + nodeHeight / 2.0;
			float deltaX = 30.0 - x;
			float angle;
			angle = atan(deltaY / deltaX);
			cout << angle << endl;
			glBegin(GL_LINES);
			glVertex2f(x, y + nodeHeight / 2.0);
			glVertex2f(30.0 + cos(angle) * 20.0, winHeight / 2.0 + sin(angle) * 20.0);
			glEnd();
		}

		if (tasks[i].getNumDependants() == 0)
		{
			float deltaY = winHeight / 2.0 - y + nodeHeight / 2.0;
			float deltaX = -30.0 - x;
			float angle;
			angle = atan(deltaY / deltaX);
			cout << angle << endl;
			glBegin(GL_LINES);
			glVertex2f(x + nodeWidth, y + nodeHeight / 2.0);
			glVertex2f(winWidth - 30.0 - cos(angle) * 20.0, winHeight / 2.0 + sin(angle) * 20.0);
			glEnd();
			

		}

		glFlush();
	}
}