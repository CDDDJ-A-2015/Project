/*
 * File:   Project.cpp
 * Author: dm940
 *
 * Created on 21 March 2015, 3:37 PM
 */

#include "Project.h"

Project::Project() {
    
    
    widget.setupUi(this);
    showTasks();
    createProjects();
    
    
}

Project::~Project() {
    delete[] newTab;
}

void Project::createProjects() {
    /*QString name;
    int numOfProjects = 5;
    newTab = new QWidget[numOfProjects];
    QLabel *projName = new QLabel[numOfProjects];
    for (int i=0;i<numOfProjects;i++) {
        name = QString::number(i+1);
        widget.tabWidget->addTab(&newTab[i], name);
        newTab[i].setObjectName(name);
        projName[i].setParent(name)
    }*/
        /*QWidget *proj;
        QVBoxLayout *verticalLayout_2;
        proj = new QWidget();
        QLabel *projName;
        QLabel *projDesc;
        //QProgressBar *projProgress;
        QTableWidget *projTaskList;
        QListWidget *listWidget;
        
        
        proj->setObjectName(QString::fromUtf8("proj"));
        verticalLayout_2 = new QVBoxLayout(proj);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        projName = new QLabel(proj);
        projName->setObjectName(QString::fromUtf8("projName"));
        QFont font;
        font.setPointSize(32);
        font.setUnderline(true);
        projName->setFont(font);

        verticalLayout_2->addWidget(projName);

        projDesc = new QLabel(proj);
        projDesc->setObjectName(QString::fromUtf8("projDesc"));
        projDesc->setScaledContents(false);
        projDesc->setWordWrap(true);

        verticalLayout_2->addWidget(projDesc);

        //projProgress = new QProgressBar(proj);
        //projProgress->setObjectName(QString::fromUtf8("projProgress"));
        //projProgress->setValue(0);

        //verticalLayout_2->addWidget(projProgress);

        projTaskList = new QTableWidget(proj);
        if (projTaskList->columnCount() < 4)
            projTaskList->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        projTaskList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        projTaskList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        projTaskList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        projTaskList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        projTaskList->setObjectName(QString::fromUtf8("projTaskList"));
        projTaskList->setWordWrap(true);

        verticalLayout_2->addWidget(projTaskList);

        listWidget = new QListWidget(proj);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem->setFont(font1);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);

        widget.tabWidget->addTab(proj, QString());
        
        projName->setText(QApplication::translate("Project", "Trees of Life", 0, QApplication::UnicodeUTF8));
        projDesc->setText(QApplication::translate("Project", "The trees of life project shows the assimilation of trees into the life of others.  After such the trees will then destroy those who it has assimilated with, to become the new trees", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = projTaskList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Project", "Task", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = projTaskList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Project", "Progress", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = projTaskList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Project", "Due Date", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = projTaskList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Project", "GoTo", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Project", "COMMENTS", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);*/

}

void Project::showTasks() {
    
}