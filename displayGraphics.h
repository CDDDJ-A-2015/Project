/* 
 * File:   displayGraphics.h
 * Author: dm940
 *
 * Created on 20 May 2015, 11:43 AM
 */

#ifndef _DISPLAYGRAPHICS_H
#define	_DISPLAYGRAPHICS_H

#include <QtOpenGL/QGLWidget>
#include <list>

//#include "ui_displayGraphics.h"
//#include "apn.h"
class APNNode
{
	private:
		int id;
		char taskName[64];
		int length;
		int earlyStart;
		int earlyFinish;
		int lateStart;
		int lateFinish;
		int leeway;
		std::list <int> dependencies;
		int numDependencies;
		std::list <int> dependants;
		int numDependants;
		int level;
		int height;
	public:
		APNNode();
		void setID(int);
		void setName(char*);
		void setLen(int);
		void setHeight(int);
		void addDependency(int i);
		void addDependant(int);
		void pass1(int, int, APNNode [], int&, int&);
		void pass2(int, APNNode [], int&);
		void printDependencies();
		void printDependants();
		void swapHeights(APNNode&);
		int getID();
		char* getName();
		int getLen();
		int getES();
		int getEF();
		int getLS();
		int getLF();
		int getLW();
		int getDependency(int);
		int getDependant(int);
		int getNumDependencies();
		int getNumDependants();
		int getLevel();
		int getHeight();
};

class displayGraphics : public QGLWidget {
public:
	displayGraphics(QGLWidget* parent, char* file);
	virtual ~displayGraphics();
	void initializeGL();
	void paintGL();
	void resizeGL(int w, int  h);
private:
	//Ui::displayGraphics widget;
	APNNode* tasks;
	int numTasks;
	int highestLevel;
};

#endif	/* _DISPLAYGRAPHICS_H */
