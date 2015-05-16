/* 
 * File:   EditUser.h
 * Author: dm940
 *
 * Created on 7 May 2015, 3:07 PM
 */

#ifndef _EDITUSER_H
#define	_EDITUSER_H

#include "ui_EditUser.h"

class EditUser : public QDialog {
    Q_OBJECT
public:
    EditUser();
    virtual ~EditUser();
	void setID(int);
    
public slots:
    void clickbAddExp();
    void clickbDelExp();
    
private:
    Ui::EditUser widget;
	int id;
};

#endif	/* _EDITUSER_H */
