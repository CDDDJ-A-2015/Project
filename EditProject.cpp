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
using namespace std;

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
		widget.lFP->setText(QString::number(vFP.calc()) + " Function Points");
	}
}

void createProject()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    
    RP.Request = false;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    T.T = 2;
    
    //Send to server that client is about to send a login packet
    int PID = -1;
    T.ID = PID;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
   
    /*
        FILL THIS PACKET FOR ME DAVID
        ITS IN CLIENT_SIDE.h
     */
    
    createProject_Packet P; // <<<<<<
    
    n = write(sockfd, &P, sizeof(P));
    if(n < 0)
        cout << "Error writing to socket" << endl;
    
    
    int id = 0;
    
    n = read(sockfd, &id, sizeof(int));
    if(n < 0)
        cout <<"error reading from socket" << endl;
    
    
}