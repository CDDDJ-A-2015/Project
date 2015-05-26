/*
 * File:   GetInt.cpp
 * Author: dm940
 *
 * Created on 27 May 2015, 12:20 AM
 */

#include "GetInt.h"

GetInt::GetInt() {
	widget.setupUi(this);
}

GetInt::~GetInt() {
}

void GetInt::accept() {
	spin = widget.sInt->value();
	QDialog::accept();
}

int GetInt::getInt() {
	return spin;
}