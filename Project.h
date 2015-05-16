/* 
 * File:   Project.h
 * Author: dm940
 *
 * Created on 3 May 2015, 3:23 PM
 */

#ifndef _PROJECT_H
#define	_PROJECT_H

#include "ui_Project.h"

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
	
private:
    Ui::Project widget;
    void createProjects();
    QWidget *newTab;
    void showTasks();
	int id;
};

#endif	/* _PROJECT_H */
