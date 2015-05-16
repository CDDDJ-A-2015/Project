/* 
 * File:   Coco2.h
 * Author: dm940
 *
 * Created on 16 May 2015, 10:57 PM
 */

#ifndef _COCO2_H
#define	_COCO2_H

#include "ui_Coco2.h"

class Coco2 : public QDialog {
	Q_OBJECT
public:
	Coco2();
	virtual ~Coco2();
private:
	Ui::Coco2 widget;
};

#endif	/* _COCO2_H */
