/* 
 * File:   EditTask.h
 * Author: dm940
 *
 * Created on 16 May 2015, 4:58 PM
 */

#ifndef _EDITTASK_H
#define	_EDITTASK_H

#include "ui_EditTask.h"

class EditTask : public QDialog {
	Q_OBJECT
public:
	EditTask();
	virtual ~EditTask();
	void setID(int);
	
public slots:
	
	
private:
	Ui::EditTask widget;
	int id;
};

#endif	/* _EDITTASK_H */
