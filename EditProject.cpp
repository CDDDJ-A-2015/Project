/*
 * File:   EditProject.cpp
 * Author: dm940
 *
 * Created on 14 May 2015, 6:01 PM
 */

#include "EditProject.h"
#include "Project.h"

EditProject::EditProject() {
	widget.setupUi(this);
	connect(widget.buttonBox,SIGNAL(accepted()),this,SLOT(clickSave()));
	connect(widget.buttonBox,SIGNAL(rejected()),this,SLOT(clickCancel()));
	id = -1;
	save = false;
}

EditProject::~EditProject() {
}

void EditProject::clickSave() {
	//ensure everything is correct
	close();
	save = true;
	if(id == -1) {
		//get ID
		widget.lID->setText(QString::number(1));
		//add Project and get id =
	}
	else {
		//save project
		
	}
	Project *vProject = new Project;
	vProject->setID(widget.lID->text().toInt());
	vProject->show();
}

void EditProject::clickCancel() {
	close();
	if (id != -1) {
		Project *vProject = new Project;
		vProject->setID(id);
		vProject->show();
	}
}

void EditProject::setID(int tmp) {
	id = tmp;
	//getProject
	widget.leProjName->setReadOnly(true);
	widget.leProjName->setText("BLAH");
	widget.bChooseManager->hide();
}