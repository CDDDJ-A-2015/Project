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
	Me.user_id = 1;
	
	widget.lID->setText(QString::number(Me.user_id));

	getNotification();
	for (vector<Notification>::iterator it = Me.Notifications.begin();it != Me.Notifications.end();++it) {
		widget.lNotificationList->addItem((*it).Message);
	}
	
	getTasks();
	widget.tUserTaskList->model()->insertRows(0,Me.Assigned_Tasks.size());
	for (unsigned int i=0;i!=Me.Assigned_Tasks.size();i++) {
		widget.tUserTaskList->topLevelItem(i)->setText(0,QString::number(Me.Assigned_Tasks[i].Task_ID));
		widget.tUserTaskList->topLevelItem(i)->setText(1,Me.Assigned_Tasks[i].Project_Name);
		widget.tUserTaskList->topLevelItem(i)->setText(2,Me.Assigned_Tasks[i].Name);
		widget.tUserTaskList->topLevelItem(i)->setText(4,QString::number(Me.Assigned_Tasks[i].Priority));
		widget.tUserTaskList->topLevelItem(i)->setText(5,Me.Assigned_Tasks[i].Date_Due);
	}
	
	Global_Project_List.clear();
	getProjectList();
	widget.tGlobals->model()->insertRows(0,Global_Project_List.size());
	for (unsigned int i=0;i!=Global_Project_List.size();i++) {
		widget.tGlobals->topLevelItem(i)->setText(0,QString::number(Global_Project_List[i].ID));
		widget.tGlobals->topLevelItem(i)->setText(1,Global_Project_List[i].Name);
		widget.tGlobals->topLevelItem(i)->setText(2,Global_Project_List[i].Manager_Name);
		widget.tGlobals->topLevelItem(i)->setText(3,QString::number(Global_Project_List[i].Progress));
		widget.tGlobals->topLevelItem(i)->setText(4,Global_Project_List[i].End_Date);
		if (Global_Project_List[i].active)
			widget.tGlobals->topLevelItem(i)->setText(5,"Yes");
		else
			widget.tGlobals->topLevelItem(i)->setText(5,"No");
	}
	
	Me.My_Projects.clear();
	getUserProjects();
	widget.tMyProjects->model()->insertRows(0,Me.My_Projects.size());
	for (unsigned int i=0;i!=Me.My_Projects.size();i++) {
		widget.tMyProjects->topLevelItem(i)->setText(0,QString::number(Me.My_Projects[i].ID));
		widget.tMyProjects->topLevelItem(i)->setText(1,Me.My_Projects[i].Name);
		widget.tMyProjects->topLevelItem(i)->setText(2,Me.My_Projects[i].Manager_Name);
		widget.tMyProjects->topLevelItem(i)->setText(3,Me.My_Projects[i].Role);
		widget.tMyProjects->topLevelItem(i)->setText(4,QString::number(Me.My_Projects[i].Progress));
		widget.tMyProjects->topLevelItem(i)->setText(5,Me.My_Projects[i].End_Date);
		if (Me.My_Projects[i].active)
			widget.tMyProjects->topLevelItem(i)->setText(6,"Yes");
		else
			widget.tMyProjects->topLevelItem(i)->setText(6,"No");
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
	
	Global_Project_List.clear();
	getProjectList();
	widget.tGlobals->model()->insertRows(0,Global_Project_List.size());
	for (unsigned int i=0;i!=Global_Project_List.size();i++) {
		widget.tGlobals->topLevelItem(i)->setText(0,QString::number(Global_Project_List[i].ID));
		widget.tGlobals->topLevelItem(i)->setText(1,Global_Project_List[i].Name);
		widget.tGlobals->topLevelItem(i)->setText(2,Global_Project_List[i].Manager_Name);
		widget.tGlobals->topLevelItem(i)->setText(3,QString::number(Global_Project_List[i].Progress));
		widget.tGlobals->topLevelItem(i)->setText(4,Global_Project_List[i].End_Date);
		if (Global_Project_List[i].active)
			widget.tGlobals->topLevelItem(i)->setText(5,"Yes");
		else
			widget.tGlobals->topLevelItem(i)->setText(5,"No");
	}
    /*QString n, m, p, d;
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
    */
    
    
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
    
    Global_User_List.clear();
    getUserList();
	widget.tGlobals->model()->insertRows(0,Global_User_List.size());
	for (unsigned int i=0;i!=Global_User_List.size();i++) {
		widget.tGlobals->topLevelItem(i)->setText(0,QString::number(Global_User_List[i].user_id));
		widget.tGlobals->topLevelItem(i)->setText(1,Global_User_List[i].Name);
		widget.tGlobals->topLevelItem(i)->setText(2,Global_User_List[i].location);
		widget.tGlobals->topLevelItem(i)->setText(3,Global_User_List[i].email);
		if (Global_User_List[i].Admin)
			widget.tGlobals->topLevelItem(i)->setText(4,"Yes");
		else
			widget.tGlobals->topLevelItem(i)->setText(4,"No");
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

void Home::getNotification() 
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    
    RP.Request = true;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //Send to server that client is about to send a login packet
    T.T = 14;
    T.ID = Me.user_id;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //Receive Type of packet about to be sent next
    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR reading to socket" << endl;
    
    Notification NP;
    
    if(T.T == 14)
    {
        do
        {
            //Receive User Packet Type
            n = read(sockfd,&NP,sizeof(NP));
            if (n < 0)
                cout << "ERROR reading to socket" << endl;
            if(NP.Message[0] == '\0')
                break;
			cout << NP.Message << endl;
            Me.Notifications.push_back(NP);
            
            
        }while(NP.Message[0] != '\0');
        
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;    
}

void Home::getTasks()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    
    RP.Request = true;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    T.T = 17;
    
    //Send to server that client is about to send a login packet
    
    T.ID = Me.user_id;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //Receive Type of packet about to be sent next
    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR reading to socket" << endl;
    
    User_Task NP;
    
    if(T.T == 17)
    {
        do
        {
            //Receive User Packet Type
            n = read(sockfd,&NP,sizeof(NP));
            
            if (n < 0)
                cout << "ERROR reading to socket" << endl;
            if(NP.Task_ID == -1)
                break;
            Me.Assigned_Tasks.push_back(NP);
            
            
        }while(NP.Task_ID != -1);
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
}

void Home::getProjectList()
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
    T.T = 2;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;

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

void Home::getUserList()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    RP.Request = true;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //Send to server that client is about to send The Global Users List
    T.T = 3;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR reading to socket" << endl;
    
    if(T.T == 3)
    {
        bool exit = false;
        do{
            User_List UL;
            
            //Receive Project List Packets
            n = read(sockfd,&UL,sizeof(UL));
            if (n < 0)
                cout << "ERROR reading to socket" << endl;
            if(UL.user_id == -1)
            {
                exit = true;
                break;
            }
            
            Global_User_List.push_back(UL);
        }while(exit == false);
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
}


void Home::getUserProjects() //MyProjects
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    
    RP.Request = true;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //Send to server that client is about to send a login packet
    T.T = 13;
    T.ID = UID;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //Receive Type of packet about to be sent next
    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR reading to socket" << endl;
    
    My_Project NP;
    
    if(T.T == 13)
    {
        do
        {
            //Receive User Packet Type
            n = read(sockfd,&NP,sizeof(NP));
            
            if (n < 0)
                cout << "ERROR reading to socket" << endl;
            if(NP.ID == -1)
                break;
            
            Me.My_Projects.push_back(NP);
            
            
        }while(NP.ID != -1);
        
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
    
    
}