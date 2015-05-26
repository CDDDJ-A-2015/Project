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
#include "TeamMembers.h"
using namespace std;
extern int sockfd, UID;
extern QString UName;

Task::Task() {
	widget.setupUi(this);
	connect(widget.bAddComment,SIGNAL(clicked()),this,SLOT(addComment()));
	connect(widget.bEditTask,SIGNAL(clicked()),this,SLOT(editTask()));
	connect(widget.bTeamMembers,SIGNAL(clicked()),this,SLOT(clickbTeamMembers()));
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
	widget.lCreated->setText(me.Date_Created);
	widget.lLength->setText(QString::number(me.Length));
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
	
	if (!me.canedit)
		widget.wCanEdit->hide();
	
	getTaskComments();
	widget.tComments->model()->insertRows(0,me.Task_Comments.size());
	for(unsigned int i=0;i<me.Task_Comments.size();i++) {
		widget.tComments->topLevelItem(i)->setText(0,me.Task_Comments[i].Date);
		widget.tComments->topLevelItem(i)->setText(1,QString::number(me.Task_Comments[i].User_ID));
		widget.tComments->topLevelItem(i)->setText(2,me.Task_Comments[i].Comment);
	}
	
	getTaskChildren();
	widget.tParent->model()->insertRows(0,me.Child_Task.size());
	for (unsigned int i=0;i<me.Child_Task.size();i++) {
		widget.tParent->topLevelItem(i)->setText(0,QString::number(me.Child_Task[i].ID));
		widget.tParent->topLevelItem(i)->setText(1,me.Child_Task[i].name);
		switch (me.Child_Task[i].status) {
		case 0:
			widget.tParent->topLevelItem(i)->setText(2,"Pending");
			break;
		case 1:
			widget.tParent->topLevelItem(i)->setText(2,"Not Started");
			break;
		case 2:
			widget.tParent->topLevelItem(i)->setText(2,"In Progress");
			break;
		case 3:
			widget.tParent->topLevelItem(i)->setText(2,"Completed");
			break;
		};
		widget.tParent->topLevelItem(i)->setText(3,me.Child_Task[i].date_due);
	}
	
	getTaskDependencies();
	widget.tDep->model()->insertRows(0,me.Parent_Task.size());
	for (unsigned int i=0;i<me.Parent_Task.size();i++) {
		widget.tDep->topLevelItem(i)->setText(0,QString::number(me.Parent_Task[i].ID));
		widget.tDep->topLevelItem(i)->setText(1,me.Parent_Task[i].name);
		switch (me.Parent_Task[i].status) {
		case 0:
			widget.tDep->topLevelItem(i)->setText(2,"Pending");
			break;
		case 1:
			widget.tDep->topLevelItem(i)->setText(2,"Not Started");
			break;
		case 2:
			widget.tDep->topLevelItem(i)->setText(2,"In Progress");
			break;
		case 3:
			widget.tDep->topLevelItem(i)->setText(2,"Completed");
			break;
		};
		widget.tDep->topLevelItem(i)->setText(3,me.Parent_Task[i].date_due);
	}
	
	getTaskAssignments();
	widget.lAssigned->setText("Assigned To:");
	for (unsigned int i=0;i<me.Assigned.size();i++) {
		widget.lAssigned->setText(widget.lAssigned->text() + "\n" + me.Assigned[i].Name);
	}
	
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
		tmp->setText(1,UName);
		tmp->setText(2,vAddComment->getText());
		widget.tComments->addTopLevelItem(tmp);
	}
}

void Task::editTask() {
	EditTask *vET = new EditTask(me.Project_ID);
	vET->setID(me.Task_ID);
	vET->exec();
}

void Task::clickbTeamMembers() {
	TeamMembers *a = new TeamMembers;
	a->setID(1,me.Task_ID);
	a->exec();
	if(a->result() == QDialog::Accepted) {
		//Save
	}
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
			strcpy(me.Date_Created, PP.Date_Created);
			
            
            
        }while(PP.Name[0] != '*');
        
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
}

void Task::getTaskComments()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    
    RP.Request = true;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    T.T = 9;
    
    //Send to server that client is about to send a login packet
    
    T.ID = me.Task_ID;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //Receive Type of packet about to be sent next
    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR reading to socket" << endl;
    Task_Comment PT;
    if(T.T == 9)
    {
        do
        {
            //Receive User Packet Type
            n = read(sockfd,&PT,sizeof(PT));
            
            if (n < 0)
                cout << "ERROR reading to socket" << endl;
            if(PT.User_ID == -1)
                break;
            me.Task_Comments.push_back(PT);
        }while(PT.User_ID != -1);
        
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
    
}

void Task::getTaskChildren()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    RP.Request = true;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    T.T = 24;
    
    //Send to server that client is about to send a login packet
    
    T.ID = me.Task_ID;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    

    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;

    if(T.T == 24)
    {
        Task_List TA;
        do{
            n = read(sockfd, &TA, sizeof(TA));
            if (n < 0)
                cout << "ERROR writing to socket" << endl;
            if(TA.ID == -1)
                break;
            me.Child_Task.push_back(TA);
            
        }while(TA.ID != -1);
    }
}

void Task::getTaskDependencies()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    RP.Request = true;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    T.T = 11;
    
    //Send to server that client is about to send a login packet
    
    T.ID = me.Task_ID;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    
    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    if(T.T == 11)
    {
        Task_List TA;
        do{
            n = read(sockfd, &TA, sizeof(TA));
            if (n < 0)
                cout << "ERROR writing to socket" << endl;
            if(TA.ID == -1)
                break;
            me.Parent_Task.push_back(TA);
            
        }while(TA.ID != -1);
    }
}

void Task::getTaskAssignments()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    
    RP.Request = true;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    T.T = 10;
    
    //Send to server that client is about to send a login packet
    
    T.ID = me.Task_ID;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    n= read(sockfd, &T, sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    if(T.T == 10)
    {
        Task_Assignment_Packet TA;
        Task_Assignment Ass;
        do{
            n = read(sockfd, &TA, sizeof(TA));
            if (n < 0)
                cout << "ERROR writing to socket" << endl;
            if(TA.User_ID == -1)
                break;
            if(TA.canedit == true && me.canedit == false)
                me.canedit = true;
            
            strcpy(Ass.Name, TA.Name);
            Ass.User_ID = TA.User_ID;
			strcpy(Ass.Role,TA.Role);
            
            me.Assigned.push_back(Ass);
            
        }while(TA.User_ID != -1);
    }
}

