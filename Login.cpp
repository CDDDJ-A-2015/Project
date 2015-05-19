/*
 * File:   Login.cpp
 * Author: dm940
 *
 * Created on 3 May 2015, 3:46 PM
 */

#include "Login.h"
#include "Home.h"
#include <cstring>
#include <string>

using namespace std;

Login::Login() {
    widget.setupUi(this);
    widget.lError->hide();
    
    connect(widget.buttonBox, SIGNAL(accepted()), this, SLOT(verify()));
    //connect(widget.buttonBox, SIGNAL(rejected()), this, SLOT(reject()));
}

Login::~Login() {
    
}

#include <iostream>
void Login::verify() {
    /*
    Type_Packet t;
    t.T = 1;
    strcpy(L.uName,"James");
    strcpy(L.pWord,"hey");
    write(sockfd,&t,sizeof(t));
    write(sockfd,&L,sizeof(L));
    */
    Login_Packet L;
	strcpy(L.uName,widget.eUserName->text().toStdString().c_str());
	strcpy(L.pWord,widget.ePassword->text().toStdString().c_str());
	cout << "UserName: " << L.uName;
    cout << "\nPassword: " << L.pWord << endl;
	
	
	
	//check if matches
	//if (pWord[0] != '\0' && uName[0] != '\0') {
	if (login(L)) {
		accept();
		Home *vHome = new Home;
		vHome->show();
	}
	else {
		widget.lError->show();
	}
	
	
    
}

bool Login::login(Login_Packet L)
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
    T.T = 1;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
         cout << "ERROR writing to socket" << endl;
    
    //Send to server login packet
    n = write(sockfd,&L,sizeof(L));
    if (n < 0)
         cout << "ERROR writing to socket" << endl;
	
    //Receive response from server
    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
         cout << "ERROR reading to socket" << endl;
	
    //If Login was unsuccessful
    if(T.T != 1)
    {
        cout << "Login Denied." << endl;
        return false;
    }
    
    //Client successfully logged in
    cout << "Login succeeded!" << endl;
    return true;
}