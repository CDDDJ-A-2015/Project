/*
 * File:   Search.cpp
 * Author: dm940
 *
 * Created on 13 May 2015, 7:25 PM
 */

#include "Search.h"
#include "EditUser.h"
#include <iostream>
#include "searchResults.h"

Search::Search() {
	sType = false;
    widget.setupUi(this);
	widget.wUsers->hide();
	connect(widget.bSearch,SIGNAL(clicked()),this,SLOT(searchResult()));
	connect(widget.bSProjects,SIGNAL(clicked()),this,SLOT(searchProjects()));
	connect(widget.bSUsers,SIGNAL(clicked()),this,SLOT(searchUsers()));
}

Search::~Search() {
}

void Search::searchResult() {
    searchResults *vSearch = new searchResults;
	vSearch->show();
}

void Search::setType(bool oType) {
	if (sType!= oType) {
		sType = oType;
		if (!oType) {
			widget.lWhatSearch->setText("Search Projects");
			widget.wUsers->hide();
			widget.wProjects->show();
		}
		else {
			widget.lWhatSearch->setText("Search Users");
			widget.wUsers->show();
			widget.wProjects->hide();
		}
	}
}

void Search::searchProjects() {
	widget.lWhatSearch->setText("Search Projects");
}

void Search::searchUsers() {
	widget.lWhatSearch->setText("Search Users");
}