/* 
 * File:   Task.h
 * Author: dm940
 *
 * Created on 14 May 2015, 7:01 PM
 */

#ifndef _TASK_H
#define	_TASK_H

#include "ui_Task.h"
#include "Client_Side.h"

class Task : public QWidget {
	Q_OBJECT
public:
	Task();
	virtual ~Task();
	void setID(int);
	
public slots:
	void addComment();
	void editTask();
	
private:
	Ui::Task widget;
	Project_Task me;
	void getTask();
};

#endif	/* _TASK_H */
