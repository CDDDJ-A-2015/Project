/* 
 * File:   Login.h
 * Author: dm940
 *
 * Created on 3 May 2015, 3:46 PM
 */

#ifndef _LOGIN_H
#define	_LOGIN_H

#include "ui_Login.h"

class Login : public QDialog {
    Q_OBJECT
public:
    Login();
    virtual ~Login();
private:
    Ui::Login widget;
};

#endif	/* _LOGIN_H */
