/* 
 * File:   Coco1.h
 * Author: dm940
 *
 * Created on 16 May 2015, 10:08 PM
 */

#ifndef _COCO1_H
#define	_COCO1_H

#include "ui_Coco1.h"

class Coco1 : public QDialog {
	Q_OBJECT
public:
	Coco1();
	virtual ~Coco1();
	int calc();
private:
	Ui::Coco1 widget;
};

#endif	/* _COCO1_H */
