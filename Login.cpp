/*
 * File:   Login.cpp
 * Author: dm940
 *
 * Created on 3 May 2015, 3:46 PM
 */

#include "Login.h"
#include "Home.h"
using namespace std;

Login::Login() {
    widget.setupUi(this);
    
    
    connect(widget.buttonBox, SIGNAL(accepted()), this, SLOT(verify()));
    connect(widget.buttonBox, SIGNAL(rejected()), this, SLOT(reject()));
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
    cout << "UserName: " << widget.eUserName->text().toStdString();
    cout << "\nPassword: " << widget.ePassword->text().toStdString() << endl;
    Home *a = new Home;
    a->show();
}
