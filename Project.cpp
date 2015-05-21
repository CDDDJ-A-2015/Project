/*
 * File:   Project.cpp
 * Author: dm940
 *
 * Created on 21 March 2015, 3:37 PM
 */

#include "Project.h"
#include "EditProject.h"
#include "StringDialog.h"
#include "Task.h"
#include "displayGraphics.h"
#include <iostream>
using namespace std;
Project::Project() {
    widget.setupUi(this);
	connect(widget.bEditProject,SIGNAL(clicked()),this,SLOT(editProject()));
	connect(widget.bAddComment,SIGNAL(clicked()),this,SLOT(addComment()));
	connect(widget.tProjTaskList, SIGNAL(doubleClicked(QModelIndex)),this, SLOT(viewTask(QModelIndex)));
	connect(widget.bViewGraphics,SIGNAL(clicked()),this,SLOT(clickbViewGraphics()));
    showTasks();
}

Project::~Project() {
    delete[] newTab;
}

void Project::editProject() {
	EditProject *vEditProject = new EditProject;
	vEditProject->setID(id);
	vEditProject->show();
	close();
}

void Project::addComment() {
	StringDialog *vAddComment = new StringDialog;
	vAddComment->exec();
	if (vAddComment->result() == QDialog::Accepted) {
		widget.listComments->addItem(vAddComment->getText());
	}
}

void Project::viewTask(QModelIndex index) {
	Task *vTask = new Task;
	vTask->setID(index.sibling(index.row(),0).data().toInt());
	vTask->show();
}

void Project::setID(int tmp) {
	id = tmp;
	widget.lProjectID->setText("Project ID: " + QString::number(id));
}

void Project::showTasks() {
    
}

void Project::clickbViewGraphics() {
	displayGraphics *a = new displayGraphics(0,"a.txt");
	a->show();
}