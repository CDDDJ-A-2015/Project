/*
 * File:   Task.cpp
 * Author: dm940
 *
 * Created on 14 May 2015, 7:01 PM
 */

#include "Task.h"

Task::Task() {
	widget.setupUi(this);
}

Task::~Task() {
}

void Task::setID(int ID) {
	widget.lID->setText(QString::number(ID));
}
