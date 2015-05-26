/* 
 * File:   GetInt.h
 * Author: dm940
 *
 * Created on 27 May 2015, 12:20 AM
 */

#ifndef _GETINT_H
#define	_GETINT_H

#include "ui_GetInt.h"

class GetInt : public QDialog {
	Q_OBJECT
public:
	GetInt();
	virtual ~GetInt();
	int getInt();
protected:
	void accept();
private:
	Ui::GetInt widget;
	int spin;
};

#endif	/* _GETINT_H */
