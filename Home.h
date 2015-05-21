/* 
 * File:   Home.h
 * Author: dm940
 *
 * Created on 30 April 2015, 4:21 PM
 */

#ifndef _HOME_H
#define	_HOME_H

#include "ui_Home.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/time.h>
#include <netdb.h> 
#include <vector>
#include <cstring>
#include "Client_Side.h"
#include "Packets.h"

extern int sockfd, UID;

class Home : public QMainWindow {
    Q_OBJECT
public:
    Home();
    virtual ~Home();
    
private slots: 
    void clickbProjects();
    void clickbUsers();
    void dClickGTable(QModelIndex);
	void clickbSearch();
	void dClickMyProjects(QModelIndex);
	void clickbYourProfile();
	void clickbAddProject();
	void dClickMyTasks(QModelIndex);
	
private:
    Ui::Home widget;
    bool bGlob;
	Home_Screen_User Me;
	void getNotification();
	void getTasks();
	void getProjectList();
	std::vector<Project_List> Global_Project_List;
	std::vector<User_List> Global_User_List;
	void getUserList();
	void getUserProjects();
};



#endif	/* _HOME_H */
