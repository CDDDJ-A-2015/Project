/********************************************************************************
** Form generated from reading UI file 'Home.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QTableWidget *tUserTaskList;
    QLabel *uName;
    QListWidget *lNotificationList;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *tMyProjects;
    QWidget *proj;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *bProjects;
    QPushButton *bUsers;
    QTreeWidget *tGlobals;

    void setupUi(QMainWindow *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QString::fromUtf8("Home"));
        Home->resize(823, 546);
        centralwidget = new QWidget(Home);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setAutoFillBackground(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tUserTaskList = new QTableWidget(tab);
        if (tUserTaskList->columnCount() < 3)
            tUserTaskList->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tUserTaskList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tUserTaskList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tUserTaskList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tUserTaskList->setObjectName(QString::fromUtf8("tUserTaskList"));
        tUserTaskList->setWordWrap(true);

        gridLayout->addWidget(tUserTaskList, 1, 0, 1, 1);

        uName = new QLabel(tab);
        uName->setObjectName(QString::fromUtf8("uName"));
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        uName->setFont(font);

        gridLayout->addWidget(uName, 0, 0, 1, 1);

        lNotificationList = new QListWidget(tab);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(lNotificationList);
        __qlistwidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem->setFont(font1);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(lNotificationList);
        __qlistwidgetitem1->setBackground(brush1);
        __qlistwidgetitem1->setForeground(brush);
        lNotificationList->setObjectName(QString::fromUtf8("lNotificationList"));

        gridLayout->addWidget(lNotificationList, 1, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_2 = new QHBoxLayout(tab_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tMyProjects = new QTreeWidget(tab_2);
        new QTreeWidgetItem(tMyProjects);
        new QTreeWidgetItem(tMyProjects);
        new QTreeWidgetItem(tMyProjects);
        tMyProjects->setObjectName(QString::fromUtf8("tMyProjects"));
#ifndef QT_NO_WHATSTHIS
        tMyProjects->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
        tMyProjects->setAlternatingRowColors(true);
        tMyProjects->setWordWrap(true);
        tMyProjects->setExpandsOnDoubleClick(true);
        tMyProjects->header()->setStretchLastSection(false);

        horizontalLayout_2->addWidget(tMyProjects);

        tabWidget->addTab(tab_2, QString());
        proj = new QWidget();
        proj->setObjectName(QString::fromUtf8("proj"));
        verticalLayout_2 = new QVBoxLayout(proj);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bProjects = new QPushButton(proj);
        bProjects->setObjectName(QString::fromUtf8("bProjects"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        bProjects->setFont(font2);

        horizontalLayout->addWidget(bProjects);

        bUsers = new QPushButton(proj);
        bUsers->setObjectName(QString::fromUtf8("bUsers"));
        bUsers->setFont(font2);

        horizontalLayout->addWidget(bUsers);


        verticalLayout_2->addLayout(horizontalLayout);

        tGlobals = new QTreeWidget(proj);
        new QTreeWidgetItem(tGlobals);
        new QTreeWidgetItem(tGlobals);
        new QTreeWidgetItem(tGlobals);
        tGlobals->setObjectName(QString::fromUtf8("tGlobals"));
#ifndef QT_NO_WHATSTHIS
        tGlobals->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
        tGlobals->setAlternatingRowColors(true);
        tGlobals->setWordWrap(true);
        tGlobals->setExpandsOnDoubleClick(true);
        tGlobals->header()->setStretchLastSection(false);

        verticalLayout_2->addWidget(tGlobals);

        tabWidget->addTab(proj, QString());

        verticalLayout->addWidget(tabWidget);

        Home->setCentralWidget(centralwidget);

        retranslateUi(Home);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QMainWindow *Home)
    {
        Home->setWindowTitle(QApplication::translate("Home", "Home", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tUserTaskList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Home", "Task", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tUserTaskList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Home", "Progress", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tUserTaskList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Home", "Due Date", 0, QApplication::UnicodeUTF8));
        uName->setText(QApplication::translate("Home", "TextLabel", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = lNotificationList->isSortingEnabled();
        lNotificationList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = lNotificationList->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Home", "NOTIFICATIONS", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = lNotificationList->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Home", "New Item", 0, QApplication::UnicodeUTF8));
        lNotificationList->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Home", "Tasks", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = tMyProjects->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("Home", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(4, QApplication::translate("Home", "Progress", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("Home", "My Role", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("Home", "Manager", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("Home", "Project Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("Home", "ID", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled1 = tMyProjects->isSortingEnabled();
        tMyProjects->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = tMyProjects->topLevelItem(0);
        ___qtreewidgetitem1->setText(1, QApplication::translate("Home", "test", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("Home", "2414", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = tMyProjects->topLevelItem(1);
        ___qtreewidgetitem2->setText(1, QApplication::translate("Home", "New Item", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = tMyProjects->topLevelItem(2);
        ___qtreewidgetitem3->setText(1, QApplication::translate("Home", "21", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem3->setText(0, QApplication::translate("Home", "2134", 0, QApplication::UnicodeUTF8));
        tMyProjects->setSortingEnabled(__sortingEnabled1);

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Home", "My Projects", 0, QApplication::UnicodeUTF8));
        bProjects->setText(QApplication::translate("Home", "Projects", 0, QApplication::UnicodeUTF8));
        bUsers->setText(QApplication::translate("Home", "Users", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = tGlobals->headerItem();
        ___qtreewidgetitem4->setText(4, QApplication::translate("Home", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem4->setText(3, QApplication::translate("Home", "Progress", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem4->setText(2, QApplication::translate("Home", "Manager", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem4->setText(1, QApplication::translate("Home", "Project Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem4->setText(0, QApplication::translate("Home", "ID", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled2 = tGlobals->isSortingEnabled();
        tGlobals->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem5 = tGlobals->topLevelItem(0);
        ___qtreewidgetitem5->setText(1, QApplication::translate("Home", "test", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem5->setText(0, QApplication::translate("Home", "2414", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = tGlobals->topLevelItem(1);
        ___qtreewidgetitem6->setText(1, QApplication::translate("Home", "New Item", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem7 = tGlobals->topLevelItem(2);
        ___qtreewidgetitem7->setText(1, QApplication::translate("Home", "21", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem7->setText(0, QApplication::translate("Home", "2134", 0, QApplication::UnicodeUTF8));
        tGlobals->setSortingEnabled(__sortingEnabled2);

        tabWidget->setTabText(tabWidget->indexOf(proj), QApplication::translate("Home", "Globals", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
