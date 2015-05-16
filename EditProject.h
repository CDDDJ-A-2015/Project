/* 
 * File:   EditProject.h
 * Author: dm940
 *
 * Created on 14 May 2015, 6:01 PM
 */

#ifndef _EDITPROJECT_H
#define	_EDITPROJECT_H

#include "ui_EditProject.h"

class EditProject : public QWidget {
	Q_OBJECT
public:
	EditProject();
	virtual ~EditProject();
	void setID(int);

public slots:
	void clickSave();
	void clickCancel();
	
private:
	Ui::EditProject widget;
	int id;
	bool save;
};

#endif	/* _EDITPROJECT_H */
