/* 
 * File:   EditProject.h
 * Author: dm940
 *
 * Created on 14 May 2015, 6:01 PM
 */

#ifndef _EDITPROJECT_H
#define	_EDITPROJECT_H

#include "ui_EditProject.h"
#include "Packets.h"
#include "Client_Side.h"
#include <iostream>
extern int sockfd;

class EditProject : public QWidget {
	Q_OBJECT
public:
	EditProject();
	virtual ~EditProject();
	void setID(int);

public slots:
	void clickSave();
	void clickCancel();
	void clickbC1();
	void clickbC2();
	void clickbFP();
	void clickbChooseManager();
	
private:
	Ui::EditProject widget;
	int id;
	bool save;
	Project_Packet P;
	void getProject();
	void createProject();
};

#endif	/* _EDITPROJECT_H */
