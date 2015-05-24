/*
 * File:   TeamMembers.cpp
 * Author: dm940
 *
 * Created on 21 May 2015, 10:10 PM
 */

#include "TeamMembers.h"
using namespace std;

TeamMembers::TeamMembers() {
	widget.setupUi(this);
	connect(widget.bAssign,SIGNAL(clicked()),this,SLOT(clickbAssign()));
	connect(widget.bRemove,SIGNAL(clicked()),this,SLOT(clickbRemove()));
}

TeamMembers::~TeamMembers() {
}

void TeamMembers::setID(int typ,int id) {
	getUserList();
	widget.tGlobal->model()->insertRows(0,Global_User_List.size());
	for (unsigned int i=0;i!=Global_User_List.size();i++) {
		widget.tGlobal->topLevelItem(i)->setText(0,QString::number(Global_User_List[i].user_id));
		widget.tGlobal->topLevelItem(i)->setText(1,Global_User_List[i].Name);
	}
}

void TeamMembers::clickbAssign() {
	if (widget.tGlobal->currentItem()) {
		QTreeWidgetItem * item = new QTreeWidgetItem();
		item->setText(0, widget.tGlobal->currentItem()->text(0));
		item->setText(1, widget.tGlobal->currentItem()->text(1));
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