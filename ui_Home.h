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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
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
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lName;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lDispID;
    QLabel *lID;
    QLabel *lIsAdmin;
    QPushButton *bYourProfile;
    QHBoxLayout *horizontalLayout_7;
    QTreeWidget *tUserTaskList;
    QListWidget *lNotificationList;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *tMyProjects;
    QWidget *proj;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *bProjects;
    QPushButton *bUsers;
    QPushButton *bSearch;
    QTreeWidget *tGlobals;
    QWidget *adminPanel;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *bAddProject;
    QPushButton *bAddUser;

    void setupUi(QMainWindow *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QString::fromUtf8("Home"));
        Home->resize(925, 545);
        centralwidget = new QWidget(Home);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setAutoFillBackground(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lName = new QLabel(tab);
        lName->setObjectName(QString::fromUtf8("lName"));
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        lName->setFont(font);

        horizontalLayout_6->addWidget(lName);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lDispID = new QLabel(tab);
        lDispID->setObjectName(QString::fromUtf8("lDispID"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lDispID->sizePolicy().hasHeightForWidth());
        lDispID->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(lDispID);

        lID = new QLabel(tab);
        lID->setObjectName(QString::fromUtf8("lID"));
        lID->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lID);


        verticalLayout_4->addLayout(horizontalLayout_5);

        lIsAdmin = new QLabel(tab);
        lIsAdmin->setObjectName(QString::fromUtf8("lIsAdmin"));
        lIsAdmin->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lIsAdmin);


        horizontalLayout_3->addLayout(verticalLayout_4);

        bYourProfile = new QPushButton(tab);
        bYourProfile->setObjectName(QString::fromUtf8("bYourProfile"));

        horizontalLayout_3->addWidget(bYourProfile);


        horizontalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        tUserTaskList = new QTreeWidget(tab);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(5, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(4, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(3, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(2, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tUserTaskList->setHeaderItem(__qtreewidgetitem);
        tUserTaskList->setObjectName(QString::fromUtf8("tUserTaskList"));

        horizontalLayout_7->addWidget(tUserTaskList);

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
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lNotificationList->sizePolicy().hasHeightForWidth());
        lNotificationList->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(lNotificationList);


        verticalLayout_3->addLayout(horizontalLayout_7);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_2 = new QHBoxLayout(tab_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tMyProjects = new QTreeWidget(tab_2);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setTextAlignment(6, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem1->setTextAlignment(5, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem1->setTextAlignment(4, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem1->setTextAlignment(3, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem1->setTextAlignment(2, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem1->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem1->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tMyProjects->setHeaderItem(__qtreewidgetitem1);
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

        bSearch = new QPushButton(proj);
        bSearch->setObjectName(QString::fromUtf8("bSearch"));

        verticalLayout_2->addWidget(bSearch);

        tGlobals = new QTreeWidget(proj);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem();
        __qtreewidgetitem2->setTextAlignment(5, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem2->setTextAlignment(4, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem2->setTextAlignment(3, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem2->setTextAlignment(2, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem2->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem2->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tGlobals->setHeaderItem(__qtreewidgetitem2);
        tGlobals->setObjectName(QString::fromUtf8("tGlobals"));
#ifndef QT_NO_WHATSTHIS
        tGlobals->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
        tGlobals->setAlternatingRowColors(true);
        tGlobals->setWordWrap(true);
        tGlobals->setExpandsOnDoubleClick(true);
        tGlobals->header()->setStretchLastSection(false);

        verticalLayout_2->addWidget(tGlobals);

        adminPanel = new QWidget(proj);
        adminPanel->setObjectName(QString::fromUtf8("adminPanel"));
        horizontalLayout_8 = new QHBoxLayout(adminPanel);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        bAddProject = new QPushButton(adminPanel);
        bAddProject->setObjectName(QString::fromUtf8("bAddProject"));

        horizontalLayout_8->addWidget(bAddProject);

        bAddUser = new QPushButton(adminPanel);
        bAddUser->setObjectName(QString::fromUtf8("bAddUser"));

        horizontalLayout_8->addWidget(bAddUser);


        verticalLayout_2->addWidget(adminPanel);

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
        lName->setText(QApplication::translate("Home", "Home", 0, QApplication::UnicodeUTF8));
        lDispID->setText(QApplication::translate("Home", "ID Number:", 0, QApplication::UnicodeUTF8));
        lID->setText(QApplication::translate("Home", "421421", 0, QApplication::UnicodeUTF8));
        lIsAdmin->setText(QApplication::translate("Home", "Admin", 0, QApplication::UnicodeUTF8));
        bYourProfile->setText(QApplication::translate("Home", "Your Profile", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = tUserTaskList->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("Home", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(4, QApplication::translate("Home", "Priority", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("Home", "Status", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("Home", "Task Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("Home", "Project Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("Home", "Task ID", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = lNotificationList->isSortingEnabled();
        lNotificationList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = lNotificationList->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Home", "NOTIFICATIONS", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = lNotificationList->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Home", "New Item", 0, QApplication::UnicodeUTF8));
        lNotificationList->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Home", "Tasks", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = tMyProjects->headerItem();
        ___qtreewidgetitem1->setText(6, QApplication::translate("Home", "Active", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(5, QApplication::translate("Home", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(4, QApplication::translate("Home", "Progress", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(3, QApplication::translate("Home", "My Role", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(2, QApplication::translate("Home", "Manager", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(1, QApplication::translate("Home", "Project Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("Home", "ID", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Home", "My Projects", 0, QApplication::UnicodeUTF8));
        bProjects->setText(QApplication::translate("Home", "Projects", 0, QApplication::UnicodeUTF8));
        bUsers->setText(QApplication::translate("Home", "Users", 0, QApplication::UnicodeUTF8));
        bSearch->setText(QApplication::translate("Home", "Search", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = tGlobals->headerItem();
        ___qtreewidgetitem2->setText(5, QApplication::translate("Home", "Is Active", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(4, QApplication::translate("Home", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(3, QApplication::translate("Home", "Progress", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(2, QApplication::translate("Home", "Manager", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(1, QApplication::translate("Home", "Project Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(0, QApplication::translate("Home", "ID", 0, QApplication::UnicodeUTF8));
        bAddProject->setText(QApplication::translate("Home", "Add Project", 0, QApplication::UnicodeUTF8));
        bAddUser->setText(QApplication::translate("Home", "Add User", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(proj), QApplication::translate("Home", "Globals", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
