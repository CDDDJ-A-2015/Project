/*
 * File:   Coco2.cpp
 * Author: dm940
 *
 * Created on 16 May 2015, 10:57 PM
 */

#include "Coco2.h"
#include "Coco1.h"
#include <cmath>

Coco2::Coco2() {
	widget.setupUi(this);
}

Coco2::~Coco2() {
}

int Coco2::calc() {
	int size;
	double sf = 0;
	double em = 1;
	switch(widget.bgSz->checkedId()) {
		case -2:
			size = 5;
			break;
		case -3:
			size = 10;
			break;
		case -4:
			size = 100;
			break;
		case -5:
			size = 500;
			break;
		case -6:
			size = 1000;
			break;		
	};
	if (widget.rP1->isChecked())
		sf += 6.2;
	else if (widget.rP2->isChecked())
		sf += 4.96;
	else if (widget.rP3->isChecked())
		sf += 3.72;
	else if (widget.rP4->isChecked())
		sf += 2.48;
	else if (widget.rP5->isChecked())
		sf += 1.24;
	
	if (widget.rF1->isChecked())
		sf += 5.07;
	else if (widget.rF2->isChecked())
		sf += 4.05;
	else if (widget.rF3->isChecked())
		sf += 3.04;
	else if (widget.rF4->isChecked())
		sf += 2.03;
	else if (widget.rF5->isChecked())
		sf += 1.01;
	
	if (widget.rR1->isChecked())
		sf += 7.07;
	else if (widget.rR2->isChecked())
		sf += 5.65;
	else if (widget.rR3->isChecked())
		sf += 4.24;
	else if (widget.rR4->isChecked())
		sf += 2.83;
	else if (widget.rR5->isChecked())
		sf += 1.41;
	
	if (widget.rT1->isChecked())
		sf += 5.48;
	else if (widget.rT2->isChecked())
		sf += 4.38;
	else if (widget.rT3->isChecked())
		sf += 3.29;
	else if (widget.rT4->isChecked())
		sf += 2.19;
	else if (widget.rT5->isChecked())
		sf += 1.10;
	
	if (widget.rRC1->isChecked())
		em *= 0.49;
	else if (widget.rRC2->isChecked())
		em *= 0.6;
	else if (widget.rRC3->isChecked())
		em *= 0.83;
	else if (widget.rRC4->isChecked())
		em *= 1;
	else if (widget.rRC5->isChecked())
		em *= 1.33;
	else if (widget.rRC6->isChecked())
		em *= 1.91;
	else if (widget.rRC7->isChecked())
		em *= 2.72;
	
	if (widget.rRU1->isChecked())
		em *= 0.95;
	else if (widget.rRU2->isChecked())
		em *= 1;
	else if (widget.rRU3->isChecked())
		em *= 1.07;
	else if (widget.rRU4->isChecked())
		em *= 1.15;
	else if (widget.rRU5->isChecked())
		em *= 1.24;
	
	if (widget.rPD1->isChecked())
		em *= 0.87;
	else if (widget.rPD2->isChecked())
		em *= 1;
	else if (widget.rPD3->isChecked())
		em *= 1.29;
	else if (widget.rPD4->isChecked())
		em *= 1.81;
	else if (widget.rPD5->isChecked())
		em *= 2.61;
	
	if (widget.rPE1->isChecked())
		em *= 2.12;
	else if (widget.rPE2->isChecked())
		em *= 1.62;
	else if (widget.rPE3->isChecked())
		em *= 1.26;
	else if (widget.rPE4->isChecked())
		em *= 1;
	else if (widget.rPE5->isChecked())
		em *= 0.83;
	else if (widget.rPE6->isChecked())
		em *= 0.63;
	else if (widget.rPE7->isChecked())
		em *= 0.5;
	
	if (widget.rPR1->isChecked())
		em *= 1.59;
	else if (widget.rPR2->isChecked())
		em *= 1.33;
	else if (widget.rPR3->isChecked())
		em *= 1.12;
	else if (widget.rPR4->isChecked())
		em *= 1;
	else if (widget.rPR5->isChecked())
		em *= 0.87;
	else if (widget.rPR6->isChecked())
		em *= 0.74;
	else if (widget.rPR7->isChecked())
		em *= 0.62;
	
	if (widget.rFC1->isChecked())
		em *= 1.43;
	else if (widget.rFC2->isChecked())
		em *= 1.3;
	else if (widget.rFC3->isChecked())
		em *= 1.1;
	else if (widget.rFC4->isChecked())
		em *= 1;
	else if (widget.rFC5->isChecked())
		em *= 0.87;
	else if (widget.rFC6->isChecked())
		em *= 0.73;
	else if (widget.rFC7->isChecked())
		em *= 0.62;
	
	if (widget.rSC1->isChecked())
		em *= 1.43;
	else if (widget.rSC2->isChecked())
		em *= 1.14;
	else if (widget.rSC3->isChecked())
		em *= 1;

	sf = 0.91 + (sf*0.01);
	
	size = ((2.94)*pow(size,sf)*em);
	return size;
}