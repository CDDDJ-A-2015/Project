/* 
 * File:   EditUser.h
 * Author: dm940
 *
 * Created on 7 May 2015, 3:07 PM
 */

#ifndef _EDITUSER_H
#define	_EDITUSER_H

#include "Packets.h"
#include "Client_Side.h"
#include "ui_EditUser.h"
extern int sockfd;

class EditUser : public QDialog {
    Q_OBJECT
public:
    EditUser();
    virtual ~EditUser();
	void setID(int);
    Ui::EditUser widget;
public slots:
    void clickbAddExp();
    void clickbDelExp();
    
protected:
	void accept();
	
private:
    createUser_Packet UP;
	int id;
	void createUser();
	void editUser();
	void getUserInfo();
	void getExpertises();
};

#endif	/* _EDITUSER_H */
