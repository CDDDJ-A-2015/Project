/*
 * File:   EditUser.cpp
 * Author: dm940
 *
 * Created on 7 May 2015, 3:07 PM
 */

#include "EditUser.h"
#include "StringDialog.h"
#include "UserProfile.h"
#include <QMessageBox>
using namespace std;

EditUser::EditUser() {
    widget.setupUi(this);
    connect(widget.bAddExp, SIGNAL(clicked()),this, SLOT(clickbAddExp()));
    connect(widget.bDelExp, SIGNAL(clicked()),this, SLOT(clickbDelExp()));
	id = -1;
}

EditUser::~EditUser() {
}

void EditUser::clickbAddExp() {
	StringDialog vSD;
	vSD.setText("Expertise:");
	vSD.exec();
	if(vSD.result() == QDialog::Accepted) {
		QListWidgetItem *newItem = new QListWidgetItem(widget.listExpertise);
		newItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
		newItem->setText(vSD.getText());
	}
}

void EditUser::clickbDelExp() {
    qDeleteAll(widget.listExpertise->selectedItems());
}

void EditUser::setID(int tmp) {
	id = tmp;
	widget.lID->setText(QString::number(id));
	getUserInfo();
	getExpertises();
	widget.eName->setText(UP.name);
	widget.eName->setReadOnly(true);
	widget.eEmail->setText(UP.email);
	widget.eLocation->setText(UP.email);	
	widget.ePassword->setText(UP.password);
	widget.cIsAdmin->setChecked(UP.admin);
}

void EditUser::accept() {
	if (widget.eName->text().isEmpty()) {
		QMessageBox msgBox;
		msgBox.setIcon(QMessageBox::Warning);
		msgBox.setText("You cannot have a user without a name");
		msgBox.exec();
		return;
	}
	if (widget.eLocation->text().isEmpty()) {
		QMessageBox msgBox;
		msgBox.setIcon(QMessageBox::Warning);
		msgBox.setText("You cannot have a user without a location");
		msgBox.exec();
		return;
	}
	if (widget.eEmail->text().isEmpty()) {
		QMessageBox msgBox;
		msgBox.setIcon(QMessageBox::Warning);
		msgBox.setText("You cannot have a user without an email");
		msgBox.exec();
		return;
	}
	if (widget.ePassword->text().isEmpty()) {
		QMessageBox msgBox;
		msgBox.setIcon(QMessageBox::Warning);
		msgBox.setText("You cannot have a user without a password");
		msgBox.exec();
		return;
	}
	
	strcpy(UP.name,widget.eName->text().toStdString().c_str());
	strcpy(UP.location,widget.eLocation->text().toStdString().c_str());
	strcpy(UP.email,widget.eEmail->text().toStdString().c_str());
	strcpy(UP.dob,"NULL");
	strcpy(UP.password,widget.ePassword->text().toStdString().c_str());
	UP.admin = widget.cIsAdmin->isChecked();
	UP.Expertises_size = widget.listExpertise->count();
	
	if(id==-1) {
	createUser();
	UserProfile *vUserProfile = new UserProfile;
	vUserProfile->setID(id);
	vUserProfile->show();
	}
	else {
		editUser();
	}
	QDialog::accept();
}

void EditUser::createUser()
{
    cout << "Test EDIT USER" << endl;
    Request_Packet RP;
    RP.Request=false;
    Type_Packet T;
    int n;
    T.T = 1;
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    T.ID = -1;
    
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //createUser_Packet UP;
	
	
    n = write(sockfd, &UP, sizeof(UP));
    if(n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //unsigned int size = U.Expertises.size();
    
    //unsigned int size = 0;
    Expertise_Packet E;
    cout << "Expertises: " << endl;
    for(unsigned int i = 0; i < UP.Expertises_size; i++)
    {
      //  cout << U.Expertises[i].Name << endl;
       // strcpy(E.Name, U.Expertises[i].Name);
		strcpy(E.Name,widget.listExpertise->item(i)->text().toStdString().c_str());
        n = write(sockfd, &E, sizeof(E));
        if (n < 0)
            cout << "ERROR writing to socket" << endl;
    }
    
    
    int new_USER_ID;
    
    n = read(sockfd,&new_USER_ID, sizeof(int));
    if(n < 0)
        cout << "Error reading to socket" << endl;
	
    id = new_USER_ID;
}

void EditUser::editUser()
{
    cout << "Test EDIT USER" << endl;
    Request_Packet RP;
    RP.Request=false;
    Type_Packet T;
    int n;
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    T.T = 1;
    T.ID = id;

    
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    Save_UPS_Packet UPS;
    strcpy(UPS.password,widget.ePassword->text().toStdString().c_str());
    strcpy(UPS.location, UP.location);
    strcpy(UPS.email, UP.email);
    UPS.ID = id;
    UPS.Expertises_size = UP.Expertises_size;
	UPS.ADMIN = widget.cIsAdmin->isChecked();
    n = write(sockfd, &UPS, sizeof(UPS));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    Expertise_Packet E;
    cout << "Expertises: " << endl;
    for(unsigned int i = 0; i < UP.Expertises_size; i++)
    {
        cout << widget.listExpertise->item(i)->text().toStdString().c_str() << endl;
        strcpy(E.Name, widget.listExpertise->item(i)->text().toStdString().c_str());
        n = write(sockfd, &E, sizeof(E));
        if (n < 0)
            cout << "ERROR writing to socket" << endl;
    }
}

void EditUser::getUserInfo()
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
    T.ID = id;
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
            
            strcpy(UP.name, UL.Name);
            strcpy(UP.location, UL.location);
            strcpy(UP.email, UL.email);
			strcpy(UP.password,UL.password);
            UP.admin = UL.ADMIN;
			
            
        }while(exit == false);
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
    
    cout << "DONE" << endl;
    return;
}

void EditUser::getExpertises()
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
    T.ID = id;
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
            widget.listExpertise->addItem(EP.Name);
            
            
        }while(EP.ID != -1);
        
    }
    else
        cout << "ERROR, different type of packet received! Packet was: " << T.T << "." << endl;
}
