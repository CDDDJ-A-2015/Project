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
    bGlob = false;
    
    //int data = 22;
    //read(sockfd,&data,sizeof(int));
    //cout << data << endl;
    widget.uName->setText("Name");
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

void Home::clickbYourProfile() {
	UserProfile *vProfile = new UserProfile;
    vProfile->setID(widget.lID->text().toInt());
    vProfile->show();
}

void Home::clickbAddProject() {
	EditProject *vEditProject = new EditProject();
	vEditProject->show();
	
}