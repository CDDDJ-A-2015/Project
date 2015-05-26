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
	int getGID();
	QString getGName();
public slots:
	void clickbAssign();
	void clickbRemove();
protected:
	void accept();
private:
	Ui::TeamMembers widget;
	void getUserList();
	std::vector<User_List> Global_User_List;
	int type;
	int id;
	std::vector<Task_Assignment> tAssigned;
	void getTaskAssignments();
	void saveTaskAssignment();
	void saveProjectTeam();
};

#endif	/* _TEAMMEMBERS_H */
