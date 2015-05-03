/*
 * File:   UserProfile.cpp
 * Author: dm940
 *
 * Created on 30 April 2015, 8:36 PM
 */

#include "UserProfile.h"

UserProfile::UserProfile() {
    widget.setupUi(this);
}

UserProfile::~UserProfile() {
}

void UserProfile::setID(int tmp) {
    id = tmp;
    widget.uName->setText(QString::number(id));
}
