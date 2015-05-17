/* 
 * File:   FuncPoints.h
 * Author: dm940
 *
 * Created on 17 May 2015, 12:50 PM
 */

#ifndef _FUNCPOINTS_H
#define	_FUNCPOINTS_H

#include "ui_FuncPoints.h"

class FuncPoints : public QDialog {
	Q_OBJECT
public:
	FuncPoints();
	virtual ~FuncPoints();
	int calc();
private:
	Ui::FuncPoints widget;
};

#endif	/* _FUNCPOINTS_H */
