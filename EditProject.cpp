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
#include <QMessageBox>
#include "TeamMembers.h"
using namespace std;

EditProject::EditProject() {
	widget.setupUi(this);
	connect(widget.buttonBox,SIGNAL(accepted()),this,SLOT(clickSave()));
	connect(widget.buttonBox,SIGNAL(rejected()),this,SLOT(clickCancel()));
	connect(widget.bChooseManager,SIGNAL(clicked()),this,SLOT(clickbChooseManager()));
	connect(widget.bC1,SIGNAL(clicked()),this,SLOT(clickbC1()));
	connect(widget.bC2,SIGNAL(clicked()),this,SLOT(clickbC2()));
	connect(widget.bFP,SIGNAL(clicked()),this,SLOT(clickbFP()));
	id = -1;
	save = false;
	widget.dBeg->setDate(QDateTime::currentDateTime().date());
	P.Manager_ID = -1;
}

EditProject::~EditProject() {
}

void EditProject::clickSave() {
	//ensure everything is correct
	if(P.Manager_ID == -1) {
		QMessageBox msgBox;
		msgBox.setIcon(QMessageBox::Warning);
		msgBox.setText("You cannot make a new Project without a manager");
		msgBox.exec();
		return;
	}
	close();
	save = true;
	if(id == -1) { //New project
		strcpy(P.Name,widget.eProjName->text().toStdString().c_str());
		strcpy(P.Beg_Date,widget.dBeg->text().toStdString().c_str());
		strcpy(P.Description,widget.eDesc->toPlainText().toStdString().c_str());
		P.CCMO1 = widget.lC1->text().toInt();
		P.CCMO2 = widget.lC2->text().toInt();
		P.F_Points = widget.lFP->text().toInt();
		strcpy(P.End_Date,widget.dBeg->text().toStdString().c_str());
		strcpy(P.Last_Updated,"aa");;
		createProject();
		widget.lID->setText(QString::number(id));
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
	widget.lID->setText(QString::number(id));
	getProject();
	widget.eProjName->setReadOnly(true);
	widget.bChooseManager->hide();
}

void EditProject::clickbC1() {
	Coco1 vC1;
	vC1.exec();
	if (vC1.result() == QDialog::Accepted) {
		widget.lC1->setText(QString::number(vC1.calc()));
	}
}

void EditProject::clickbC2() {
	Coco2 vC2;
	vC2.exec();
	if (vC2.result() == QDialog::Accepted) {
		widget.lC2->setText(QString::number(vC2.calc()));
	}
}

void EditProject::clickbFP() {
	FuncPoints vFP;
	vFP.exec();
	if (vFP.result() == QDialog::Accepted) {
		widget.lFP->setText(QString::number(vFP.calc()));
	}
}

void EditProject::clickbChooseManager() {
	TeamMembers *vTeamMembers = new TeamMembers;
	vTeamMembers->setID(2,0);
	vTeamMembers->exec();
	if (vTeamMembers->result() == QDialog::Accepted) {
		P.Manager_ID = vTeamMembers->getGID();
		widget.lManager->setText("Manager: " + vTeamMembers->getGName());
	}
}

void EditProject::createProject()
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
    
    //createProject_Packet P; // <<<<<<
	
    n = write(sockfd, &P, sizeof(P));
    if(n < 0)
        cout << "Error writing to socket" << endl;
    
    
    
    n = read(sockfd, &id, sizeof(int));
    if(n < 0)
        cout <<"error reading from socket" << endl;
    
    
}

void EditProject::getProject()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    RP.Request = true;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //Send to server that client is about to send The Global Project List
    T.T = 21;
    T.ID = id;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR reading to socket" << endl;
    if(T.T == 21)
    {
        bool exit = false;
        do{
            Project_Packet PP;
            
            //Receive Project List Packets
            n = read(sockfd,&PP,sizeof(PP));
            if (n < 0)
                cout << "ERROR reading to socket" << endl;

            if(PP.Manager_ID == -1)
            {
                exit = true;
                break;
            }
            widget.eProjName->setText(PP.Name);
			widget.eDesc->clear();
            widget.eDesc->insertPlainText(PP.Description);
			widget.dBeg->setDate(QDate::fromString(PP.End_Date,"dd/MM/yyyy"));
            
			//P.Progress = PP.Progress;
            //strcpy(P.End_Date, PP.End_Date);
            widget.lManager->setText(PP.Manager_Name);
			P.Manager_ID = PP.Manager_ID;
			widget.lC1->setText(QString::number(PP.CCMO1) + "p/m");
			widget.lC2->setText(QString::number(PP.CCMO2) + "p/m");
			widget.lFP->setText(QString::number(PP.F_Points));
			
            
        }while(exit == false);
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
}