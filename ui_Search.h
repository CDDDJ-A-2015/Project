/********************************************************************************
** Form generated from reading UI file 'Search.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lWhatSearch;
    QHBoxLayout *lHButt;
    QPushButton *bSProjects;
    QPushButton *bSUsers;
    QHBoxLayout *lHID;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QHBoxLayout *lHName;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *wProjects;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *lHManager;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *wUsers;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *lHRole;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *lhLocation;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QHBoxLayout *lHExpertise;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *bSearch;

    void setupUi(QWidget *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QString::fromUtf8("Search"));
        Search->resize(400, 343);
        verticalLayout = new QVBoxLayout(Search);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lWhatSearch = new QLabel(Search);
        lWhatSearch->setObjectName(QString::fromUtf8("lWhatSearch"));
        lWhatSearch->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(20);
        lWhatSearch->setFont(font);
        lWhatSearch->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lWhatSearch);

        lHButt = new QHBoxLayout();
        lHButt->setObjectName(QString::fromUtf8("lHButt"));
        bSProjects = new QPushButton(Search);
        bSProjects->setObjectName(QString::fromUtf8("bSProjects"));
        bSProjects->setMaximumSize(QSize(16777215, 30));

        lHButt->addWidget(bSProjects);

        bSUsers = new QPushButton(Search);
        bSUsers->setObjectName(QString::fromUtf8("bSUsers"));
        bSUsers->setMaximumSize(QSize(16777215, 30));

        lHButt->addWidget(bSUsers);


        verticalLayout->addLayout(lHButt);

        lHID = new QHBoxLayout();
        lHID->setObjectName(QString::fromUtf8("lHID"));
        label_6 = new QLabel(Search);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(80, 0));
        label_6->setMaximumSize(QSize(16777215, 30));

        lHID->addWidget(label_6);

        lineEdit_6 = new QLineEdit(Search);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setMaximumSize(QSize(16777215, 30));

        lHID->addWidget(lineEdit_6);


        verticalLayout->addLayout(lHID);

        lHName = new QHBoxLayout();
        lHName->setObjectName(QString::fromUtf8("lHName"));
        label = new QLabel(Search);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 0));
        label->setMaximumSize(QSize(16777215, 30));

        lHName->addWidget(label);

        lineEdit = new QLineEdit(Search);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(16777215, 30));

        lHName->addWidget(lineEdit);


        verticalLayout->addLayout(lHName);

        wProjects = new QWidget(Search);
        wProjects->setObjectName(QString::fromUtf8("wProjects"));
        wProjects->setMaximumSize(QSize(16777215, 30));
        verticalLayout_3 = new QVBoxLayout(wProjects);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lHManager = new QHBoxLayout();
        lHManager->setObjectName(QString::fromUtf8("lHManager"));
        label_2 = new QLabel(wProjects);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 0));

        lHManager->addWidget(label_2);

        lineEdit_2 = new QLineEdit(wProjects);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        lHManager->addWidget(lineEdit_2);


        verticalLayout_3->addLayout(lHManager);


        verticalLayout->addWidget(wProjects);

        wUsers = new QWidget(Search);
        wUsers->setObjectName(QString::fromUtf8("wUsers"));
        wUsers->setMaximumSize(QSize(16777215, 90));
        verticalLayout_2 = new QVBoxLayout(wUsers);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lHRole = new QHBoxLayout();
        lHRole->setObjectName(QString::fromUtf8("lHRole"));
        label_4 = new QLabel(wUsers);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(80, 0));

        lHRole->addWidget(label_4);

        lineEdit_4 = new QLineEdit(wUsers);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        lHRole->addWidget(lineEdit_4);


        verticalLayout_2->addLayout(lHRole);

        lhLocation = new QHBoxLayout();
        lhLocation->setObjectName(QString::fromUtf8("lhLocation"));
        label_5 = new QLabel(wUsers);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(80, 0));

        lhLocation->addWidget(label_5);

        lineEdit_5 = new QLineEdit(wUsers);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        lhLocation->addWidget(lineEdit_5);


        verticalLayout_2->addLayout(lhLocation);

        lHExpertise = new QHBoxLayout();
        lHExpertise->setObjectName(QString::fromUtf8("lHExpertise"));
        label_3 = new QLabel(wUsers);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(80, 0));

        lHExpertise->addWidget(label_3);

        lineEdit_3 = new QLineEdit(wUsers);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        lHExpertise->addWidget(lineEdit_3);


        verticalLayout_2->addLayout(lHExpertise);


        verticalLayout->addWidget(wUsers);

        bSearch = new QPushButton(Search);
        bSearch->setObjectName(QString::fromUtf8("bSearch"));
        bSearch->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(bSearch);


        retranslateUi(Search);
        QObject::connect(bSProjects, SIGNAL(clicked()), wUsers, SLOT(hide()));
        QObject::connect(bSProjects, SIGNAL(clicked()), wProjects, SLOT(show()));
        QObject::connect(bSUsers, SIGNAL(clicked()), wProjects, SLOT(hide()));
        QObject::connect(bSUsers, SIGNAL(clicked()), wUsers, SLOT(show()));

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QWidget *Search)
    {
        Search->setWindowTitle(QApplication::translate("Search", "Search", 0, QApplication::UnicodeUTF8));
        lWhatSearch->setText(QApplication::translate("Search", "Searching Projects", 0, QApplication::UnicodeUTF8));
        bSProjects->setText(QApplication::translate("Search", "Search Projects", 0, QApplication::UnicodeUTF8));
        bSUsers->setText(QApplication::translate("Search", "Search Users", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Search", "ID Number:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Search", "Name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Search", "Manager:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Search", "Role:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Search", "Location:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Search", "Expertise:", 0, QApplication::UnicodeUTF8));
        bSearch->setText(QApplication::translate("Search", "Search", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
