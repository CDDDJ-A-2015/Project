/*
 * File:   FuncPoints.cpp
 * Author: dm940
 *
 * Created on 17 May 2015, 12:50 PM
 */

#include "FuncPoints.h"

FuncPoints::FuncPoints() {
	widget.setupUi(this);
}

FuncPoints::~FuncPoints() {
}

int FuncPoints::calc() {
	int UFP = 0;
	double VAF = 0;
	
	UFP += (widget.sEIL->value() * 3);
	UFP += (widget.sEIM->value() * 4);
	UFP += (widget.sEIH->value() * 6);
	
	UFP += (widget.sEOL->value() * 4);
	UFP += (widget.sEOM->value() * 5);
	UFP += (widget.sEOH->value() * 7);
	
	UFP += (widget.sEQL->value() * 3);
	UFP += (widget.sEQM->value() * 4);
	UFP += (widget.sEQH->value() * 6);
	
	UFP += (widget.sILFL->value() * 7);
	UFP += (widget.sILFM->value() * 10);
	UFP += (widget.sILFH->value() * 15);
	
	UFP += (widget.sEIFL->value() * 5);
	UFP += (widget.sEIFM->value() * 7);
	UFP += (widget.sEIFH->value() * 10);
	
	
	VAF += widget.sDI1->value();
	VAF += widget.sDI2->value();
	VAF += widget.sDI3->value();
	VAF += widget.sDI4->value();
	VAF += widget.sDI5->value();
	VAF += widget.sDI6->value();
	VAF += widget.sDI7->value();
	VAF += widget.sDI8->value();
	VAF += widget.sDI9->value();
	VAF += widget.sDI10->value();
	VAF += widget.sDI11->value();
	VAF += widget.sDI12->value();
	VAF += widget.sDI13->value();
	VAF += widget.sDI14->value();
	
	VAF = 0.65 + (VAF*0.01);
	
	return (UFP*VAF);
}
