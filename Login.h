/* 
 * File:   Login.h
 * Author: dm940
 *
 * Created on 3 May 2015, 3:46 PM
 */

#ifndef _LOGIN_H
#define	_LOGIN_H

#include "ui_Login.h"
#include "Packets.h"
extern int sockfd;

class Login : public QDialog {
    Q_OBJECT
public:
    Login();
    virtual ~Login();
    
public slots:
    void verify();
    
private:
    Ui::Login widget;
	bool login(Login_Packet);
};

#endif	/* _LOGIN_H */
