/********************************************************************************
** Form generated from reading UI file 'Task.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_H
#define UI_TASK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Task
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lPriority;
    QLabel *lName;
    QLabel *lID;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lDescription;
    QLabel *lAssigned;
    QLabel *lStatus;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lDep;
    QTreeWidget *tDep;
    QVBoxLayout *verticalLayout_3;
    QLabel *lParent;
    QTreeWidget *tParent;
    QListWidget *listComments;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *bEditTask;
    QPushButton *bTeamMembers;
    QPushButton *bStatusChange;

    void setupUi(QWidget *Task)
    {
        if (Task->objectName().isEmpty())
            Task->setObjectName(QString::fromUtf8("Task"));
        Task->resize(891, 523);
        verticalLayout = new QVBoxLayout(Task);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lPriority = new QLabel(Task);
        lPriority->setObjectName(QString::fromUtf8("lPriority"));

        horizontalLayout->addWidget(lPriority);

        lName = new QLabel(Task);
        lName->setObjectName(QString::fromUtf8("lName"));
        QFont font;
        font.setPointSize(24);
        lName->setFont(font);
        lName->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lName);

        lID = new QLabel(Task);
        lID->setObjectName(QString::fromUtf8("lID"));
        lID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lID);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lDescription = new QLabel(Task);
        lDescription->setObjectName(QString::fromUtf8("lDescription"));

        horizontalLayout_3->addWidget(lDescription);

        lAssigned = new QLabel(Task);
        lAssigned->setObjectName(QString::fromUtf8("lAssigned"));
        lAssigned->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lAssigned->setWordWrap(true);

        horizontalLayout_3->addWidget(lAssigned);


        verticalLayout->addLayout(horizontalLayout_3);

        lStatus = new QLabel(Task);
        lStatus->setObjectName(QString::fromUtf8("lStatus"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        lStatus->setFont(font1);
        lStatus->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lStatus);

        progressBar = new QProgressBar(Task);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);
        progressBar->setTextVisible(true);

        verticalLayout->addWidget(progressBar);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lDep = new QLabel(Task);
        lDep->setObjectName(QString::fromUtf8("lDep"));
        lDep->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lDep);

        tDep = new QTreeWidget(Task);
        tDep->setObjectName(QString::fromUtf8("tDep"));

        verticalLayout_2->addWidget(tDep);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lParent = new QLabel(Task);
        lParent->setObjectName(QString::fromUtf8("lParent"));
        lParent->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lParent);

        tParent = new QTreeWidget(Task);
        tParent->setObjectName(QString::fromUtf8("tParent"));

        verticalLayout_3->addWidget(tParent);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);

        listComments = new QListWidget(Task);
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listComments);
        __qlistwidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem->setFont(font2);
        listComments->setObjectName(QString::fromUtf8("listComments"));

        verticalLayout->addWidget(listComments);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        bEditTask = new QPushButton(Task);
        bEditTask->setObjectName(QString::fromUtf8("bEditTask"));

        horizontalLayout_4->addWidget(bEditTask);

        bTeamMembers = new QPushButton(Task);
        bTeamMembers->setObjectName(QString::fromUtf8("bTeamMembers"));

        horizontalLayout_4->addWidget(bTeamMembers);


        verticalLayout->addLayout(horizontalLayout_4);

        bStatusChange = new QPushButton(Task);
        bStatusChange->setObjectName(QString::fromUtf8("bStatusChange"));

        verticalLayout->addWidget(bStatusChange);


        retranslateUi(Task);

        QMetaObject::connectSlotsByName(Task);
    } // setupUi

    void retranslateUi(QWidget *Task)
    {
        Task->setWindowTitle(QApplication::translate("Task", "Task", 0, QApplication::UnicodeUTF8));
        lPriority->setText(QApplication::translate("Task", "Priority", 0, QApplication::UnicodeUTF8));
        lName->setText(QApplication::translate("Task", "Name", 0, QApplication::UnicodeUTF8));
        lID->setText(QApplication::translate("Task", "ID:", 0, QApplication::UnicodeUTF8));
        lDescription->setText(QApplication::translate("Task", "Description:", 0, QApplication::UnicodeUTF8));
        lAssigned->setText(QApplication::translate("Task", "Assigned to: \n"
"Jack Newman\n"
"David King", 0, QApplication::UnicodeUTF8));
        lStatus->setText(QApplication::translate("Task", "Status:", 0, QApplication::UnicodeUTF8));
        lDep->setText(QApplication::translate("Task", "Dependencies", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = tDep->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("Task", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("Task", "Status", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("Task", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("Task", "ID", 0, QApplication::UnicodeUTF8));
        lParent->setText(QApplication::translate("Task", "Parent Of:", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = tParent->headerItem();
        ___qtreewidgetitem1->setText(3, QApplication::translate("Task", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(2, QApplication::translate("Task", "Status", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(1, QApplication::translate("Task", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("Task", "ID", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listComments->isSortingEnabled();
        listComments->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listComments->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Task", "COMMENTS", 0, QApplication::UnicodeUTF8));
        listComments->setSortingEnabled(__sortingEnabled);

        bEditTask->setText(QApplication::translate("Task", "Edit Task", 0, QApplication::UnicodeUTF8));
        bTeamMembers->setText(QApplication::translate("Task", "Team Members", 0, QApplication::UnicodeUTF8));
        bStatusChange->setText(QApplication::translate("Task", "Complete Task", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Task: public Ui_Task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H
