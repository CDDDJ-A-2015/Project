/*
 * File:   TeamMembers.cpp
 * Author: dm940
 *
 * Created on 21 May 2015, 10:10 PM
 */

#include <QMessageBox>
#include "TeamMembers.h"
using namespace std;

TeamMembers::TeamMembers() {
	widget.setupUi(this);
	connect(widget.bAssign,SIGNAL(clicked()),this,SLOT(clickbAssign()));
	connect(widget.bRemove,SIGNAL(clicked()),this,SLOT(clickbRemove()));
	widget.tAssigned->setColumnHidden(3,true);
}

TeamMembers::~TeamMembers() {
}

void TeamMembers::setID(int typ,int idtmp) {
	type = typ;
	id = idtmp;
	getUserList();
	widget.tGlobal->model()->insertRows(0,Global_User_List.size());
	for (unsigned int i=0;i!=Global_User_List.size();i++) {
		widget.tGlobal->topLevelItem(i)->setText(0,QString::number(Global_User_List[i].user_id));
		widget.tGlobal->topLevelItem(i)->setText(1,Global_User_List[i].Name);
	}
	if (type == 1 || type == 0) {
		getTaskAssignments();
		widget.tAssigned->model()->insertRows(0,tAssigned.size());
		for (unsigned int i=0;i!=tAssigned.size();i++) {
			widget.tAssigned->topLevelItem(i)->setText(0,QString::number(tAssigned[i].User_ID));
			widget.tAssigned->topLevelItem(i)->setText(1,tAssigned[i].Name);
			widget.tAssigned->topLevelItem(i)->setText(2,tAssigned[i].Role);
			widget.tAssigned->topLevelItem(i)->setText(3,QString::number(tAssigned[i].Role_ID));
		}
	}
	if (type == 2) {
		widget.lDispAssigned->hide();
		widget.tAssigned->hide();
		widget.fButtons->hide();
		widget.bRoles->hide();
	}
	
}

int TeamMembers::getGID() {
	return widget.tGlobal->currentItem()->text(0).toInt();
}

QString TeamMembers::getGName() {
	return widget.tGlobal->currentItem()->text(1);
}

void TeamMembers::clickbAssign() {
	if (widget.tGlobal->currentItem()) {
		QTreeWidgetItem * item = new QTreeWidgetItem();
		item->setText(0, widget.tGlobal->currentItem()->text(0));
		item->setText(1, widget.tGlobal->currentItem()->text(1));
		item->setText(3, "0");
		widget.tAssigned->addTopLevelItem(item);
		delete widget.tGlobal->currentItem();
	}
}

void TeamMembers::clickbRemove() {
	if (widget.tAssigned->currentItem()) {
		QTreeWidgetItem * item = new QTreeWidgetItem();
		item->setText(0, widget.tAssigned->currentItem()->text(0));
		item->setText(1, widget.tAssigned->currentItem()->text(1));
		widget.tGlobal->addTopLevelItem(item);
		delete widget.tAssigned->currentItem();
	}
}

void TeamMembers::accept() {
	if (type == 2 && !widget.tGlobal->currentItem()) {
		QMessageBox msgBox;
		msgBox.setIcon(QMessageBox::Warning);
		msgBox.setText("You must select a user to be the manager");
		msgBox.exec();
	}
	else {
		if(type==1)
			saveTaskAssignment();
		else if (type==0)
			saveProjectTeam();
		this->QDialog::accept();
	}
}

void TeamMembers::getUserList()
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

void TeamMembers::getTaskAssignments()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    
    RP.Request = true;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
	if (type == 0)
		T.T = 6;
	else if (type == 1)
		T.T = 10;
    
    //Send to server that client is about to send a login packet
    
    T.ID = id;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    n= read(sockfd, &T, sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
	bool ce = false;
    if(T.T == 10 || T.T == 6)
    {
        Task_Assignment_Packet TA;
        Task_Assignment Ass;
        do{
            n = read(sockfd, &TA, sizeof(TA));
            if (n < 0)
                cout << "ERROR writing to socket" << endl;
            if(TA.User_ID == -1)
                break;
			if(TA.canedit == true &&  ce == false)
                ce = true;
            
            strcpy(Ass.Name, TA.Name);
            Ass.User_ID = TA.User_ID;
			strcpy(Ass.Role,TA.Role);
			Ass.Role_ID = TA.Role_ID;
            
            tAssigned.push_back(Ass);
            
        }while(TA.User_ID != -1);
		if(ce) {
			widget.wCanEdit->hide();
		}
    }
}

void TeamMembers::saveTaskAssignment()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    
    RP.Request = false;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    T.T =5;
    T.ID = id;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    int size = widget.tAssigned->topLevelItemCount();//<<<< SIZE OF TASK_ASSIGNMENT VECTOR!!!
    n = write(sockfd, &size, sizeof(int));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    for(unsigned int i = 0; i < size; i++)
    {
        save_P_Team P;
        P.user_id = widget.tAssigned->topLevelItem(i)->text(0).toInt(); //TASK_ASSIGNMENT VECTOR ATTRIBUTES
        P.role_id = 1; //TASK_ASSIGNMENT VECTOR ATTRIBUTES
        n = write(sockfd, &P, sizeof(P));
        if (n < 0)
            cout << "ERROR writing to socket" << endl;
    }
}

void TeamMembers::saveProjectTeam()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    
    RP.Request = false;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    T.T = 4;
    T.ID = id;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    int size = widget.tAssigned->topLevelItemCount();//<<<< SIZE OF TEAM_MEMBER VECTOR!!!
    n = write(sockfd, &size, sizeof(int));
	cout << "Size: " << size << endl;
    for(unsigned int i = 0; i < size; i++)
    {
        Task_Assignment_Packet P;
		cout << widget.tAssigned->topLevelItem(i)->text(0).toInt() << endl;
        P.User_ID = widget.tAssigned->topLevelItem(i)->text(0).toInt(); //TEAM_MEMBER VECTOR ATTRIBUTES
        P.Role_ID = 1; //TEAM_MEMBER VECTOR ATTRIBUTES
        n = write(sockfd, &P, sizeof(P));
        if (n < 0)
            cout << "ERROR writing to socket" << endl;
    }
}
