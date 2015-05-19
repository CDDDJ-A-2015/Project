/*
 * File:   Home.cpp
 * Author: dm940
 *
 * Created on 30 April 2015, 4:21 PM
 */

#include "Home.h"
#include "UserProfile.h"
#include "Project.h"
#include "Login.h"
#include "Search.h"
#include "EditProject.h"
#include "Task.h"

using namespace std;


Home::Home() {
    widget.setupUi(this);
    connect(widget.bProjects, SIGNAL(clicked()),this, SLOT(clickbProjects()));
    connect(widget.bUsers, SIGNAL(clicked()),this, SLOT(clickbUsers()));
    connect(widget.tGlobals, SIGNAL(doubleClicked(QModelIndex)),this, SLOT(dClickGTable(QModelIndex)));
	connect(widget.tMyProjects, SIGNAL(doubleClicked(QModelIndex)),this, SLOT(dClickMyProjects(QModelIndex)));
	connect(widget.bSearch, SIGNAL(clicked()),this,SLOT(clickbSearch()));
	connect(widget.bYourProfile, SIGNAL(clicked()),this, SLOT(clickbYourProfile()));
	connect(widget.bAddProject, SIGNAL(clicked()),this, SLOT(clickbAddProject()));
	connect(widget.tUserTaskList, SIGNAL(doubleClicked(QModelIndex)),this, SLOT(dClickMyTasks(QModelIndex)));
    bGlob = false;
    
    //int data = 22;
    //read(sockfd,&data,sizeof(int));
    //cout << data << endl;
	Me.user_id = 213421;
	strcpy(Me.f_name,"John");
	strcpy(Me.l_name,"Doe");
	Notification a[21];
	for (int i=0;i<21;i++) {
		strcpy(a[i].Message,"Hello");
		a[i].read = false;
		Me.Notifications.push_back(a[i]);	
	}
	User_Task b[5];
	for (int i=0;i<5;i++) {
		b[i].Task_ID = i;
		strcpy(b[i].Name,"hi");
		b[i].Priority = i;
		strcpy(b[i].Date_Due,"21 A 21");
		Me.Assigned_Tasks.push_back(b[i]);
	}
	
	
    widget.uName->setText(strcat(strcat(Me.f_name," "),Me.l_name));
	widget.lID->setText(QString::number(Me.user_id));
	
	for (vector<Notification>::iterator it = Me.Notifications.begin();it != Me.Notifications.end();++it) {
		widget.lNotificationList->addItem((*it).Message);
	}
	
	widget.tUserTaskList->model()->insertRows(0,Me.Assigned_Tasks.size());

	for (unsigned int i=0;i!=Me.Assigned_Tasks.size();i++) {
		widget.tUserTaskList->topLevelItem(i)->setText(0,QString::number(Me.Assigned_Tasks[i].Task_ID));
		widget.tUserTaskList->topLevelItem(i)->setText(1,Me.Assigned_Tasks[i].Name);
		widget.tUserTaskList->topLevelItem(i)->setText(2,QString::number(Me.Assigned_Tasks[i].Priority));
		widget.tUserTaskList->topLevelItem(i)->setText(3,Me.Assigned_Tasks[i].Date_Due);
	}
	
	
	
	//getProjectList();
	for (unsigned int i=0;i!=Global_Project_List.size();i++) {
		widget.tGlobals->topLevelItem(i)->setText(0,QString::number(Global_Project_List[i].ID));
	}
	
	
}

Home::~Home() {
    
}

void Home::clickbProjects() {
    bGlob = false;
    widget.tGlobals->headerItem()->setText(0, "ID");
    widget.tGlobals->headerItem()->setText(1, "Project Name");
    widget.tGlobals->headerItem()->setText(2, "Manager");
    widget.tGlobals->headerItem()->setText(3, "Progress");
    widget.tGlobals->headerItem()->setText(4, "Due Date");
    widget.tGlobals->setColumnHidden(5,false);
	widget.tGlobals->clear();
    QString n, m, p, d;
    n = "CSCI318";
    m = "Daniel";
    p = "25%";
    d = "1/1/1";
    
    
    widget.tGlobals->model()->insertRows(0,100);
    for (int i=0;i<100;i++) {
        widget.tGlobals->topLevelItem(i)->setText(0,QString::number(i));
        widget.tGlobals->topLevelItem(i)->setText(1,n);
        widget.tGlobals->topLevelItem(i)->setText(2,m);
        widget.tGlobals->topLevelItem(i)->setText(3,p);
        widget.tGlobals->topLevelItem(i)->setText(4,d);
		
    }
    
    
    
}

void Home::clickbUsers() {
    bGlob = true;
    widget.tGlobals->headerItem()->setText(1, "ID");
    widget.tGlobals->headerItem()->setText(1, "Name");
    widget.tGlobals->headerItem()->setText(2, "Location");
    widget.tGlobals->headerItem()->setText(3, "Email");
    widget.tGlobals->headerItem()->setText(4, "Is Admin");
    widget.tGlobals->setColumnHidden(5,true);
    widget.tGlobals->clear();
    
    widget.tGlobals->model()->insertRows(0,100);
    for (int i=0;i<100;i++) {
        widget.tGlobals->topLevelItem(i)->setText(0,QString::number(i));
        widget.tGlobals->topLevelItem(i)->setText(1,"a");
        widget.tGlobals->topLevelItem(i)->setText(2,"b");
        widget.tGlobals->topLevelItem(i)->setText(3,"c");
        widget.tGlobals->topLevelItem(i)->setText(4,"d");
    }
}

void Home::dClickGTable(QModelIndex index) {
    if (bGlob == false) {
        Project *vProject = new Project;
		vProject->setID(index.sibling(index.row(),0).data().toInt());
        vProject->show();
    }
    else {
        UserProfile *vProfile = new UserProfile;
        vProfile->setID(index.sibling(index.row(),0).data().toInt());
        vProfile->show();
    }

}

void Home::clickbSearch() {
	Search *vSearch = new Search;
	vSearch->setType(bGlob);
	vSearch->show();
	//system("/home/undergrad/d/dm940/318/CSCI318/a.out");
}

void Home::dClickMyProjects(QModelIndex index) {
	Project *vProject = new Project;
	vProject->setID(index.sibling(index.row(),0).data().toInt());
    vProject->show();
}

void Home::dClickMyTasks(QModelIndex index) {
	Task *vTask = new Task;
	vTask->setID(index.sibling(index.row(),0).data().toInt());
    vTask->show();
}

void Home::clickbYourProfile() {
	UserProfile *vProfile = new UserProfile;
    vProfile->setID(widget.lID->text().toInt());
    vProfile->show();
}

void Home::clickbAddProject() {
	EditProject *vEditProject = new EditProject();
	vEditProject->show();
	
}

void Home::getProjectList()
{
    int n;
    Type_Packet T;

    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR reading to socket" << endl;
    
    if(T.T == 2)
    {
        bool exit = false;
        do{
            Project_List PL;
            
            //Receive Project List Packets
            n = read(sockfd,&PL,sizeof(PL));
            if (n < 0)
                cout << "ERROR reading to socket" << endl;
            if(PL.ID == -1)
            {
                exit = true;
                break;
            }
            
            Global_Project_List.push_back(PL);
        }while(exit == false);
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
}
