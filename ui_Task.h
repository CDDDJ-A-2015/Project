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
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
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
    QHBoxLayout *horizontalLayout_8;
    QLabel *lDispPriority;
    QLabel *lPriority;
    QLabel *lName;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lDispTaskID;
    QLabel *lID;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lDispProjID;
    QLabel *lPID;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lDescription;
    QLabel *lAssigned;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lDispCreated;
    QLabel *lCreated;
    QHBoxLayout *horizontalLayout_13;
    QLabel *lDispLength;
    QLabel *lLength;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lDispDue;
    QLabel *lDue;
    QFrame *fStatus;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lDispStatus;
    QLabel *lStatus;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *lParent;
    QTreeWidget *tParent;
    QVBoxLayout *verticalLayout_2;
    QLabel *lDep;
    QTreeWidget *tDep;
    QTreeWidget *tComments;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *bAddComment;
    QPushButton *bTeamMembers;
    QWidget *wCanEdit;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *bEditTask;
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
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lDispPriority = new QLabel(Task);
        lDispPriority->setObjectName(QString::fromUtf8("lDispPriority"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lDispPriority->sizePolicy().hasHeightForWidth());
        lDispPriority->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(lDispPriority);

        lPriority = new QLabel(Task);
        lPriority->setObjectName(QString::fromUtf8("lPriority"));

        horizontalLayout_8->addWidget(lPriority);


        horizontalLayout->addLayout(horizontalLayout_8);

        lName = new QLabel(Task);
        lName->setObjectName(QString::fromUtf8("lName"));
        QFont font;
        font.setPointSize(24);
        lName->setFont(font);
        lName->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lName);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lDispTaskID = new QLabel(Task);
        lDispTaskID->setObjectName(QString::fromUtf8("lDispTaskID"));
        lDispTaskID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(lDispTaskID);

        lID = new QLabel(Task);
        lID->setObjectName(QString::fromUtf8("lID"));
        sizePolicy.setHeightForWidth(lID->sizePolicy().hasHeightForWidth());
        lID->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(lID);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lDispProjID = new QLabel(Task);
        lDispProjID->setObjectName(QString::fromUtf8("lDispProjID"));
        lDispProjID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(lDispProjID);

        lPID = new QLabel(Task);
        lPID->setObjectName(QString::fromUtf8("lPID"));
        sizePolicy.setHeightForWidth(lPID->sizePolicy().hasHeightForWidth());
        lPID->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(lPID);


        verticalLayout_4->addLayout(horizontalLayout_7);


        horizontalLayout->addLayout(verticalLayout_4);


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

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        lDispCreated = new QLabel(Task);
        lDispCreated->setObjectName(QString::fromUtf8("lDispCreated"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lDispCreated->sizePolicy().hasHeightForWidth());
        lDispCreated->setSizePolicy(sizePolicy1);
        lDispCreated->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(lDispCreated);

        lCreated = new QLabel(Task);
        lCreated->setObjectName(QString::fromUtf8("lCreated"));

        horizontalLayout_11->addWidget(lCreated);


        horizontalLayout_9->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        lDispLength = new QLabel(Task);
        lDispLength->setObjectName(QString::fromUtf8("lDispLength"));
        lDispLength->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(lDispLength);

        lLength = new QLabel(Task);
        lLength->setObjectName(QString::fromUtf8("lLength"));

        horizontalLayout_13->addWidget(lLength);


        horizontalLayout_9->addLayout(horizontalLayout_13);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        lDispDue = new QLabel(Task);
        lDispDue->setObjectName(QString::fromUtf8("lDispDue"));
        lDispDue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(lDispDue);

        lDue = new QLabel(Task);
        lDue->setObjectName(QString::fromUtf8("lDue"));

        horizontalLayout_10->addWidget(lDue);


        horizontalLayout_9->addLayout(horizontalLayout_10);


        verticalLayout->addLayout(horizontalLayout_9);

        fStatus = new QFrame(Task);
        fStatus->setObjectName(QString::fromUtf8("fStatus"));
        fStatus->setFrameShape(QFrame::StyledPanel);
        fStatus->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(fStatus);
#ifndef Q_OS_MAC
        horizontalLayout_5->setSpacing(6);
#endif
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lDispStatus = new QLabel(fStatus);
        lDispStatus->setObjectName(QString::fromUtf8("lDispStatus"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        lDispStatus->setFont(font1);
        lDispStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lDispStatus);

        lStatus = new QLabel(fStatus);
        lStatus->setObjectName(QString::fromUtf8("lStatus"));
        QFont font2;
        font2.setPointSize(20);
        lStatus->setFont(font2);

        horizontalLayout_5->addWidget(lStatus);


        verticalLayout->addWidget(fStatus);

        progressBar = new QProgressBar(Task);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);
        progressBar->setTextVisible(true);

        verticalLayout->addWidget(progressBar);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
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


        verticalLayout->addLayout(horizontalLayout_2);

        tComments = new QTreeWidget(Task);
        tComments->setObjectName(QString::fromUtf8("tComments"));

        verticalLayout->addWidget(tComments);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        bAddComment = new QPushButton(Task);
        bAddComment->setObjectName(QString::fromUtf8("bAddComment"));

        horizontalLayout_4->addWidget(bAddComment);

        bTeamMembers = new QPushButton(Task);
        bTeamMembers->setObjectName(QString::fromUtf8("bTeamMembers"));

        horizontalLayout_4->addWidget(bTeamMembers);


        verticalLayout->addLayout(horizontalLayout_4);

        wCanEdit = new QWidget(Task);
        wCanEdit->setObjectName(QString::fromUtf8("wCanEdit"));
        horizontalLayout_12 = new QHBoxLayout(wCanEdit);
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        bEditTask = new QPushButton(wCanEdit);
        bEditTask->setObjectName(QString::fromUtf8("bEditTask"));

        horizontalLayout_12->addWidget(bEditTask);

        bStatusChange = new QPushButton(wCanEdit);
        bStatusChange->setObjectName(QString::fromUtf8("bStatusChange"));

        horizontalLayout_12->addWidget(bStatusChange);


        verticalLayout->addWidget(wCanEdit);


        retranslateUi(Task);

        QMetaObject::connectSlotsByName(Task);
    } // setupUi

    void retranslateUi(QWidget *Task)
    {
        Task->setWindowTitle(QApplication::translate("Task", "Task", 0, QApplication::UnicodeUTF8));
        lDispPriority->setText(QApplication::translate("Task", "Priority:", 0, QApplication::UnicodeUTF8));
        lPriority->setText(QApplication::translate("Task", "Trivial", 0, QApplication::UnicodeUTF8));
        lName->setText(QApplication::translate("Task", "Name", 0, QApplication::UnicodeUTF8));
        lDispTaskID->setText(QApplication::translate("Task", "Task ID:", 0, QApplication::UnicodeUTF8));
        lID->setText(QApplication::translate("Task", "24324", 0, QApplication::UnicodeUTF8));
        lDispProjID->setText(QApplication::translate("Task", "Project ID:", 0, QApplication::UnicodeUTF8));
        lPID->setText(QApplication::translate("Task", "2413", 0, QApplication::UnicodeUTF8));
        lDescription->setText(QApplication::translate("Task", "Description:", 0, QApplication::UnicodeUTF8));
        lAssigned->setText(QApplication::translate("Task", "Assigned to: \n"
"Jack Newman\n"
"David King", 0, QApplication::UnicodeUTF8));
        lDispCreated->setText(QApplication::translate("Task", "Date Created:", 0, QApplication::UnicodeUTF8));
        lCreated->setText(QApplication::translate("Task", "TextLabel", 0, QApplication::UnicodeUTF8));
        lDispLength->setText(QApplication::translate("Task", "Length:", 0, QApplication::UnicodeUTF8));
        lLength->setText(QApplication::translate("Task", "TextLabel", 0, QApplication::UnicodeUTF8));
        lDispDue->setText(QApplication::translate("Task", "Date Due:", 0, QApplication::UnicodeUTF8));
        lDue->setText(QApplication::translate("Task", "TextLabel", 0, QApplication::UnicodeUTF8));
        lDispStatus->setText(QApplication::translate("Task", "Status:", 0, QApplication::UnicodeUTF8));
        lStatus->setText(QApplication::translate("Task", "Pending", 0, QApplication::UnicodeUTF8));
        lParent->setText(QApplication::translate("Task", "Parent Of:", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = tParent->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("Task", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("Task", "Status", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("Task", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("Task", "ID", 0, QApplication::UnicodeUTF8));
        lDep->setText(QApplication::translate("Task", "Dependencies", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = tDep->headerItem();
        ___qtreewidgetitem1->setText(3, QApplication::translate("Task", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(2, QApplication::translate("Task", "Status", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(1, QApplication::translate("Task", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("Task", "ID", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = tComments->headerItem();
        ___qtreewidgetitem2->setText(2, QApplication::translate("Task", "Comment", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(1, QApplication::translate("Task", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(0, QApplication::translate("Task", "Date/Time", 0, QApplication::UnicodeUTF8));
        bAddComment->setText(QApplication::translate("Task", "Add Comment", 0, QApplication::UnicodeUTF8));
        bTeamMembers->setText(QApplication::translate("Task", "Team Members", 0, QApplication::UnicodeUTF8));
        bEditTask->setText(QApplication::translate("Task", "Edit Task", 0, QApplication::UnicodeUTF8));
        bStatusChange->setText(QApplication::translate("Task", "Complete Task", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Task: public Ui_Task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H
