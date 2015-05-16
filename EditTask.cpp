/*
 * File:   EditTask.cpp
 * Author: dm940
 *
 * Created on 16 May 2015, 4:58 PM
 */

#include "EditTask.h"

EditTask::EditTask() {
	widget.setupUi(this);
}

EditTask::~EditTask() {
}

void EditTask::setID(int tmp) {
	id = tmp;
	widget.lID->setText(QString::number(id));
}