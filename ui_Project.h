/********************************************************************************
** Form generated from reading UI file 'Project.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT_H
#define UI_PROJECT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Project
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lDispManager;
    QLabel *lManager;
    QLabel *lName;
    QLabel *lProjectID;
    QLabel *lProjDesc;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lDispC1;
    QLabel *lC1;
    QLabel *lDispC2;
    QLabel *lC2;
    QLabel *lDispFP;
    QLabel *lFP;
    QProgressBar *projProgress;
    QTreeWidget *tProjTaskList;
    QTreeWidget *tComments;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bAddComment;
    QPushButton *bTeamMembers;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *bAPN;
    QPushButton *bGantt;
    QPushButton *bPert;
    QWidget *wCanEdit;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *bAddTask;
    QPushButton *bEditProject;

    void setupUi(QWidget *Project)
    {
        if (Project->objectName().isEmpty())
            Project->setObjectName(QString::fromUtf8("Project"));
        Project->resize(814, 635);
        verticalLayout_2 = new QVBoxLayout(Project);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lDispManager = new QLabel(Project);
        lDispManager->setObjectName(QString::fromUtf8("lDispManager"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lDispManager->sizePolicy().hasHeightForWidth());
        lDispManager->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(lDispManager);

        lManager = new QLabel(Project);
        lManager->setObjectName(QString::fromUtf8("lManager"));

        horizontalLayout_4->addWidget(lManager);


        horizontalLayout->addLayout(horizontalLayout_4);

        lName = new QLabel(Project);
        lName->setObjectName(QString::fromUtf8("lName"));
        QFont font;
        font.setPointSize(32);
        font.setUnderline(true);
        lName->setFont(font);
        lName->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lName);

        lProjectID = new QLabel(Project);
        lProjectID->setObjectName(QString::fromUtf8("lProjectID"));
        lProjectID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lProjectID);


        verticalLayout->addLayout(horizontalLayout);

        lProjDesc = new QLabel(Project);
        lProjDesc->setObjectName(QString::fromUtf8("lProjDesc"));
        lProjDesc->setScaledContents(false);
        lProjDesc->setWordWrap(true);

        verticalLayout->addWidget(lProjDesc);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lDispC1 = new QLabel(Project);
        lDispC1->setObjectName(QString::fromUtf8("lDispC1"));
        sizePolicy.setHeightForWidth(lDispC1->sizePolicy().hasHeightForWidth());
        lDispC1->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lDispC1);

        lC1 = new QLabel(Project);
        lC1->setObjectName(QString::fromUtf8("lC1"));

        horizontalLayout_2->addWidget(lC1);

        lDispC2 = new QLabel(Project);
        lDispC2->setObjectName(QString::fromUtf8("lDispC2"));
        sizePolicy.setHeightForWidth(lDispC2->sizePolicy().hasHeightForWidth());
        lDispC2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lDispC2);

        lC2 = new QLabel(Project);
        lC2->setObjectName(QString::fromUtf8("lC2"));
        sizePolicy.setHeightForWidth(lC2->sizePolicy().hasHeightForWidth());
        lC2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lC2);

        lDispFP = new QLabel(Project);
        lDispFP->setObjectName(QString::fromUtf8("lDispFP"));
        lDispFP->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lDispFP);

        lFP = new QLabel(Project);
        lFP->setObjectName(QString::fromUtf8("lFP"));
        sizePolicy.setHeightForWidth(lFP->sizePolicy().hasHeightForWidth());
        lFP->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lFP);


        verticalLayout->addLayout(horizontalLayout_2);

        projProgress = new QProgressBar(Project);
        projProgress->setObjectName(QString::fromUtf8("projProgress"));
        projProgress->setValue(0);

        verticalLayout->addWidget(projProgress);

        tProjTaskList = new QTreeWidget(Project);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(4, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(3, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(2, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tProjTaskList->setHeaderItem(__qtreewidgetitem);
        tProjTaskList->setObjectName(QString::fromUtf8("tProjTaskList"));
        tProjTaskList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tProjTaskList->setAlternatingRowColors(true);
        tProjTaskList->setSelectionMode(QAbstractItemView::SingleSelection);
        tProjTaskList->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tProjTaskList);

        tComments = new QTreeWidget(Project);
        tComments->setObjectName(QString::fromUtf8("tComments"));

        verticalLayout->addWidget(tComments);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        bAddComment = new QPushButton(Project);
        bAddComment->setObjectName(QString::fromUtf8("bAddComment"));

        horizontalLayout_3->addWidget(bAddComment);

        bTeamMembers = new QPushButton(Project);
        bTeamMembers->setObjectName(QString::fromUtf8("bTeamMembers"));

        horizontalLayout_3->addWidget(bTeamMembers);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        bAPN = new QPushButton(Project);
        bAPN->setObjectName(QString::fromUtf8("bAPN"));

        horizontalLayout_5->addWidget(bAPN);

        bGantt = new QPushButton(Project);
        bGantt->setObjectName(QString::fromUtf8("bGantt"));

        horizontalLayout_5->addWidget(bGantt);

        bPert = new QPushButton(Project);
        bPert->setObjectName(QString::fromUtf8("bPert"));

        horizontalLayout_5->addWidget(bPert);


        verticalLayout_2->addLayout(horizontalLayout_5);

        wCanEdit = new QWidget(Project);
        wCanEdit->setObjectName(QString::fromUtf8("wCanEdit"));
        horizontalLayout_6 = new QHBoxLayout(wCanEdit);
#ifndef Q_OS_MAC
        horizontalLayout_6->setSpacing(6);
#endif
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        bAddTask = new QPushButton(wCanEdit);
        bAddTask->setObjectName(QString::fromUtf8("bAddTask"));

        horizontalLayout_6->addWidget(bAddTask);

        bEditProject = new QPushButton(wCanEdit);
        bEditProject->setObjectName(QString::fromUtf8("bEditProject"));

        horizontalLayout_6->addWidget(bEditProject);


        verticalLayout_2->addWidget(wCanEdit);


        retranslateUi(Project);

        QMetaObject::connectSlotsByName(Project);
    } // setupUi

    void retranslateUi(QWidget *Project)
    {
        Project->setWindowTitle(QApplication::translate("Project", "Project", 0, QApplication::UnicodeUTF8));
        lDispManager->setText(QApplication::translate("Project", "Manager: ", 0, QApplication::UnicodeUTF8));
        lManager->setText(QApplication::translate("Project", "TextLabel", 0, QApplication::UnicodeUTF8));
        lName->setText(QApplication::translate("Project", "Trees of Life", 0, QApplication::UnicodeUTF8));
        lProjectID->setText(QApplication::translate("Project", "ID", 0, QApplication::UnicodeUTF8));
        lProjDesc->setText(QApplication::translate("Project", "The trees of life project shows the assimilation of trees into the life of others.  After such the trees will then destroy those who it has assimilated with, to become the new trees", 0, QApplication::UnicodeUTF8));
        lDispC1->setText(QApplication::translate("Project", "Cocomo I:", 0, QApplication::UnicodeUTF8));
        lC1->setText(QApplication::translate("Project", "TextLabel", 0, QApplication::UnicodeUTF8));
        lDispC2->setText(QApplication::translate("Project", "Cocomo II:", 0, QApplication::UnicodeUTF8));
        lC2->setText(QApplication::translate("Project", "TextLabel", 0, QApplication::UnicodeUTF8));
        lDispFP->setText(QApplication::translate("Project", "Function Points:", 0, QApplication::UnicodeUTF8));
        lFP->setText(QApplication::translate("Project", "TextLabel", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = tProjTaskList->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("Project", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("Project", "Priority", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("Project", "Status", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("Project", "Task Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("Project", "Task ID", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = tComments->headerItem();
        ___qtreewidgetitem1->setText(2, QApplication::translate("Project", "Comment", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(1, QApplication::translate("Project", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("Project", "Date/Time", 0, QApplication::UnicodeUTF8));
        bAddComment->setText(QApplication::translate("Project", "Add Comment", 0, QApplication::UnicodeUTF8));
        bTeamMembers->setText(QApplication::translate("Project", "Team Members", 0, QApplication::UnicodeUTF8));
        bAPN->setText(QApplication::translate("Project", "Activity Precedence Network", 0, QApplication::UnicodeUTF8));
        bGantt->setText(QApplication::translate("Project", "Gantt Chart", 0, QApplication::UnicodeUTF8));
        bPert->setText(QApplication::translate("Project", "Pert Analysis", 0, QApplication::UnicodeUTF8));
        bAddTask->setText(QApplication::translate("Project", "Add Task", 0, QApplication::UnicodeUTF8));
        bEditProject->setText(QApplication::translate("Project", "Edit Project", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Project: public Ui_Project {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_H
