/* 
 * File:   Project.h
 * Author: dm940
 *
 * Created on 3 May 2015, 3:23 PM
 */

#ifndef _PROJECT_H
#define	_PROJECT_H

#include "ui_Project.h"
#include "EditProject.h"
#include "StringDialog.h"
#include "Task.h"
#include "displayGraphics.h"
#include "Packets.h"
#include <iostream>
extern int sockfd;

class Project : public QWidget {
    Q_OBJECT
public:
    Project();
    virtual ~Project();
	void setID(int);
	
public slots:
	void editProject();
	void addComment();
	void viewTask(QModelIndex);
	void clickbAPN();
	void clickbPert();
	void clickbGantt();
	void clickbAddTask();
	
private:
    Ui::Project widget;
	Specific_Project P;
	void getProject();
	void getProjectTasks();
	void getProjectComments();
	
};

#endif	/* _PROJECT_H */
