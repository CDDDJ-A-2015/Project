/* 
 * File:   UserProfile.h
 * Author: dm940
 *
 * Created on 30 April 2015, 8:36 PM
 */

#ifndef _USERPROFILE_H
#define	_USERPROFILE_H

#include "ui_UserProfile.h"

class UserProfile : public QWidget {
    Q_OBJECT
public:
    UserProfile();
    virtual ~UserProfile();
    void setID(int tmp);
private:
    Ui::UserProfile widget;
    int id;
};

#endif	/* _USERPROFILE_H */
