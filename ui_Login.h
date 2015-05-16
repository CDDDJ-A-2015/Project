/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QFormLayout *formLayout;
    QLabel *lUserName;
    QDialogButtonBox *buttonBox;
    QLineEdit *ePassword;
    QLabel *lPassword;
    QLineEdit *eUserName;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(400, 131);
        formLayout = new QFormLayout(Login);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lUserName = new QLabel(Login);
        lUserName->setObjectName(QString::fromUtf8("lUserName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lUserName);

        buttonBox = new QDialogButtonBox(Login);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(4, QFormLayout::SpanningRole, buttonBox);

        ePassword = new QLineEdit(Login);
        ePassword->setObjectName(QString::fromUtf8("ePassword"));
        ePassword->setInputMask(QString::fromUtf8(""));
        ePassword->setMaxLength(20);
        ePassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, ePassword);

        lPassword = new QLabel(Login);
        lPassword->setObjectName(QString::fromUtf8("lPassword"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lPassword);

        eUserName = new QLineEdit(Login);
        eUserName->setObjectName(QString::fromUtf8("eUserName"));
        eUserName->setMaxLength(16);

        formLayout->setWidget(0, QFormLayout::FieldRole, eUserName);


        retranslateUi(Login);
        QObject::connect(buttonBox, SIGNAL(accepted()), Login, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Login, SLOT(reject()));

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", 0, QApplication::UnicodeUTF8));
        lUserName->setText(QApplication::translate("Login", "User Name:", 0, QApplication::UnicodeUTF8));
        ePassword->setPlaceholderText(QApplication::translate("Login", "Password", 0, QApplication::UnicodeUTF8));
        lPassword->setText(QApplication::translate("Login", "Password:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
