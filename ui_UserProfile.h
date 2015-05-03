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
#include <QtGui/QFormLayout>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserProfile
{
public:
    QFormLayout *formLayout;
    QLabel *uName;
    QGraphicsView *pUser;
    QLabel *uDesc;
    QListWidget *listWidget;
    QTableWidget *tableWidget;
    QLabel *uLoc;
    QLabel *uEmail;
    QPushButton *bEditUser;

    void setupUi(QWidget *UserProfile)
    {
        if (UserProfile->objectName().isEmpty())
            UserProfile->setObjectName(QString::fromUtf8("UserProfile"));
        UserProfile->resize(731, 545);
        formLayout = new QFormLayout(UserProfile);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        uName = new QLabel(UserProfile);
        uName->setObjectName(QString::fromUtf8("uName"));
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        uName->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, uName);

        pUser = new QGraphicsView(UserProfile);
        pUser->setObjectName(QString::fromUtf8("pUser"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pUser);

        uDesc = new QLabel(UserProfile);
        uDesc->setObjectName(QString::fromUtf8("uDesc"));

        formLayout->setWidget(3, QFormLayout::FieldRole, uDesc);

        listWidget = new QListWidget(UserProfile);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        formLayout->setWidget(4, QFormLayout::LabelRole, listWidget);

        tableWidget = new QTableWidget(UserProfile);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        formLayout->setWidget(4, QFormLayout::FieldRole, tableWidget);

        uLoc = new QLabel(UserProfile);
        uLoc->setObjectName(QString::fromUtf8("uLoc"));

        formLayout->setWidget(2, QFormLayout::LabelRole, uLoc);

        uEmail = new QLabel(UserProfile);
        uEmail->setObjectName(QString::fromUtf8("uEmail"));

        formLayout->setWidget(2, QFormLayout::FieldRole, uEmail);

        bEditUser = new QPushButton(UserProfile);
        bEditUser->setObjectName(QString::fromUtf8("bEditUser"));

        formLayout->setWidget(0, QFormLayout::FieldRole, bEditUser);


        retranslateUi(UserProfile);

        QMetaObject::connectSlotsByName(UserProfile);
    } // setupUi

    void retranslateUi(QWidget *UserProfile)
    {
        UserProfile->setWindowTitle(QApplication::translate("UserProfile", "UserProfile", 0, QApplication::UnicodeUTF8));
        uName->setText(QApplication::translate("UserProfile", "TextLabel", 0, QApplication::UnicodeUTF8));
        uDesc->setText(QApplication::translate("UserProfile", "Description", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("UserProfile", "Expertise:", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UserProfile", "Project", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("UserProfile", "Role", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("UserProfile", "Completed", 0, QApplication::UnicodeUTF8));
        uLoc->setText(QApplication::translate("UserProfile", "Location: ", 0, QApplication::UnicodeUTF8));
        uEmail->setText(QApplication::translate("UserProfile", "Email:", 0, QApplication::UnicodeUTF8));
        bEditUser->setText(QApplication::translate("UserProfile", "Edit User", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserProfile: public Ui_UserProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPROFILE_H
