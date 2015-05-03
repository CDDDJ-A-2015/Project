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
using namespace std;

Home::Home() {
    widget.setupUi(this);
    connect(widget.bProjects, SIGNAL(clicked()),this, SLOT(clickbProjects()));
    connect(widget.bUsers, SIGNAL(clicked()),this, SLOT(clickbUsers()));
    connect(widget.tGlobals, SIGNAL(doubleClicked(QModelIndex)),this, SLOT(dClickGTable(QModelIndex)));
    bGlob = false;
    
    Login *vLogin = new Login;
    vLogin->exec();
    
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
    widget.tGlobals->headerItem()->setText(2, "Role");
    widget.tGlobals->headerItem()->setText(3, "Location");
    widget.tGlobals->headerItem()->setText(4, "Email");
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
        vProject->show();
    }
    else {
        UserProfile *vProfile = new UserProfile;
        vProfile->setID(index.sibling(index.row(),0).data().toInt());
        vProfile->show();
    }

}