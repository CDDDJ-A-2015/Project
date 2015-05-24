/*
 * File:   EditTask.cpp
 * Author: dm940
 *
 * Created on 16 May 2015, 4:58 PM
 */

#include "EditTask.h"
#include <QMessageBox>


EditTask::EditTask() {
	widget.setupUi(this);
	connect(widget.bDeleteTask,SIGNAL(clicked()),this,SLOT(clickbDeleteTask()));
}

EditTask::~EditTask() {
}

void EditTask::setID(int tmp) {
	id = tmp;
	widget.lID->setText(QString::number(id));
}

void EditTask::clickbDeleteTask() {
	QMessageBox msgBox;
	msgBox.setIcon(QMessageBox::Warning);
msgBox.setText("Are you sure you wish to delete this task");
msgBox.setInformativeText("You cannot undo this");
msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
msgBox.setDefaultButton(QMessageBox::No);
int ret = msgBox.exec();
switch (ret) {
  case QMessageBox::Yes:
      //delete task
      break;
  case QMessageBox::No:
      
      break;
  default:
      // should never be reached
      break;
}
}