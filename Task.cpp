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
	me.Task_ID = tmp;
	
	//READ
	
	widget.lID->setText(QString::number(me.Task_ID));
	widget.lName->setText(me.Name);
	widget.lPID->setText(QString::number(me.Project_ID));
	widget.lDescription->setText(me.Description);
	widget.lDue->setText(me.Date_Due);
	widget.lCreated->setText(me.Date_Due);
	switch (me.Priority) {
		case 0:
			widget.lPriority->setText("Trivial");
			break;
		case 1:
			widget.lPriority->setText("Low");
			break;
		case 2:
			widget.lPriority->setText("High");
			break;
		case 3:
			widget.lPriority->setText("Critical");
			break;
	};
	
	switch (me.Pending) {
		case 0:
			widget.fStatus->show();
			widget.lStatus->setText("Pending");
			widget.progressBar->hide();
			break;
		case 1:
			widget.fStatus->show();
			widget.lStatus->setText("Not Started");
			widget.progressBar->hide();
			break;
		case 2:
			widget.fStatus->hide();
			widget.progressBar->show();
			widget.progressBar->setValue(me.Progress);
			break;
		case 3:
			widget.fStatus->show();
			widget.lStatus->setText("Completed");
			widget.progressBar->hide();
			break;
	};
	
	
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
	vET->setID(me.Task_ID);
	vET->exec();
}