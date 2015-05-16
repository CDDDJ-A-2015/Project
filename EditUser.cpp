/*
 * File:   EditUser.cpp
 * Author: dm940
 *
 * Created on 7 May 2015, 3:07 PM
 */

#include "EditUser.h"

EditUser::EditUser() {
    widget.setupUi(this);
    connect(widget.bAddExp, SIGNAL(clicked()),this, SLOT(clickbAddExp()));
    connect(widget.bDelExp, SIGNAL(clicked()),this, SLOT(clickbDelExp()));
}

EditUser::~EditUser() {
}

void EditUser::clickbAddExp() {
    QListWidgetItem *newItem = new QListWidgetItem(widget.listExpertise);
    newItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    newItem->setText("NewItem");
}

void EditUser::clickbDelExp() {
    qDeleteAll(widget.listExpertise->selectedItems());
}
