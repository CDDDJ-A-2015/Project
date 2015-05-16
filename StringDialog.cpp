/*
 * File:   StringDialog.cpp
 * Author: dm940
 *
 * Created on 14 May 2015, 5:31 PM
 */

#include "StringDialog.h"

StringDialog::StringDialog() {
	widget.setupUi(this);
}

StringDialog::~StringDialog() {
}

QString StringDialog::getText() {
	return widget.lineEdit->text();
}
