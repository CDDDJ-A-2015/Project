/* 
 * File:   EditTask.h
 * Author: dm940
 *
 * Created on 16 May 2015, 4:58 PM
 */

#ifndef _EDITTASK_H
#define	_EDITTASK_H

#include "ui_EditTask.h"
#include "Project.h"
#include <iostream>
#include <QMessageBox>
#include "Packets.h"
#include "Client_Side.h"
#include "Task.h"

class EditTask : public QDialog {
	Q_OBJECT
public:
	EditTask(int PID);
	virtual ~EditTask();
	void setID(int);
	
public slots:
	void clickbDeleteTask();
	void changeDueDate(QDate);
	void changeStartDate(QDate);
	void changesProgress(int);
	void changesLength(int);
	void changecStatus(int);
	
	
protected:
	void accept();
	
private:
	Project_Task P;
	Ui::EditTask widget;
	std::vector<int> children;
	create_Task_Packet CTP;
	void createTask();
};

#endif	/* _EDITTASK_H */
