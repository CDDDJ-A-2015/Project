/*
 * File:   Project.cpp
 * Author: dm940
 *
 * Created on 21 March 2015, 3:37 PM
 */

#include "Project.h"
#include "EditTask.h"
#include "displayGraphics.h"
#include "TeamMembers.h"
using namespace std;

extern int sockfd, UID;
extern QString UName;

Project::Project() {
    widget.setupUi(this);
	connect(widget.bEditProject,SIGNAL(clicked()),this,SLOT(editProject()));
	connect(widget.bAddComment,SIGNAL(clicked()),this,SLOT(addComment()));
	connect(widget.tProjTaskList, SIGNAL(doubleClicked(QModelIndex)),this, SLOT(viewTask(QModelIndex)));
	connect(widget.bAPN,SIGNAL(clicked()),this,SLOT(clickbAPN()));
	connect(widget.bGantt,SIGNAL(clicked()),this,SLOT(clickbGantt()));
	connect(widget.bPert,SIGNAL(clicked()),this,SLOT(clickbPert()));
	connect(widget.bAddTask,SIGNAL(clicked()),this,SLOT(clickbAddTask()));
	connect(widget.bTeamMembers,SIGNAL(clicked()),this,SLOT(clickbTeamMembers()));
}

Project::~Project() {
	
}

void Project::editProject() {
	EditProject *vEditProject = new EditProject;
	vEditProject->setID(P.ID);
	vEditProject->show();
	close();
}

