/*
 * File:   UserProfile.cpp
 * Author: dm940
 *
 * Created on 30 April 2015, 8:36 PM
 */



#include "UserProfile.h"
#include "EditUser.h"
#include <iostream>
using namespace std;

UserProfile::UserProfile() {
    widget.setupUi(this);
    connect(widget.bEditUser, SIGNAL(clicked()),this, SLOT(clickEditUser()));
}

UserProfile::~UserProfile() {
}

void UserProfile::setID(int tmp) {
    UPS.user_id = tmp;
    widget.lID->setText(QString::number(UPS.user_id));
	getUserInfo();
	widget.lEmail->setText(UPS.email);
	widget.lLocation->setText(UPS.location);
	widget.lName->setText(UPS.Name);
	
	widget.listWidget->clear();
	UPS.Expertises.clear();
	getExpertises();
	for (unsigned int i=0;i<UPS.Expertises.size();i++) {
			widget.listWidget->addItem(UPS.Expertises[i].Name);
	}
	
	widget.tPrevRoles->clear();
	UPS.Previous_Roles.clear();
	getPreviousRoles();
	widget.tPrevRoles->model()->insertRows(0,UPS.Previous_Roles.size());
	for (unsigned int i=0;i!=UPS.Previous_Roles.size();i++) {
		widget.tPrevRoles->topLevelItem(i)->setText(0,UPS.Previous_Roles[i].Project_Name);
		widget.tPrevRoles->topLevelItem(i)->setText(1,UPS.Previous_Roles[i].Name);
		//if(UPS.Previous_Roles[i].active)
			
	}
	
	if(!UPS.canedit)
		widget.bEditUser->hide();
	
}

void UserProfile::clickEditUser() {
    EditUser *vEditUser = new EditUser;
	vEditUser->setID(UPS.user_id);
    vEditUser->exec();
	if (vEditUser->result() == QDialog::Accepted) {
		setID(UPS.user_id);
	}
}

void UserProfile::getUserInfo()
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
    T.T = 22;
    T.ID = UPS.user_id;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    cout << "HERE " << endl;
    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR reading to socket" << endl;
    if(T.T == 22)
    {
        bool exit = false;
        do{
            UPS_Packet UL;
            
            //Receive Project List Packets
            n = read(sockfd,&UL,sizeof(UL));
            if (n < 0)
                cout << "ERROR reading to socket" << endl;
            if(UL.Name[0] == '*')
            {
                exit = true;
                break;
            }
            
            strcpy(UPS.Name, UL.Name);
            strcpy(UPS.location, UL.location);
            strcpy(UPS.email, UL.email);
            UPS.canedit = UL.canedit;
            cout << UPS.Name << endl;
            
            
        }while(exit == false);
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
    
    cout << "DONE" << endl;
    return;
}

void UserProfile::getExpertises()
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
    T.T = 18;
    T.ID = UPS.user_id;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //Receive Type of packet about to be sent next
    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR reading to socket" << endl;
    
    Expertise_Packet EP;
    
    if(T.T == 18)
    {
        do
        {
            //Receive User Packet Type
            n = read(sockfd,&EP,sizeof(EP));
            if (n < 0)
                cout << "ERROR reading to socket" << endl;
            if(EP.ID == -1)
                break;
            Expertise E;
            strcpy(E.Name, EP.Name);
            UPS.Expertises.push_back(E);
            
            
        }while(EP.ID != -1);
        
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
}

void UserProfile::getPreviousRoles()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    
    RP.Request = true;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    T.T = 15;
    T.ID = UPS.user_id;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //Receive Type of packet about to be sent next
    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR reading to socket" << endl;
    User_Role NP;
    
    if(T.T == 15)
    {
        do
        {
            //Receive User Packet Type
            n = read(sockfd,&NP,sizeof(NP));
            if (n < 0)
                cout << "ERROR reading to socket" << endl;
            if(NP.Name[0]== '*')
                break;

            UPS.Previous_Roles.push_back(NP);
            
            cout << NP.Name << ":" << NP.Project_Name<< endl;

        }while(NP.Name[0]!='*');
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
}