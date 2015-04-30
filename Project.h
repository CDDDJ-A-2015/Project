/* 
 * File:   Project.h
 * Author: dm940
 *
 * Created on 21 March 2015, 3:37 PM
 */

#ifndef _PROJECT_H
#define	_PROJECT_H

#include "ui_Project.h"

class Project : public QMainWindow {
    Q_OBJECT
public:
    Project();
    virtual ~Project();
private:
    Ui::Project widget;
    void createProjects();
    QWidget *newTab;
    void showTasks();
};

#endif	/* _PROJECT_H */
