/* 
 * File:   TeamMembers.h
 * Author: dm940
 *
 * Created on 21 May 2015, 10:10 PM
 */

#ifndef _TEAMMEMBERS_H
#define	_TEAMMEMBERS_H

#include "ui_TeamMembers.h"
#include "Packets.h"
#include "Client_Side.h"
#include <vector>
extern int sockfd;

class TeamMembers : public QDialog {
	Q_OBJECT
public:
	TeamMembers();
	virtual ~TeamMembers();
	void setID(int, int);
public slots:
	void clickbAssign();
	void clickbRemove();
private:
	Ui::TeamMembers widget;
	void getUserList();
	std::vector<User_List> Global_User_List;
};

#endif	/* _TEAMMEMBERS_H */
