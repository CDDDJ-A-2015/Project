/*
 * File:   displayGraphics.cpp
 * Author: dm940
 *
 * Created on 20 May 2015, 11:43 AM
 */

#include "displayGraphics.h"
#include <QtGui/QtGui>
#include <GL/glu.h>
#include <GL/gl.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
//#include <GL/glut.h>
#include <cmath>
#include <climits>
#include <cstring>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;


#define winWidth 1280
#define wHeight 720
#define nodeHeight 55
#define nodeWidth 124
#define barHeight 48
#define dayWidth 48
#define shiftSpeed 1
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
	r = 0;
	g = 0;
	b = 0;
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

int APNNode::calcProjectBuffer(int currentBuffer, APNNode tasks[], int & numTasks)
{
	currentBuffer += comfortZone;
	int a = currentBuffer;
	if (numDependants == 0)
		return a;
	else
	{
		for (list<int>::iterator it = dependants.begin(); it != dependants.end(); ++it)
		{
			int j = *it;
			
			for (int i = 0; i < numTasks; i++)
			{
				if (tasks[i].getID() == j)
				{
					if (tasks[i].leeway == 0)
					{
						a = tasks[i].calcProjectBuffer(currentBuffer, tasks, numTasks);
						if (a > currentBuffer)
							currentBuffer = a;
					}
				}
			}
		}
	}
	return a;
}

int APNNode::calcFeedingBuffer(int currentBuffer, APNNode tasks[], int & numTasks)
{
	currentBuffer += comfortZone;
	int a = currentBuffer;
	bool found = false;
	if (numDependencies == 0 || leeway == 0)
		return a;
	else
	{
		for (list<int>::iterator it = dependencies.begin(); it != dependencies.end(); ++it)
		{
			int j = *it;

			for (int i = 0; i < numTasks; i++)
			{
				if (tasks[i].getID() == j)
				{
					if (tasks[i].leeway != 0)
					{
						found = true;
						a = tasks[i].calcProjectBuffer(currentBuffer, tasks, numTasks);
						if (a > currentBuffer)
							currentBuffer = a;
					}
				}
			}
			if (!found)
				return 0;
		}
	}
	return a;
}

void APNNode::lookFeedingBuffer(APNNode tasks[], int & numTasks, int apnImageWidth, int apnImageHeight, int highestLevel, int& buf, double &fbu)
{
	for (list<int>::iterator it = dependencies.begin(); it != dependencies.end(); ++it)
	{
		int j = *it;

		for (int i = 0; i < numTasks; i++)
		{
			if (tasks[i].getID() == j)
			{
				if (tasks[i].leeway == 0)
					tasks[i].lookFeedingBuffer(tasks, numTasks, apnImageWidth, apnImageHeight, highestLevel, buf, fbu);
				else if (leeway == 0)
				{
					fbu = tasks[i].calcFeedingBuffer(fbu, tasks, numTasks)/2;
					buf = i;
				}
			}
		}
	}
}

void APNNode::setR(float i)
{
	r = i;
}

void APNNode::setG(float i)
{
	g = i;
}

