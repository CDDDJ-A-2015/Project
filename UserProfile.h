/* 
 * File:   UserProfile.h
 * Author: dm940
 *
 * Created on 30 April 2015, 8:36 PM
 */

#ifndef _USERPROFILE_H
#define	_USERPROFILE_H

#include "ui_UserProfile.h"
#include "Client_Side.h"
#include "Packets.h"
extern int sockfd;


class UserProfile : public QWidget {
    Q_OBJECT
public:
    UserProfile();
    virtual ~UserProfile();
    void setID(int);
    
public slots:
    void clickEditUser();
    
private:
    Ui::UserProfile widget;
	User_Profile_Screen UPS;
	void getUserInfo();
	void getExpertises();
	void getPreviousRoles();
};

#endif	/* _USERPROFILE_H */
