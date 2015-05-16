/*
 * File:   Task.cpp
 * Author: dm940
 *
 * Created on 14 May 2015, 7:01 PM
 */

#include "Task.h"
#include "StringDialog.h"
#include "EditTask.h"

Task::Task() {
	widget.setupUi(this);
	connect(widget.bAddComment,SIGNAL(clicked()),this,SLOT(addComment()));
	connect(widget.bEditTask,SIGNAL(clicked()),this,SLOT(editTask()));
}

Task::~Task() {
}

void Task::setID(int tmp) {
	id = tmp;
	widget.lID->setText(QString::number(id));
}

void Task::addComment() {
	StringDialog *vAddComment = new StringDialog;
	vAddComment->exec();
	if (vAddComment->result() == QDialog::Accepted) {
		widget.listComments->addItem(vAddComment->getText());
	}
}

void Task::editTask() {
	EditTask *vET = new EditTask();
	vET->setID(id);
	vET->exec();
}