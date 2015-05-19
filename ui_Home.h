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
    QLabel *uName;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lDispID;
    QLabel *lID;
    QLabel *label_2;
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
    QPushButton *pushButton_2;

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
        uName = new QLabel(tab);
        uName->setObjectName(QString::fromUtf8("uName"));
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        uName->setFont(font);

        horizontalLayout_6->addWidget(uName);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lDispID = new QLabel(tab);
        lDispID->setObjectName(QString::fromUtf8("lDispID"));

        horizontalLayout_5->addWidget(lDispID);

        lID = new QLabel(tab);
        lID->setObjectName(QString::fromUtf8("lID"));

        horizontalLayout_5->addWidget(lID);


        verticalLayout_4->addLayout(horizontalLayout_5);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);


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
        new QTreeWidgetItem(tUserTaskList);
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
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lNotificationList->sizePolicy().hasHeightForWidth());
        lNotificationList->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(lNotificationList);


        verticalLayout_3->addLayout(horizontalLayout_7);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_2 = new QHBoxLayout(tab_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tMyProjects = new QTreeWidget(tab_2);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setTextAlignment(5, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem1->setTextAlignment(4, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem1->setTextAlignment(3, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem1->setTextAlignment(2, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem1->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem1->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tMyProjects->setHeaderItem(__qtreewidgetitem1);
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

        adminPanel = new QWidget(proj);
        adminPanel->setObjectName(QString::fromUtf8("adminPanel"));
        horizontalLayout_8 = new QHBoxLayout(adminPanel);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        bAddProject = new QPushButton(adminPanel);
        bAddProject->setObjectName(QString::fromUtf8("bAddProject"));

        horizontalLayout_8->addWidget(bAddProject);

        pushButton_2 = new QPushButton(adminPanel);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_8->addWidget(pushButton_2);


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
        uName->setText(QApplication::translate("Home", "Home", 0, QApplication::UnicodeUTF8));
        lDispID->setText(QApplication::translate("Home", "ID Number:", 0, QApplication::UnicodeUTF8));
        lID->setText(QApplication::translate("Home", "421421", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Home", "Stuff", 0, QApplication::UnicodeUTF8));
        bYourProfile->setText(QApplication::translate("Home", "Your Profile", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = tUserTaskList->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("Home", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(4, QApplication::translate("Home", "Priority", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("Home", "Status", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("Home", "Task Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("Home", "Project Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("Home", "Task ID", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = tUserTaskList->isSortingEnabled();
        tUserTaskList->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = tUserTaskList->topLevelItem(0);
        ___qtreewidgetitem1->setText(5, QApplication::translate("Home", "a", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(4, QApplication::translate("Home", "a", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(3, QApplication::translate("Home", "a", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(2, QApplication::translate("Home", "a", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(1, QApplication::translate("Home", "James", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("Home", "1231", 0, QApplication::UnicodeUTF8));
        tUserTaskList->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = lNotificationList->isSortingEnabled();
        lNotificationList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = lNotificationList->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Home", "NOTIFICATIONS", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = lNotificationList->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Home", "New Item", 0, QApplication::UnicodeUTF8));
        lNotificationList->setSortingEnabled(__sortingEnabled1);

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Home", "Tasks", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = tMyProjects->headerItem();
        ___qtreewidgetitem2->setText(5, QApplication::translate("Home", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(4, QApplication::translate("Home", "Progress", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(3, QApplication::translate("Home", "My Role", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(2, QApplication::translate("Home", "Manager", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(1, QApplication::translate("Home", "Project Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(0, QApplication::translate("Home", "ID", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled2 = tMyProjects->isSortingEnabled();
        tMyProjects->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem3 = tMyProjects->topLevelItem(0);
        ___qtreewidgetitem3->setText(1, QApplication::translate("Home", "test", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem3->setText(0, QApplication::translate("Home", "2414", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = tMyProjects->topLevelItem(1);
        ___qtreewidgetitem4->setText(1, QApplication::translate("Home", "New Item", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem4->setText(0, QApplication::translate("Home", "3525", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = tMyProjects->topLevelItem(2);
        ___qtreewidgetitem5->setText(1, QApplication::translate("Home", "21", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem5->setText(0, QApplication::translate("Home", "2134", 0, QApplication::UnicodeUTF8));
        tMyProjects->setSortingEnabled(__sortingEnabled2);

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Home", "My Projects", 0, QApplication::UnicodeUTF8));
        bProjects->setText(QApplication::translate("Home", "Projects", 0, QApplication::UnicodeUTF8));
        bUsers->setText(QApplication::translate("Home", "Users", 0, QApplication::UnicodeUTF8));
        bSearch->setText(QApplication::translate("Home", "Search", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = tGlobals->headerItem();
        ___qtreewidgetitem6->setText(5, QApplication::translate("Home", "Is Active", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem6->setText(4, QApplication::translate("Home", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem6->setText(3, QApplication::translate("Home", "Progress", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem6->setText(2, QApplication::translate("Home", "Manager", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem6->setText(1, QApplication::translate("Home", "Project Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem6->setText(0, QApplication::translate("Home", "ID", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled3 = tGlobals->isSortingEnabled();
        tGlobals->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem7 = tGlobals->topLevelItem(0);
        ___qtreewidgetitem7->setText(1, QApplication::translate("Home", "test", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem7->setText(0, QApplication::translate("Home", "2414", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem8 = tGlobals->topLevelItem(1);
        ___qtreewidgetitem8->setText(1, QApplication::translate("Home", "21", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem8->setText(0, QApplication::translate("Home", "2134", 0, QApplication::UnicodeUTF8));
        tGlobals->setSortingEnabled(__sortingEnabled3);

        bAddProject->setText(QApplication::translate("Home", "Add Project", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Home", "Add User", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(proj), QApplication::translate("Home", "Globals", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