void Project::addComment() {
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

void Project::viewTask(QModelIndex index) {
	Task *vTask = new Task;
	vTask->setID(index.sibling(index.row(),0).data().toInt());
	vTask->show();
}

void Project::setID(int tmp) {
	P.ID = tmp;
	widget.lProjectID->setText("Project ID: " + QString::number(P.ID));
	getProject();
	
	getProjectComments();
	
	widget.lName->setText(P.Name);
	widget.lManager->setText(P.Manager_Name);
	widget.lProjDesc->setText(P.Description);
	
	getProjectTasks();
	widget.tProjTaskList->model()->insertRows(0,P.Tasks.size());
	for(unsigned int i=0;i<P.Tasks.size();i++) {
		widget.tProjTaskList->topLevelItem(i)->setText(0,QString::number(P.Tasks[i].ID));
		widget.tProjTaskList->topLevelItem(i)->setText(1,P.Tasks[i].name);
		switch (P.Tasks[i].status) {
			case 0:
				widget.tProjTaskList->topLevelItem(i)->setText(2,"Pending");
				break;
			case 1:
				widget.tProjTaskList->topLevelItem(i)->setText(2,"Not Started");
				break;
			case 2:
				widget.tProjTaskList->topLevelItem(i)->setText(2,"In-Progress");
				break;
			case 3:
				widget.tProjTaskList->topLevelItem(i)->setText(2,"Completed");
				break;
			default:
				widget.tProjTaskList->topLevelItem(i)->setText(2,"Unknown");
				break;
		};
		switch (P.Tasks[i].priority) {
			case 0:
				widget.tProjTaskList->topLevelItem(i)->setText(3,"Trivial");
				break;
			case 1:
				widget.tProjTaskList->topLevelItem(i)->setText(3,"Low");
				break;
			case 2:
				widget.tProjTaskList->topLevelItem(i)->setText(3,"High");
				break;
			case 3:
				widget.tProjTaskList->topLevelItem(i)->setText(3,"Critical");
				break;
			default:
				widget.tProjTaskList->topLevelItem(i)->setText(3,"Unknown");
				break;
		};
		widget.tProjTaskList->topLevelItem(i)->setText(4,P.Tasks[i].date_due);
	}
	
	widget.tComments->model()->insertRows(0,P.Project_Comments.size());
	for(unsigned int i=0;i<P.Project_Comments.size();i++) {
		widget.tComments->topLevelItem(i)->setText(0,P.Project_Comments[i].Date);
		widget.tComments->topLevelItem(i)->setText(1,QString::number(P.Project_Comments[i].User_ID));
		widget.tComments->topLevelItem(i)->setText(2,P.Project_Comments[i].Comment);
	}
	
	widget.lC1->setText(QString::number(P.CCMO1));
	widget.lC2->setText(QString::number(P.CCMO2));
	widget.lFP->setText(QString::number(P.F_Points));
	
	if (!P.canedit) {
		widget.wCanEdit->hide();
	}
	
	
}

void Project::clickbAPN() {
	displayGraphics *a = new displayGraphics(0);
	a->setPID(P.ID);
	a->setType(0);
	a->show();
}

void Project::clickbGantt() {
	displayGraphics *a = new displayGraphics(0);
	a->setType(1);
	a->setPID(P.ID);
	a->show();
}

void Project::clickbPert() {
	displayGraphics *a = new displayGraphics(0);
	a->setType(2);
	a->setPID(P.ID);
	a->show();
}

void Project::clickbAddTask() {
	EditTask *vEditTask = new EditTask(P.ID);
	vEditTask->exec();
	
	widget.tProjTaskList->clear();
	P.Tasks.clear();
	getProjectTasks();
	widget.tProjTaskList->model()->insertRows(0,P.Tasks.size());
	for(unsigned int i=0;i<P.Tasks.size();i++) {
		widget.tProjTaskList->topLevelItem(i)->setText(0,QString::number(P.Tasks[i].ID));
		widget.tProjTaskList->topLevelItem(i)->setText(1,P.Tasks[i].name);
		switch (P.Tasks[i].status) {
			case 0:
				widget.tProjTaskList->topLevelItem(i)->setText(2,"Pending");
				break;
			case 1:
				widget.tProjTaskList->topLevelItem(i)->setText(2,"Not Started");
				break;
			case 2:
				widget.tProjTaskList->topLevelItem(i)->setText(2,"In-Progress");
				break;
			case 3:
				widget.tProjTaskList->topLevelItem(i)->setText(2,"Completed");
				break;
			default:
				widget.tProjTaskList->topLevelItem(i)->setText(2,"Unknown");
				break;
		};
		switch (P.Tasks[i].priority) {
			case 0:
				widget.tProjTaskList->topLevelItem(i)->setText(3,"Trivial");
				break;
			case 1:
				widget.tProjTaskList->topLevelItem(i)->setText(3,"Low");
				break;
			case 2:
				widget.tProjTaskList->topLevelItem(i)->setText(3,"High");
				break;
			case 3:
				widget.tProjTaskList->topLevelItem(i)->setText(3,"Critical");
				break;
			default:
				widget.tProjTaskList->topLevelItem(i)->setText(3,"Unknown");
				break;
		};
		widget.tProjTaskList->topLevelItem(i)->setText(4,P.Tasks[i].date_due);
	}
	widget.lC1->setText(QString::number(P.CCMO1));
	widget.lC2->setText(QString::number(P.CCMO2));
	widget.lFP->setText(QString::number(P.F_Points));
}

void Project::clickbTeamMembers() {
	TeamMembers *vTeamMembers = new TeamMembers;
	vTeamMembers->setID(0,P.ID);
	vTeamMembers->exec();
}

void Project::getProject()
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
    T.ID = P.ID;
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

            P.Manager_ID = PP.Manager_ID;
 

            if(PP.Manager_ID == -1)
            {
                exit = true;
                break;
            }
            strcpy(P.Name, PP.Name);
            strcpy(P.Description, PP.Description);
            P.Progress = PP.Progress;
            strcpy(P.End_Date, PP.End_Date);
            strcpy(P.Last_Updated, PP.Last_Updated);
            P.active = PP.active;
            P.canedit = PP.canedit;
            strcpy(P.Manager_Name, PP.Manager_Name);
            P.CCMO1 = PP.CCMO1;
            P.CCMO2 = PP.CCMO2;
            P.F_Points = PP.F_Points;
            
        }while(exit == false);
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
}

void Project::getProjectTasks()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    
    RP.Request = true;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    T.T = 8;
    
    //Send to server that client is about to send a login packet
    
    T.ID = P.ID;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //Receive Type of packet about to be sent next
    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR reading to socket" << endl;
    
    Task_List TP;
    
    if(T.T == 8)
    {
        do
        {
            //Receive User Packet Type
            n = read(sockfd,&TP,sizeof(TP));
            
            if (n < 0)
                cout << "ERROR reading to socket" << endl;
            if(TP.ID == -1)
                break;
            P.Tasks.push_back(TP);
            
        }while(TP.ID != -1);
        
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
}

void Project::getProjectComments()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    
    RP.Request = true;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    T.T = 7;
    
    //Send to server that client is about to send a login packet

    T.ID = P.ID;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;

    //Receive Type of packet about to be sent next
    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR reading to socket" << endl;
    Project_Comment PT;
    if(T.T == 7)
    {
        do
        {
            //Receive User Packet Type
            n = read(sockfd,&PT,sizeof(PT));
            
            if (n < 0)
                cout << "ERROR reading to socket" << endl;
            if(PT.User_ID == -1)
                break;
            P.Project_Comments.push_back(PT);
        }while(PT.User_ID != -1);
        
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
}