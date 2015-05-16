/*
 * File:   UserProfile.cpp
 * Author: dm940
 *
 * Created on 30 April 2015, 8:36 PM
 */

#include "UserProfile.h"
#include "EditUser.h"

UserProfile::UserProfile() {
    widget.setupUi(this);
    connect(widget.bEditUser, SIGNAL(clicked()),this, SLOT(clickEditUser()));
}

UserProfile::~UserProfile() {
}

void UserProfile::setID(int tmp) {
    id = tmp;
    widget.lID->setText(QString::number(id));
}

void UserProfile::clickEditUser() {
    EditUser *vEditUser = new EditUser;
	vEditUser->setID(id);
    vEditUser->exec();
}