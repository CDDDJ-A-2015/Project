/*
 * File:   Coco1.cpp
 * Author: dm940
 *
 * Created on 16 May 2015, 10:08 PM
 */

#include "Coco1.h"
#include <cmath>

Coco1::Coco1() {
	widget.setupUi(this);
}

Coco1::~Coco1() {
}

int Coco1::calc() {
	if(widget.rOrganic->isChecked()) {
		if (widget.rVS->isChecked()) {
			return (2.4*pow(5,1.05));
		}
		if (widget.rS->isChecked()) {
			return (2.4*pow(10,1.05));
		}
		if (widget.rM->isChecked()) {
			return (2.4*pow(100,1.05));
		}
		if (widget.rL->isChecked()) {
			return (2.4*pow(500,1.05));
		}
		if (widget.rVL->isChecked()) {
			return (2.4*pow(1000,1.05));
		}
	}
	else if (widget.rEmb->isChecked()) {
		if (widget.rVS->isChecked()) {
			return (3.0*pow(5,1.12));
		}
		if (widget.rS->isChecked()) {
			return (3.0*pow(10,1.12));
		}
		if (widget.rM->isChecked()) {
			return (3.0*pow(100,1.12));
		}
		if (widget.rL->isChecked()) {
			return (3.0*pow(500,1.12));
		}
		if (widget.rVL->isChecked()) {
			return (3.0*pow(1000,1.12));
		}
	}
	else { //semi
		if (widget.rVS->isChecked()) {
			return (3.6*pow(5,1.2));
		}
		if (widget.rS->isChecked()) {
			return (3.6*pow(10,1.2));
		}
		if (widget.rM->isChecked()) {
			return (3.6*pow(100,1.2));
		}
		if (widget.rL->isChecked()) {
			return (3.6*pow(500,1.2));
		}
		if (widget.rVL->isChecked()) {
			return (3.6*pow(1000,1.2));
		}
	}
	return -1;
}
