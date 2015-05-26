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
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditUser
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *eName;
    QLabel *lDispID;
    QLabel *lID;
    QHBoxLayout *horizontalLayout;
    QLineEdit *eLocation;
    QLineEdit *eEmail;
    QListWidget *listExpertise;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bAddExp;
    QPushButton *bDelExp;
    QWidget *wNewUser;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *ePassword;
    QCheckBox *cIsAdmin;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditUser)
    {
        if (EditUser->objectName().isEmpty())
            EditUser->setObjectName(QString::fromUtf8("EditUser"));
        EditUser->resize(642, 374);
        verticalLayout = new QVBoxLayout(EditUser);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        eName = new QLineEdit(EditUser);
        eName->setObjectName(QString::fromUtf8("eName"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(eName->sizePolicy().hasHeightForWidth());
        eName->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        eName->setFont(font);

        horizontalLayout_3->addWidget(eName);

        lDispID = new QLabel(EditUser);
        lDispID->setObjectName(QString::fromUtf8("lDispID"));
        lDispID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lDispID);

        lID = new QLabel(EditUser);
        lID->setObjectName(QString::fromUtf8("lID"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lID->sizePolicy().hasHeightForWidth());
        lID->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(lID);


        verticalLayout->addLayout(horizontalLayout_3);

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

        wNewUser = new QWidget(EditUser);
        wNewUser->setObjectName(QString::fromUtf8("wNewUser"));
        horizontalLayout_4 = new QHBoxLayout(wNewUser);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ePassword = new QLineEdit(wNewUser);
        ePassword->setObjectName(QString::fromUtf8("ePassword"));
        ePassword->setInputMask(QString::fromUtf8(""));
        ePassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(ePassword);

        cIsAdmin = new QCheckBox(wNewUser);
        cIsAdmin->setObjectName(QString::fromUtf8("cIsAdmin"));

        horizontalLayout_4->addWidget(cIsAdmin);


        verticalLayout->addWidget(wNewUser);

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
        eName->setPlaceholderText(QApplication::translate("EditUser", "Name", 0, QApplication::UnicodeUTF8));
        lDispID->setText(QApplication::translate("EditUser", "ID Number:", 0, QApplication::UnicodeUTF8));
        lID->setText(QApplication::translate("EditUser", "New User", 0, QApplication::UnicodeUTF8));
        eLocation->setText(QString());
        eLocation->setPlaceholderText(QApplication::translate("EditUser", "Location", 0, QApplication::UnicodeUTF8));
        eEmail->setText(QString());
        eEmail->setPlaceholderText(QApplication::translate("EditUser", "Email", 0, QApplication::UnicodeUTF8));
        bAddExp->setText(QApplication::translate("EditUser", "Add Expertise", 0, QApplication::UnicodeUTF8));
        bDelExp->setText(QApplication::translate("EditUser", "Delete Expertise", 0, QApplication::UnicodeUTF8));
        ePassword->setPlaceholderText(QApplication::translate("EditUser", "Password", 0, QApplication::UnicodeUTF8));
        cIsAdmin->setText(QApplication::translate("EditUser", "Is Admin", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditUser: public Ui_EditUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITUSER_H
