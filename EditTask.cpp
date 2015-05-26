/*
 * File:   EditTask.cpp
 * Author: dm940
 *
 * Created on 16 May 2015, 4:58 PM
 */

#include <iostream>
#include <QMessageBox>
#include "Packets.h"
#include "Client_Side.h"
#include "EditTask.h"
#include "Task.h"
extern int sockfd;
using namespace std;


EditTask::EditTask(int PID) {
	widget.setupUi(this);
	connect(widget.bDeleteTask,SIGNAL(clicked()),this,SLOT(clickbDeleteTask()));
	connect(widget.dDueDate,SIGNAL(dateChanged(QDate)),this,SLOT(changeDueDate(QDate)));
	connect(widget.dStartDate,SIGNAL(dateChanged(QDate)),this,SLOT(changeStartDate(QDate)));
	connect(widget.sProgress,SIGNAL(valueChanged(int)),this,SLOT(changesProgress(int)));
	connect(widget.sLength,SIGNAL(valueChanged(int)),this,SLOT(changesLength(int)));
	connect(widget.cStatus,SIGNAL(currentIndexChanged(int)),this,SLOT(changecStatus(int)));
	CTP.Project_ID = PID;
	CTP.Task_ID = -1;
	widget.dStartDate->setDate(QDate::currentDate());
	widget.dDueDate->setDate(QDate::currentDate());
	widget.lDispProgress->hide();
	widget.sProgress->hide();
	widget.progressBar->hide();
}

EditTask::~EditTask() {
}

void EditTask::setID(int tmp) {
	CTP.Task_ID = tmp;
	widget.lID->setText(QString::number(CTP.Task_ID));
	
	widget.eName->setText(CTP.Name);
	widget.eDesc->clear();
	widget.eDesc->insertPlainText(CTP.Description);
	
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

void EditTask::changeDueDate(QDate d) {
	widget.dStartDate->setDate(d.addDays(widget.sLength->value() * -1));
}

void EditTask::changeStartDate(QDate d) {
	widget.dDueDate->setDate(d.addDays(widget.sLength->value()));
}

void EditTask::changesProgress(int p) {
	widget.progressBar->setValue(p);
	if (p==100) {
		QMessageBox msgBox;
		msgBox.setIcon(QMessageBox::Information);
		msgBox.setText("You have marked the progress as 100%");
		msgBox.setInformativeText("Would you like to set status to completed?");
		msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
		msgBox.setDefaultButton(QMessageBox::Yes);
		int ret = msgBox.exec();
		switch (ret) {
		  case QMessageBox::Yes:
			  widget.cStatus->setCurrentIndex(3);
			  break;
		  case QMessageBox::No:
			  break;
		  default:
			  // should never be reached
			  break;
		}
	}
}

void EditTask::changesLength(int l) {
	widget.dDueDate->setDate(widget.dStartDate->date().addDays(l));
}
void EditTask::changecStatus(int i) {
	if (i == 2) {
		widget.lDispProgress->show();
		widget.sProgress->show();
		widget.progressBar->show();
	}
	else {
		widget.lDispProgress->hide();
		widget.sProgress->hide();
		widget.progressBar->hide();
	}
}

void EditTask::accept() {
	if(widget.eName->text().isEmpty()) {
		QMessageBox msgBox;
		msgBox.setIcon(QMessageBox::Warning);
		msgBox.setText("You cannot have a task without a name");
		msgBox.exec();
		return;
	}
	if (widget.eDesc->toPlainText().isEmpty()) {
		QMessageBox msgBox;
		msgBox.setIcon(QMessageBox::Warning);
		msgBox.setText("You cannot have an empty description");
		msgBox.exec();
		return;
	}
	
	strcpy(CTP.Name,widget.eName->text().toStdString().c_str());
	strcpy(CTP.Description,widget.eDesc->toPlainText().toStdString().c_str());
	strcpy(CTP.Date_Due,widget.dDueDate->text().toStdString().c_str());
	CTP.Length = widget.sLength->value();
	strcpy(CTP.Last_Updated,QDateTime::currentDateTime().toString("dd/MM/yyyy").toStdString().c_str());
	strcpy(CTP.Date_Created,widget.dStartDate->text().toStdString().c_str());
	CTP.Priority = widget.cPriority->currentIndex();
	CTP.Status = widget.cStatus->currentIndex();
	CTP.Progress = widget.sProgress->value();
	
	children.clear();
	for(int i=0;i<widget.tDep->topLevelItemCount();i++) {
		children.push_back(widget.tDep->topLevelItem(i)->text(0).toInt());
	}
	
	CTP.NUM_C_Tasks = children.size();
	CTP.NUM_P_Tasks = 0;
	
	if (CTP.Task_ID != -1) { //save
		
	}
	else { //create
		createTask();
		Task *vTask = new Task;
		vTask->setID(CTP.Task_ID);
		vTask->show();
	}
	QDialog::accept();
}

void EditTask::createTask()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    
    RP.Request = false;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    T.T = 3;
    
    T.ID = -1;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //ctp stuff here
	
    n =  write(sockfd, &CTP, sizeof(CTP));
    if (n < 0 )
        cout <<"ERROR writing to socket" << endl;
    
    for(int i = 0; i < CTP.NUM_P_Tasks; i++)
    {
        int Parent = P.Parent_Task[i].ID;
        n = write(sockfd, &Parent, sizeof(int));
        if (n < 0 )
            cout <<"ERROR writing to socket" << endl;
    }
    
    for(int i = 0; i < CTP.NUM_C_Tasks; i++)
    {
        int Child = children[i];
        n = write(sockfd, &Child, sizeof(int));
        if (n < 0 )
            cout <<"ERROR writing to socket" << endl;

    }
    
    int TASK_ID;
    n = read(sockfd, &TASK_ID, sizeof(int));
    if (n < 0 )
        cout <<"ERROR writing to socket" << endl;
	CTP.Task_ID = TASK_ID;

}