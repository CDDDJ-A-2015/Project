/********************************************************************************
** Form generated from reading UI file 'UserProfile.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPROFILE_H
#define UI_USERPROFILE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserProfile
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lName;
    QPushButton *bEditUser;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lDispLocation;
    QLabel *lLocation;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lDispEmail;
    QLabel *lEmail;
    QHBoxLayout *horizontalLayout_6;
    QListWidget *listWidget;
    QTreeWidget *tPrevRoles;
    QHBoxLayout *horizontalLayout;
    QLabel *lDispID;
    QLabel *lID;

    void setupUi(QWidget *UserProfile)
    {
        if (UserProfile->objectName().isEmpty())
            UserProfile->setObjectName(QString::fromUtf8("UserProfile"));
        UserProfile->resize(652, 380);
        verticalLayout = new QVBoxLayout(UserProfile);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lName = new QLabel(UserProfile);
        lName->setObjectName(QString::fromUtf8("lName"));
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        lName->setFont(font);

        horizontalLayout_3->addWidget(lName);

        bEditUser = new QPushButton(UserProfile);
        bEditUser->setObjectName(QString::fromUtf8("bEditUser"));

        horizontalLayout_3->addWidget(bEditUser);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lDispLocation = new QLabel(UserProfile);
        lDispLocation->setObjectName(QString::fromUtf8("lDispLocation"));
        lDispLocation->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_4->addWidget(lDispLocation);

        lLocation = new QLabel(UserProfile);
        lLocation->setObjectName(QString::fromUtf8("lLocation"));

        horizontalLayout_4->addWidget(lLocation);


        horizontalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lDispEmail = new QLabel(UserProfile);
        lDispEmail->setObjectName(QString::fromUtf8("lDispEmail"));
        lDispEmail->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_5->addWidget(lDispEmail);

        lEmail = new QLabel(UserProfile);
        lEmail->setObjectName(QString::fromUtf8("lEmail"));

        horizontalLayout_5->addWidget(lEmail);


        horizontalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        listWidget = new QListWidget(UserProfile);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout_6->addWidget(listWidget);

        tPrevRoles = new QTreeWidget(UserProfile);
        tPrevRoles->setObjectName(QString::fromUtf8("tPrevRoles"));

        horizontalLayout_6->addWidget(tPrevRoles);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lDispID = new QLabel(UserProfile);
        lDispID->setObjectName(QString::fromUtf8("lDispID"));
        lDispID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lDispID);

        lID = new QLabel(UserProfile);
        lID->setObjectName(QString::fromUtf8("lID"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lID->sizePolicy().hasHeightForWidth());
        lID->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lID);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UserProfile);

        QMetaObject::connectSlotsByName(UserProfile);
    } // setupUi

    void retranslateUi(QWidget *UserProfile)
    {
        UserProfile->setWindowTitle(QApplication::translate("UserProfile", "UserProfile", 0, QApplication::UnicodeUTF8));
        lName->setText(QApplication::translate("UserProfile", "Name", 0, QApplication::UnicodeUTF8));
        bEditUser->setText(QApplication::translate("UserProfile", "Edit User", 0, QApplication::UnicodeUTF8));
        lDispLocation->setText(QApplication::translate("UserProfile", "Location: ", 0, QApplication::UnicodeUTF8));
        lLocation->setText(QApplication::translate("UserProfile", "Sydney", 0, QApplication::UnicodeUTF8));
        lDispEmail->setText(QApplication::translate("UserProfile", "Email:", 0, QApplication::UnicodeUTF8));
        lEmail->setText(QApplication::translate("UserProfile", "jack@oasdasl", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("UserProfile", "Expertise:", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

        QTreeWidgetItem *___qtreewidgetitem = tPrevRoles->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("UserProfile", "Completed", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("UserProfile", "Role", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("UserProfile", "Project", 0, QApplication::UnicodeUTF8));
        lDispID->setText(QApplication::translate("UserProfile", "ID Number:", 0, QApplication::UnicodeUTF8));
        lID->setText(QApplication::translate("UserProfile", "2312213", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserProfile: public Ui_UserProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPROFILE_H
