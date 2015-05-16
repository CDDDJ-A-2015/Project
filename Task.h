/* 
 * File:   Task.h
 * Author: dm940
 *
 * Created on 14 May 2015, 7:01 PM
 */

#ifndef _TASK_H
#define	_TASK_H

#include "ui_Task.h"

class Task : public QWidget {
	Q_OBJECT
public:
	Task();
	virtual ~Task();
	void setID(int);
private:
	Ui::Task widget;
};

#endif	/* _TASK_H */
