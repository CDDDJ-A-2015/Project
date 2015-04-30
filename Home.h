/* 
 * File:   Home.h
 * Author: dm940
 *
 * Created on 30 April 2015, 4:21 PM
 */

#ifndef _HOME_H
#define	_HOME_H

#include "ui_Home.h"

class Home : public QMainWindow {
    Q_OBJECT
public:
    Home();
    virtual ~Home();
    
private slots: 
    void clickbProjects();
    void clickbUsers();
    void dClickGTable(QModelIndex);
private:
    Ui::Home widget;
    bool bGlob;
};


#endif	/* _HOME_H */
