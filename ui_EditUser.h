/********************************************************************************
** Form generated from reading UI file 'EditUser.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITUSER_H
#define UI_EDITUSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditUser
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *uName;
    QHBoxLayout *horizontalLayout;
    QLineEdit *eLocation;
    QLineEdit *eEmail;
    QListWidget *listExpertise;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bAddExp;
    QPushButton *bDelExp;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditUser)
    {
        if (EditUser->objectName().isEmpty())
            EditUser->setObjectName(QString::fromUtf8("EditUser"));
        EditUser->resize(642, 374);
        verticalLayout = new QVBoxLayout(EditUser);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        uName = new QLabel(EditUser);
        uName->setObjectName(QString::fromUtf8("uName"));
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        uName->setFont(font);

        verticalLayout->addWidget(uName);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        eLocation = new QLineEdit(EditUser);
        eLocation->setObjectName(QString::fromUtf8("eLocation"));

        horizontalLayout->addWidget(eLocation);

        eEmail = new QLineEdit(EditUser);
        eEmail->setObjectName(QString::fromUtf8("eEmail"));

        horizontalLayout->addWidget(eEmail);


        verticalLayout->addLayout(horizontalLayout);

        listExpertise = new QListWidget(EditUser);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listExpertise);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listExpertise);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        listExpertise->setObjectName(QString::fromUtf8("listExpertise"));
        listExpertise->setAlternatingRowColors(true);

        verticalLayout->addWidget(listExpertise);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        bAddExp = new QPushButton(EditUser);
        bAddExp->setObjectName(QString::fromUtf8("bAddExp"));

        horizontalLayout_2->addWidget(bAddExp);

        bDelExp = new QPushButton(EditUser);
        bDelExp->setObjectName(QString::fromUtf8("bDelExp"));

        horizontalLayout_2->addWidget(bDelExp);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(EditUser);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EditUser);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditUser, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditUser, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditUser);
    } // setupUi

    void retranslateUi(QDialog *EditUser)
    {
        EditUser->setWindowTitle(QApplication::translate("EditUser", "EditUser", 0, QApplication::UnicodeUTF8));
        uName->setText(QApplication::translate("EditUser", "TextLabel", 0, QApplication::UnicodeUTF8));
        eLocation->setText(QApplication::translate("EditUser", "Location", 0, QApplication::UnicodeUTF8));
        eEmail->setText(QApplication::translate("EditUser", "Email", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listExpertise->isSortingEnabled();
        listExpertise->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listExpertise->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("EditUser", "Expertise:", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listExpertise->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("EditUser", "New Item", 0, QApplication::UnicodeUTF8));
        listExpertise->setSortingEnabled(__sortingEnabled);

        bAddExp->setText(QApplication::translate("EditUser", "Add Expertise", 0, QApplication::UnicodeUTF8));
        bDelExp->setText(QApplication::translate("EditUser", "Delete Expertise", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditUser: public Ui_EditUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITUSER_H
