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
#include <QtGui/QListWidget>
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
    QLabel *projName;
    QLabel *lManager;
    QPushButton *bTeamMembers;
    QLabel *projDesc;
    QProgressBar *projProgress;
    QTreeWidget *tProjTaskList;
    QListWidget *listComments;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bViewGraphics;
    QPushButton *bAddComment;
    QPushButton *bEditProject;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *lProjectID;

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
        projName = new QLabel(Project);
        projName->setObjectName(QString::fromUtf8("projName"));
        QFont font;
        font.setPointSize(32);
        font.setUnderline(true);
        projName->setFont(font);

        horizontalLayout->addWidget(projName);

        lManager = new QLabel(Project);
        lManager->setObjectName(QString::fromUtf8("lManager"));

        horizontalLayout->addWidget(lManager);

        bTeamMembers = new QPushButton(Project);
        bTeamMembers->setObjectName(QString::fromUtf8("bTeamMembers"));

        horizontalLayout->addWidget(bTeamMembers);


        verticalLayout->addLayout(horizontalLayout);

        projDesc = new QLabel(Project);
        projDesc->setObjectName(QString::fromUtf8("projDesc"));
        projDesc->setScaledContents(false);
        projDesc->setWordWrap(true);

        verticalLayout->addWidget(projDesc);

        projProgress = new QProgressBar(Project);
        projProgress->setObjectName(QString::fromUtf8("projProgress"));
        projProgress->setValue(0);

        verticalLayout->addWidget(projProgress);

        tProjTaskList = new QTreeWidget(Project);
        new QTreeWidgetItem(tProjTaskList);
        tProjTaskList->setObjectName(QString::fromUtf8("tProjTaskList"));
        tProjTaskList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tProjTaskList->setAlternatingRowColors(true);
        tProjTaskList->setSelectionMode(QAbstractItemView::SingleSelection);
        tProjTaskList->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tProjTaskList);

        listComments = new QListWidget(Project);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listComments);
        __qlistwidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem->setFont(font1);
        listComments->setObjectName(QString::fromUtf8("listComments"));

        verticalLayout->addWidget(listComments);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        bViewGraphics = new QPushButton(Project);
        bViewGraphics->setObjectName(QString::fromUtf8("bViewGraphics"));

        horizontalLayout_3->addWidget(bViewGraphics);

        bAddComment = new QPushButton(Project);
        bAddComment->setObjectName(QString::fromUtf8("bAddComment"));

        horizontalLayout_3->addWidget(bAddComment);

        bEditProject = new QPushButton(Project);
        bEditProject->setObjectName(QString::fromUtf8("bEditProject"));

        horizontalLayout_3->addWidget(bEditProject);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(Project);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lProjectID = new QLabel(Project);
        lProjectID->setObjectName(QString::fromUtf8("lProjectID"));

        horizontalLayout_2->addWidget(lProjectID);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Project);

        QMetaObject::connectSlotsByName(Project);
    } // setupUi

    void retranslateUi(QWidget *Project)
    {
        Project->setWindowTitle(QApplication::translate("Project", "Project", 0, QApplication::UnicodeUTF8));
        projName->setText(QApplication::translate("Project", "Trees of Life", 0, QApplication::UnicodeUTF8));
        lManager->setText(QApplication::translate("Project", "MANAGER:", 0, QApplication::UnicodeUTF8));
        bTeamMembers->setText(QApplication::translate("Project", "Team Members", 0, QApplication::UnicodeUTF8));
        projDesc->setText(QApplication::translate("Project", "The trees of life project shows the assimilation of trees into the life of others.  After such the trees will then destroy those who it has assimilated with, to become the new trees", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = tProjTaskList->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("Project", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("Project", "Status", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("Project", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("Project", "ID", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = tProjTaskList->isSortingEnabled();
        tProjTaskList->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = tProjTaskList->topLevelItem(0);
        ___qtreewidgetitem1->setText(3, QApplication::translate("Project", "21 04 2012", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(2, QApplication::translate("Project", "In Progress", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(1, QApplication::translate("Project", "asdsa", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("Project", "21312", 0, QApplication::UnicodeUTF8));
        tProjTaskList->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = listComments->isSortingEnabled();
        listComments->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listComments->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Project", "COMMENTS", 0, QApplication::UnicodeUTF8));
        listComments->setSortingEnabled(__sortingEnabled1);

        bViewGraphics->setText(QApplication::translate("Project", "View Project Graphically", 0, QApplication::UnicodeUTF8));
        bAddComment->setText(QApplication::translate("Project", "Add Comment", 0, QApplication::UnicodeUTF8));
        bEditProject->setText(QApplication::translate("Project", "Edit Project", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Project", "TextLabel", 0, QApplication::UnicodeUTF8));
        lProjectID->setText(QApplication::translate("Project", "ID", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Project: public Ui_Project {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_H
