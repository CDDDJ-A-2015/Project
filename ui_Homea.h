/********************************************************************************
** Form generated from reading UI file 'Homea.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEA_H
#define UI_HOMEA_H

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
    QTableWidget *userTaskList;
    QLabel *uName;
    QListWidget *notificationList;
    QWidget *proj;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *bProjects;
    QPushButton *bUsers;
    QTreeWidget *treeWidget;

    void setupUi(QMainWindow *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QString::fromUtf8("Home"));
        Home->setEnabled(true);
        Home->resize(842, 565);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Home->sizePolicy().hasHeightForWidth());
        Home->setSizePolicy(sizePolicy);
        Home->setMinimumSize(QSize(0, 0));
        Home->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(Home);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setAutoFillBackground(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        userTaskList = new QTableWidget(tab);
        if (userTaskList->columnCount() < 4)
            userTaskList->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        userTaskList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        userTaskList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        userTaskList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        userTaskList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        userTaskList->setObjectName(QString::fromUtf8("userTaskList"));
        userTaskList->setWordWrap(true);

        gridLayout->addWidget(userTaskList, 1, 0, 1, 1);

        uName = new QLabel(tab);
        uName->setObjectName(QString::fromUtf8("uName"));
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        uName->setFont(font);

        gridLayout->addWidget(uName, 0, 0, 1, 1);

        notificationList = new QListWidget(tab);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(notificationList);
        __qlistwidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem->setFont(font1);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(notificationList);
        __qlistwidgetitem1->setBackground(brush1);
        __qlistwidgetitem1->setForeground(brush);
        notificationList->setObjectName(QString::fromUtf8("notificationList"));

        gridLayout->addWidget(notificationList, 1, 1, 1, 1);

        tabWidget->addTab(tab, QString());
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

        treeWidget = new QTreeWidget(proj);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setUniformRowHeights(false);
        treeWidget->setSortingEnabled(true);
        treeWidget->setWordWrap(true);
        treeWidget->setExpandsOnDoubleClick(true);
        treeWidget->header()->setVisible(false);
        treeWidget->header()->setDefaultSectionSize(150);
        treeWidget->header()->setMinimumSectionSize(50);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(true));
        treeWidget->header()->setStretchLastSection(false);

        verticalLayout_2->addWidget(treeWidget);

        tabWidget->addTab(proj, QString());

        verticalLayout->addWidget(tabWidget);

        Home->setCentralWidget(centralwidget);

        retranslateUi(Home);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QMainWindow *Home)
    {
        Home->setWindowTitle(QApplication::translate("Home", "Home", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = userTaskList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Home", "Task", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = userTaskList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Home", "Progress", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = userTaskList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Home", "Due Date", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = userTaskList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Home", "GoTo", 0, QApplication::UnicodeUTF8));
        uName->setText(QApplication::translate("Home", "TextLabel", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = notificationList->isSortingEnabled();
        notificationList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = notificationList->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Home", "NOTIFICATIONS", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = notificationList->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Home", "New Item", 0, QApplication::UnicodeUTF8));
        notificationList->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Home", "Tasks", 0, QApplication::UnicodeUTF8));
        bProjects->setText(QApplication::translate("Home", "Projects", 0, QApplication::UnicodeUTF8));
        bUsers->setText(QApplication::translate("Home", "Users", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("Home", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("Home", "Progress", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("Home", "Role", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("Home", "Manager", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("Home", "Project Name", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled1 = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(1, QApplication::translate("Home", "2414", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("Home", "test", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("Home", "New Item", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(1, QApplication::translate("Home", "2134", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem3->setText(0, QApplication::translate("Home", "21", 0, QApplication::UnicodeUTF8));
        treeWidget->setSortingEnabled(__sortingEnabled1);

        tabWidget->setTabText(tabWidget->indexOf(proj), QApplication::translate("Home", "Project", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEA_H
