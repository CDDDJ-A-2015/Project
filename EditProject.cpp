/*
 * File:   EditProject.cpp
 * Author: dm940
 *
 * Created on 14 May 2015, 6:01 PM
 */

#include "EditProject.h"
#include "Project.h"
#include "Coco1.h"
#include "Coco2.h"
#include "FuncPoints.h"

EditProject::EditProject() {
	widget.setupUi(this);
	connect(widget.buttonBox,SIGNAL(accepted()),this,SLOT(clickSave()));
	connect(widget.buttonBox,SIGNAL(rejected()),this,SLOT(clickCancel()));
	connect(widget.bC1,SIGNAL(clicked()),this,SLOT(clickbC1()));
	connect(widget.bC2,SIGNAL(clicked()),this,SLOT(clickbC2()));
	connect(widget.bFP,SIGNAL(clicked()),this,SLOT(clickbFP()));
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

void EditProject::clickbC1() {
	Coco1 vC1;
	vC1.exec();
	if (vC1.result() == QDialog::Accepted) {
		widget.lC1->setText(QString::number(vC1.calc()) + " person/months");
	}
}

void EditProject::clickbC2() {
	Coco2 vC2;
	vC2.exec();
	if (vC2.result() == QDialog::Accepted) {
		widget.lC2->setText(QString::number(vC2.calc()) + " person/months");
	}
}

void EditProject::clickbFP() {
	FuncPoints vFP;
	vFP.exec();
	if (vFP.result() == QDialog::Accepted) {
		widget.lFP->setText(QString::number(vFP.calc()) + " person/months");
	}
}