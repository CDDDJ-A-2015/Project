/********************************************************************************
** Form generated from reading UI file 'Projecta.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTA_H
#define UI_PROJECTA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QProgressBar>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Project
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *projName;
    QLabel *projDesc;
    QProgressBar *projProgress;
    QTableWidget *projTaskList;
    QListWidget *listWidget;

    void setupUi(QMainWindow *Project)
    {
        if (Project->objectName().isEmpty())
            Project->setObjectName(QString::fromUtf8("Project"));
        Project->setEnabled(true);
        Project->resize(842, 565);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Project->sizePolicy().hasHeightForWidth());
        Project->setSizePolicy(sizePolicy);
        Project->setMinimumSize(QSize(0, 0));
        Project->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(Project);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        projName = new QLabel(centralwidget);
        projName->setObjectName(QString::fromUtf8("projName"));
        QFont font;
        font.setPointSize(32);
        font.setUnderline(true);
        projName->setFont(font);

        verticalLayout->addWidget(projName);

        projDesc = new QLabel(centralwidget);
        projDesc->setObjectName(QString::fromUtf8("projDesc"));
        projDesc->setScaledContents(false);
        projDesc->setWordWrap(true);

        verticalLayout->addWidget(projDesc);

        projProgress = new QProgressBar(centralwidget);
        projProgress->setObjectName(QString::fromUtf8("projProgress"));
        projProgress->setValue(0);

        verticalLayout->addWidget(projProgress);

        projTaskList = new QTableWidget(centralwidget);
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

        verticalLayout->addWidget(projTaskList);

        listWidget = new QListWidget(centralwidget);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem->setFont(font1);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        Project->setCentralWidget(centralwidget);

        retranslateUi(Project);

        QMetaObject::connectSlotsByName(Project);
    } // setupUi

    void retranslateUi(QMainWindow *Project)
    {
        Project->setWindowTitle(QApplication::translate("Project", "Project", 0, QApplication::UnicodeUTF8));
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
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class Project: public Ui_Project {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTA_H
