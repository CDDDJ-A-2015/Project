/*
 * File:   Task.cpp
 * Author: dm940
 *
 * Created on 14 May 2015, 7:01 PM
 */

#include "Task.h"
#include "StringDialog.h"
#include "EditTask.h"
#include <ctime>
#include <iostream>
#include "Packets.h"
#include "Client_Side.h"
using namespace std;
extern int sockfd;

Task::Task() {
	widget.setupUi(this);
	connect(widget.bAddComment,SIGNAL(clicked()),this,SLOT(addComment()));
	connect(widget.bEditTask,SIGNAL(clicked()),this,SLOT(editTask()));
}

Task::~Task() {
}

void Task::setID(int tmp) {
	me.Task_ID = tmp;
	
	getTask();//READ
	
	widget.lID->setText(QString::number(me.Task_ID));
	widget.lName->setText(me.Name);
	widget.lPID->setText(QString::number(me.Project_ID));
	widget.lDescription->setText(me.Description);
	widget.lDue->setText(me.Date_Due);
	widget.lCreated->hide();
	switch (me.Priority) {
		case 0:
			widget.lPriority->setText("Trivial");
			break;
		case 1:
			widget.lPriority->setText("Low");
			break;
		case 2:
			widget.lPriority->setText("High");
			break;
		case 3:
			widget.lPriority->setText("Critical");
			break;
		default:
			widget.lPriority->setText("Unknown");
			break;
	};
	
	switch (me.Status) {
		case 0:
			widget.fStatus->show();
			widget.lStatus->setText("Pending");
			widget.progressBar->hide();
			break;
		case 1:
			widget.fStatus->show();
			widget.lStatus->setText("Not Started");
			widget.progressBar->hide();
			break;
		case 2:
			widget.fStatus->hide();
			widget.progressBar->show();
			widget.progressBar->setValue(me.Progress);
			break;
		case 3:
			widget.fStatus->show();
			widget.lStatus->setText("Completed");
			widget.progressBar->hide();
			break;
	};
	
	
}

void Task::addComment() {
	StringDialog *vAddComment = new StringDialog;
	vAddComment->exec();
	if (vAddComment->result() == QDialog::Accepted) {
		QTreeWidgetItem *tmp = new QTreeWidgetItem();
		
		time_t rawtime;
		struct tm * timeinfo;
		char buffer[80];
		time (&rawtime);
		timeinfo = localtime(&rawtime);
		strftime(buffer,80,"%d-%m-%Y %R",timeinfo);
		std::string str(buffer);
		
		tmp->setText(0,QString::fromStdString(str));
		tmp->setText(1,"MEEEEEEE");
		tmp->setText(2,vAddComment->getText());
		widget.tComments->addTopLevelItem(tmp);
	}
}

void Task::editTask() {
	EditTask *vET = new EditTask();
	vET->setID(me.Task_ID);
	vET->exec();
}

void Task::getTask()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    
    RP.Request = true;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    T.T = 23;
    
    //Send to server that client is about to send a login packet
    
    T.ID = me.Task_ID;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //Receive Type of packet about to be sent next
    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR reading to socket" << endl;
  
    if(T.T == 23)
    {
        
          Task_Packet PP;
       
        do
        {
             cout << sizeof(PP) << endl;
            //Receive User Packet Type
            n = read(sockfd,&PP,sizeof(PP));
            
            
            if (n < 0)
                cout << "ERROR reading to socket" << endl;
            if(PP.Name[0] == '*')
                break;
			strcpy(me.Name, PP.Name);
            strcpy(me.Description, PP.Description);
            me.Progress = PP.Progress;
            me.Status = PP.Status;
            me.Priority = PP.Priority;
            me.canedit = PP.canedit;
            me.Length = PP.Length;
            strcpy(me.Date_Due, PP.Date_Due);
            strcpy(me.Last_Updated, PP.Last_Updated);
            me.canedit = PP.canedit;
            me.Project_ID = PP.Project_ID;
            
            
        }while(PP.Name[0] != '*');
        
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
}