void APNNode::setB(float i)
{
	b = i;
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

float APNNode::getR()
{
	return r;
}

float APNNode::getG()
{
	return g;
}

float APNNode::getB()
{
	return b;
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

displayGraphics::displayGraphics(QGLWidget* parent):QGLWidget(parent)
{
	this->setFixedSize(winWidth, wHeight);
	ganttImageWidth = 0;
	ganttImageHeight = 0;
	apnImageWidth = 0;
	apnImageHeight = 0;
	currentHeight = 0;
	currentWidth = 0;
	currentX = 0;
	currentY = 0;
}

void displayGraphics::resizeGL(int w, int h){
	currentWidth = w;
	currentHeight = h;
	glViewport(0, h - wHeight, winWidth, wHeight);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	currentWidth = w;
	currentHeight = h;
	gluOrtho2D(currentX, currentX + currentWidth, currentY, currentY + currentHeight); //left, right, bottom, top
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

displayGraphics::~displayGraphics() {
	delete [] tasks;
}

void displayGraphics::initializeGL()
{
	qglColor(Qt::gray);
	qglClearColor(Qt::gray);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	cout << "DIMENSIONS: " << currentX << " " << currentX + currentWidth << " " << currentY << " " << currentY + currentHeight << endl;
	gluOrtho2D(currentX, currentX + currentWidth, currentY, currentY + currentHeight);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity(); 
}

void displayGraphics::paintGL()
{
	switch (typeGraph) {
		case 0:
		{
			qglColor(Qt::white);
			glLineWidth(1);

			for (double i = 0.0; i < 2 * PI; i += PI / 6)
			{
				renderText(10, 10, QString::number(apnImageHeight), QFont());
				glBegin(GL_TRIANGLES);
				glVertex2f(30.0, apnImageHeight / 2.0);
				glVertex2f(30.0 + cos(i) * 20.0, apnImageHeight / 2.0 + sin(i) * 20.0);
				glVertex2f(30.0 + cos(i + (PI / 6)) * 20.0, apnImageHeight / 2.0 + sin(i + (PI / 6)) * 20.0);
				glEnd();
			}

			for (double i = 0.0; i < 2 * PI; i += PI / 6)
			{
				glBegin(GL_TRIANGLES);
				glVertex2f(apnImageWidth - 30.0, apnImageHeight / 2.0);
				glVertex2f(apnImageWidth - 30.0 + cos(i) * 20.0, apnImageHeight / 2.0 + sin(i) * 20.0);
				glVertex2f(apnImageWidth - 30.0 + cos(i + (PI / 6)) * 20.0, apnImageHeight / 2.0 + sin(i + (PI / 6)) * 20.0);
				glEnd();
			}

			glColor3f(0.0f, 0.0f, 0.0f);

			glBegin(GL_LINE_LOOP);
			for (double i = 0.0; i < 2 * PI; i += PI / 6)
				glVertex2f(30.0 + cos(i) * 20.0, apnImageHeight / 2.0 + sin(i) * 20.0);
			glEnd();

			glBegin(GL_LINE_LOOP);
			for (double i = 0.0; i < 2 * PI; i += PI / 6)
				glVertex2f(apnImageWidth - 30.0 + cos(i) * 20.0, apnImageHeight / 2.0 + sin(i) * 20.0);
			glEnd();

			for (int i = 0; i < numTasks; i++)
			{
				float x = static_cast<float>(apnImageWidth / (highestLevel + 2) * (tasks[i].getLevel() + 1) - (nodeWidth / 2));
				float y;

				y = static_cast<float>(tasks[i].getHeight());


				glColor3f(1.0f, 1.0f, 1.0f);

				glBegin(GL_QUADS);
				glVertex2f(x, y);
				glVertex2f(x + nodeWidth, y);
				glVertex2f(x + nodeWidth, y + nodeHeight);
				glVertex2f(x, y + nodeHeight);
				glEnd();

				if ((tasks[i].getLS() - tasks[i].getES()) == 0)
				{
					glColor3f(1.0, 0.0, 0.0);
				}
				else
				{
					glColor3f(0.0, 0.0, 0.0);
				}

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

				glColor3f(0.0, 0.0, 0.0);
				string pHolder;
				char cstringHolder[50];
				
				

				if (nodeHeight * currentHeight / apnImageHeight / 3 > 18)
				{
									
					pHolder = static_cast<ostringstream*>(&(ostringstream() << tasks[i].getES()))->str();
					strcpy(cstringHolder, pHolder.c_str());
					renderText(static_cast<double>(x + nodeWidth / 6.0 - 3.0), static_cast<double>(y + nodeHeight * 2.0 / 3.0 + 5.0), 0.1, cstringHolder, QFont());
					
					pHolder = static_cast<ostringstream*>(&(ostringstream() << tasks[i].getEF()))->str();
					strcpy(cstringHolder, pHolder.c_str());
					renderText(static_cast<double>(x + nodeWidth * 5.0 / 6.0 - 3.0), static_cast<double>((y + nodeHeight * 2.0 / 3.0 + 5.0)), 0.1, cstringHolder, QFont());
					
					pHolder = static_cast<ostringstream*>(&(ostringstream() << tasks[i].getLen()))->str();
					strcpy(cstringHolder, pHolder.c_str());
					renderText(static_cast<double>(x + nodeWidth * 3.0 / 6.0 - 3.0), static_cast<double>((y + nodeHeight * 2.0 / 3.0 + 5.0)), 0.1, cstringHolder, QFont());
					
					pHolder = static_cast<ostringstream*>(&(ostringstream() << tasks[i].getLS()))->str();
					strcpy(cstringHolder, pHolder.c_str());
					renderText(static_cast<double>(x + nodeWidth / 6.0 - 3.0), static_cast<double>((y + 5.0)), 0.1, cstringHolder, QFont());
					
					pHolder = static_cast<ostringstream*>(&(ostringstream() << tasks[i].getLF()))->str();
					strcpy(cstringHolder, pHolder.c_str());
					renderText(static_cast<double>(x + nodeWidth * 5.0 / 6.0 - 3.0), static_cast<double>((y + 5.0)), 0.1,cstringHolder, QFont());
					
					pHolder = static_cast<ostringstream*>(&(ostringstream() << tasks[i].getLW()))->str();
					strcpy(cstringHolder, pHolder.c_str());
					renderText(static_cast<double>(x + nodeWidth * 3.0 / 6.0 - 3.0), static_cast<double>((y + 5.0)), 0.1,cstringHolder, QFont());
					
					strcpy(cstringHolder, tasks[i].getName());
					renderText(static_cast<double>(x + 10.0), static_cast<double>((y + nodeHeight / 3.0 + 5.0)), 0.1, cstringHolder, QFont());
				}


				for (int k = 0; k < tasks[i].getNumDependencies(); k++)
				{
					int j = tasks[i].getDependency(k);
					float x2 = 0.0;
					float y2 = 0.0;
					for (int l = 0; l < numTasks; l++)
					{
						if (tasks[l].getID() == j)
						{
							x2 = static_cast<float>(apnImageWidth / (highestLevel + 2) * (tasks[i].getLevel()) - (nodeWidth / 2));
							y2 = static_cast<float>(tasks[l].getHeight());

							if ((tasks[i].getLS() - tasks[i].getES()) == 0 && (tasks[l].getLS() - tasks[l].getES()) == 0)
							{
								glColor3f(1.0, 0.0, 0.0);
							}
							else
							{
								glColor3f(0.0, 0.0, 0.0);
								glLineWidth(1);
							}
						}
					}
					glBegin(GL_LINES);
					glVertex2f(x, y + nodeHeight / 2.0);
					glVertex2f(x2 + nodeWidth, y2 + nodeHeight / 2.0);
					glEnd();

				}

				if ((tasks[i].getLS() - tasks[i].getES()) == 0)
				{
					glColor3f(1.0, 0.0, 0.0);
				}
				else
				{
					glColor3f(0.0, 0.0, 0.0);
					glLineWidth(1);
				}
				if (tasks[i].getNumDependencies() == 0)
				{
					float deltaY = apnImageHeight / 2.0 - y + nodeHeight / 2.0;
					float deltaX = 30.0 - x;
					float angle;
					angle = atan(deltaY / deltaX);
					glBegin(GL_LINES);
					glVertex2f(x, y + nodeHeight / 2.0);
					glVertex2f(30.0 + cos(angle) * 20.0, apnImageHeight / 2.0 + sin(angle) * 20.0);
					glEnd();
				}

				if (tasks[i].getNumDependants() == 0)
				{
					float deltaY = apnImageHeight / 2.0 - y + nodeHeight / 2.0;
					float deltaX = -30.0 - x;
					float angle;
					angle = atan(deltaY / deltaX);
					glBegin(GL_LINES);
					glVertex2f(x + nodeWidth, y + nodeHeight / 2.0);
					glVertex2f(apnImageWidth - 30.0 - cos(angle) * 20.0, apnImageHeight / 2.0 + sin(angle) * 20.0);
					glEnd();


				}

				glColor3f(0.0, 0.0, 0.0);
				glLineWidth(1);
				glBegin(GL_LINES);
					glVertex2f(apnImageWidth - 60.0, apnImageHeight / 2.0 - 30.0);
					glVertex2f(apnImageWidth - 60.0, apnImageHeight / 2.0 + 30.0);
					glVertex2f(apnImageWidth - 60.0, apnImageHeight / 2.0 + 30.0);
					glVertex2f(apnImageWidth - 80.0, apnImageHeight / 2.0 + 40.0);
					glVertex2f(apnImageWidth - 60.0, apnImageHeight / 2.0 - 30.0);
					glVertex2f(apnImageWidth - 80.0, apnImageHeight / 2.0 - 40.0);
				glEnd();
				
				
				int pbu = 0;
				for (int i = 0; i < numTasks; i++)
				{
					if (tasks[i].getNumDependencies() == 0)
					{
						pbu = tasks[i].calcProjectBuffer(0, tasks, numTasks)/2;
					}
				}

				pHolder = static_cast<ostringstream*>(&(ostringstream() << pbu))->str();
				strcpy(cstringHolder, pHolder.c_str());
				renderText(apnImageWidth - 60.0, apnImageHeight / 2.0 + 45.0 , 0.0, cstringHolder, QFont());
				
				

				double fbu = 0;
				for (int i = 0; i < numTasks; i++)
				{
					if (tasks[i].getNumDependants() == 0 && tasks[i].getLS() - tasks[i].getES() != 0)
					{
						
						fbu = tasks[i].calcFeedingBuffer(0, tasks, numTasks)/2;
						if ((int)fbu != 0)
						{
							glColor3f(0.0, 0.0, 0.0);
							glLineWidth(1);
							glBegin(GL_LINES);
							glVertex2f(apnImageWidth / (highestLevel + 2) * (tasks[i].getLevel() + 1) + (nodeWidth / 2) + 20.0, tasks[i].getHeight());
							glVertex2f(apnImageWidth / (highestLevel + 2) * (tasks[i].getLevel() + 1) + (nodeWidth / 2) + 20.0, tasks[i].getHeight() + nodeHeight);
							glVertex2f(apnImageWidth / (highestLevel + 2) * (tasks[i].getLevel() + 1) + (nodeWidth / 2) + 20.0, tasks[i].getHeight() + nodeHeight);
							glVertex2f(apnImageWidth / (highestLevel + 2) * (tasks[i].getLevel() + 1) + (nodeWidth / 2), tasks[i].getHeight() + nodeHeight + 20.0);
							glVertex2f(apnImageWidth / (highestLevel + 2) * (tasks[i].getLevel() + 1) + (nodeWidth / 2) + 20.0, tasks[i].getHeight());
							glVertex2f(apnImageWidth / (highestLevel + 2) * (tasks[i].getLevel() + 1) + (nodeWidth / 2), tasks[i].getHeight() - 20.0);
							glEnd();

							pHolder = static_cast<ostringstream*>(&(ostringstream() << fbu))->str();
							strcpy(cstringHolder, pHolder.c_str());
							renderText(apnImageWidth / (highestLevel + 2) * (tasks[i].getLevel() + 1) + (nodeWidth / 2) + 20.0, tasks[i].getHeight() + nodeHeight + 15.0, 0.0, cstringHolder, QFont());
						}
					}
					else
					{
						/*
						int buf;
						tasks[i].lookFeedingBuffer(tasks, numTasks, apnImageWidth, apnImageHeight, highestLevel, buf, fbu);
						glColor3f(0.0, 0.0, 0.0);
						glLineWidth(1);
						glBegin(GL_LINES);
							glVertex2f(apnImageWidth / (highestLevel + 2) * (tasks[buf].getLevel() + 1) + (nodeWidth / 2) + 20.0, tasks[buf].getHeight());
							glVertex2f(apnImageWidth / (highestLevel + 2) * (tasks[buf].getLevel() + 1) + (nodeWidth / 2) + 20.0, tasks[buf].getHeight() + nodeHeight);
							glVertex2f(apnImageWidth / (highestLevel + 2) * (tasks[buf].getLevel() + 1) + (nodeWidth / 2) + 20.0, tasks[buf].getHeight() + nodeHeight);
							glVertex2f(apnImageWidth / (highestLevel + 2) * (tasks[buf].getLevel() + 1) + (nodeWidth / 2), tasks[buf].getHeight() + nodeHeight + 20.0);
							glVertex2f(apnImageWidth / (highestLevel + 2) * (tasks[buf].getLevel() + 1) + (nodeWidth / 2) + 20.0, tasks[buf].getHeight());
							glVertex2f(apnImageWidth / (highestLevel + 2) * (tasks[buf].getLevel() + 1) + (nodeWidth / 2), tasks[i].getHeight() - 20.0);
						glEnd();

						pHolder = static_cast<ostringstream*>(&(ostringstream() << fbu))->str();
						strcpy(cstringHolder, pHolder.c_str());
						renderText(apnImageWidth / (highestLevel + 2) * (tasks[i].getLevel() + 1) + (nodeWidth / 2) + 15.0, apnImageHeight - (tasks[i].getHeight() + nodeHeight + 15.0), cstringHolder, QFont());
						*/
					}
				}

				if (fbu != 0)
				{
					pHolder = static_cast<ostringstream*>(&(ostringstream() << fbu))->str();
					strcpy(cstringHolder, pHolder.c_str());
					renderText(apnImageWidth - 60, apnImageHeight - (apnImageHeight / 2.0 + 40.0), cstringHolder, QFont());
				}
			}
			break;
		}
		case 1:
		{
			glColor3f(0.0f, 0.0f, 0.0f);
			glLineWidth(2);



			count = 0;



			for (int i = 0; i < numTasks; i++)
			{
				glColor3f(tasks[i].getR(), tasks[i].getG(), tasks[i].getB());
				for (int x = 0; x < tasks[i].getNumDependants(); x++)
				{
					int a = tasks[i].getDependant(x);
					glBegin(GL_LINES);
					glVertex2f(dayWidth * tasks[i].getEF(), ganttImageHeight - (barHeight * (1.5 + i)));
					glVertex2f(dayWidth * tasks[i].getEF() + (dayWidth * 0.5), ganttImageHeight - (barHeight * (1.5 + i)));
					glVertex2f(dayWidth * tasks[i].getEF() + (dayWidth * 0.5), ganttImageHeight - (barHeight * (1.5 + i)));
					glVertex2f(dayWidth * tasks[i].getEF() + (dayWidth * 0.5), ganttImageHeight - (barHeight * (2 + i)));
					glVertex2f(dayWidth * tasks[i].getEF() + (dayWidth * 0.5), ganttImageHeight - (barHeight * (2 + i)));
					glVertex2f(dayWidth * tasks[i].getEF() - (dayWidth * 0.5), ganttImageHeight - (barHeight * (2 + i)));
					glVertex2f(dayWidth * tasks[i].getEF() - (dayWidth * 0.5), ganttImageHeight - (barHeight * (2 + i)));
					glVertex2f(dayWidth * tasks[i].getEF() - (dayWidth * 0.5), ganttImageHeight - (barHeight * (0.5 + a)));
					glVertex2f(dayWidth * tasks[i].getEF() - (dayWidth * 0.5), ganttImageHeight - (barHeight * (0.5 + a)));
					glVertex2f(dayWidth * tasks[i].getEF(), ganttImageHeight - (barHeight * (0.5 + a)));
					glEnd();
				}
				for (int x = 0; x < tasks[i].getNumDependencies(); x++)
				{
					int b = tasks[i].getDependency(x);
					int a;
					for (int y = 0; y < numTasks; y++)
					{
						if (tasks[y].getID() == b)
							a = y;
					}
					if (tasks[a].getES() != tasks[i].getEF() && tasks[i].getNumDependencies() > 1)
					{
						glColor3f(tasks[a].getR(), tasks[a].getG(), tasks[a].getB());
						glBegin(GL_LINES);
						glVertex2f(dayWidth * tasks[i].getEF(), ganttImageHeight - (barHeight * (1.5 + i)));
						glVertex2f(dayWidth * tasks[a].getEF(), ganttImageHeight - (barHeight * (1.5 + i)));
						glEnd();
					}
				}

				//glColor3f(1.0f, 1.0f, 1.0f);
				glBegin(GL_QUADS);
				glVertex2f(dayWidth * tasks[i].getES(), ganttImageHeight - (barHeight * (1.25 + i)));
				glVertex2f(dayWidth * tasks[i].getEF(), ganttImageHeight - (barHeight * (1.25 + i)));
				glVertex2f(dayWidth * tasks[i].getEF(), ganttImageHeight - (barHeight * (1.75 + i)));
				glVertex2f(dayWidth * tasks[i].getES(), ganttImageHeight - (barHeight * (1.75 + i)));
				glEnd();

				glColor3f(0.0f, 0.0f, 0.0f);
				glBegin(GL_LINE_LOOP);
				glVertex2f(dayWidth * tasks[i].getES(), ganttImageHeight - (barHeight * (1.25 + i)));
				glVertex2f(dayWidth * tasks[i].getEF(), ganttImageHeight - (barHeight * (1.25 + i)));
				glVertex2f(dayWidth * tasks[i].getEF(), ganttImageHeight - (barHeight * (1.75 + i)));
				glVertex2f(dayWidth * tasks[i].getES(), ganttImageHeight - (barHeight * (1.75 + i)));
				glEnd();

				glColor3f(0.0, 0.0, 0.0);
				if (barHeight / ganttImageHeight * wHeight > 20)
					renderText(dayWidth * tasks[i].getES() + 1, ganttImageHeight - (barHeight * (1.65 + i)), tasks[i].getName(), QFont());
			}

			//glViewport(currentX, currentY + (currentHeight * 14 / 15), currentWidth, (currentHeight / 15));
			glColor3f(1.0, 1.0, 1.0);
			glBegin(GL_QUADS);
				glVertex2f(currentX, currentY + (currentHeight * 14 / 15));
				glVertex2f(currentWidth + currentX, currentY + (currentHeight * 14 / 15));
				glVertex2f(currentWidth + currentX, currentY + currentHeight);
				glVertex2f(currentX, currentY + currentHeight);
			glEnd();

			glColor3f(0.0, 0.0, 0.0);
			for (int x = currentX; x < currentX + currentWidth; x++)
			{
				if (x % dayWidth == 0)
				{
					glBegin(GL_LINES);
					glVertex2f(x, currentY + currentHeight);
					glVertex2f(x, currentY + (currentHeight * 14 / 15));
					glEnd();
				}
			}

			glBegin(GL_LINES);
			glVertex2f(currentX, currentY + (currentHeight * 14 / 15));
			glVertex2f(currentX + currentWidth, currentY + (currentHeight * 14 / 15));
			glEnd();
			break;
		}
		case 2:
			
			break;
	}
			glFlush();
}

void displayGraphics::getAPN_Data()
{
	cout << endl << "HELLO: " << PID << endl;
	cout << endl << PID << endl;
    //project ID
    Type_Packet T;
    Request_Packet RP;
    int n;
    
    RP.Request = true;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    T.T = 20;
    
    //Send to server that client is about to send a login packet
    //int PID = 1;
    T.ID = PID;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //Receive Type of packet about to be sent next
    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR reading to socket" << endl;
    APN_Packet PT;
    unsigned int INDEX = 0;
    if(T.T == 20)
    {
        APN_List AP;
        do
        {
            //Receive User Packet Type
            n = read(sockfd,&PT,sizeof(PT));
            if (n < 0)
                cout << "ERROR reading to socket" << endl;
            if(PT.Name[0] == '*')
            {
                cout << "~~~BREAK~~~" << endl;
                break;
            
            }
            
            if(INDEX != 0)
            {
                if(PT.ID == List.List[INDEX-1].ID)
                {
                    
                    if(PT.Dependency != -1)
                    {
                        List.List[INDEX-1].Parents.push_back(PT.Dependency);
                    }
                }
                else
                {

                    strcpy(AP.Name, PT.Name);
                    AP.Length = PT.Length;
                    AP.ID = PT.ID;
                    if(PT.Dependency != -1)
                    {

                        AP.Parents.push_back(PT.Dependency);

                        
                    }
                    List.List.push_back(AP);
                    AP.Parents.erase(AP.Parents.begin(), AP.Parents.end());
                    
                    
                    INDEX++;
                }
            }
            else
            {
                strcpy(AP.Name, PT.Name);
                AP.Length = PT.Length;
                AP.ID = PT.ID;
                if(PT.Dependency != -1)
                {
                    AP.Parents.push_back(PT.Dependency);
                }
                List.List.push_back(AP);
                INDEX++;
            }
            
            
            
        }while(PT.Name[0] != '*');
        
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
    
    cout <<"List: " << endl;
    for(unsigned int i = 0; i < List.List.size();i++)
    {
        cout << "Task: ";
        cout << List.List[i].Name << ":" << List.List[i].ID << endl;
        cout << "Dependencies: " << endl;
        if(List.List[i].Parents.size() == 0)
            cout << "Empty!" << endl;
        else
        {
            for(unsigned int j = 0; j < List.List[i].Parents.size();j++)
            {
                cout << List.List[i].Parents[j] << endl;
            }
        }
    }
    cout << "END" << endl;
}

void displayGraphics::setType(int tmp) {
	typeGraph = tmp;
}

void displayGraphics::setPID(int tmp) {
	PID = tmp;
	getAPN_Data();
	//ifstream fin;
	//fin.open(file);
	numTasks = 0;
	//fin >> numTasks;
	numTasks = List.List.size();
	tasks = new APNNode[numTasks];
	//fin.ignore();
	//int y;
	//char z[64];
	srand(time(NULL));
	for (int i = 0; i < numTasks; i++)
	{
		tasks[i].setR((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)+1) / 2);
		tasks[i].setG((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)+1) / 2);
		tasks[i].setB((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)+1) / 2);
		//fin >> y;
		tasks[i].setID(List.List[i].ID);
		//fin.ignore();
		//fin.getline(z, 63);
		tasks[i].setName(List.List[i].Name);

		//fin >> y;
		tasks[i].setLen(List.List[i].Length);
		//fin.ignore();

		//fin >> y;
		for (unsigned int j = 0; j < List.List[i].Parents.size(); j++)
		{
			//int a;
			//fin >> a;
			tasks[i].addDependency(List.List[i].Parents[j]);
			//fin.ignore();
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
	highestEF = 0;
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

	highestSame = 0;
	for (int i = 0; i <= highestLevel; i++)
	{
		int total = 0;
		for (int j = 0; j < numTasks; j++)
		{
			if (tasks[j].getLevel() == i)
				total++;
		}
		if (highestSame < total)
			highestSame = total;
		int count = 0;
		for (int j = 0; j < numTasks; j++)
		{
			

			if (tasks[j].getLevel() == i)
			{
				tasks[j].setHeight(100 + (wHeight - 100 - nodeHeight) * count / total);
				count++;
			}
		}
	}
	
	ganttImageWidth = dayWidth * highestEF;
	ganttImageHeight = barHeight * (numTasks + 1);

	apnImageWidth = (highestLevel + 2) * (nodeWidth * 2);
	apnImageHeight = highestSame * (nodeHeight * 2);
	
	currentWidth = winWidth;
	currentHeight = wHeight;
	
	if (typeGraph == 1)
	{
		if (apnImageHeight <= wHeight)
		{
			currentY = 0;
		}
		else
			currentY = apnImageHeight - currentHeight;
	}
	else if (typeGraph == 0)
	{
		if (ganttImageHeight <= wHeight)
			currentY = 0;
		else
			currentY = ganttImageHeight - currentHeight;
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
				tasks[j].setHeight(apnImageHeight / (total + 1) * (count + 1) - (nodeHeight / 2));
				count++;
			}
		}
	}	
}