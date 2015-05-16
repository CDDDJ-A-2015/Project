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
private:
	Ui::EditProject widget;
};

#endif	/* _EDITPROJECT_H */
