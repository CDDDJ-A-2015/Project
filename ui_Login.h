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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lError;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lUserName;
    QLineEdit *eUserName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lPassword;
    QLineEdit *ePassword;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(400, 164);
        verticalLayout = new QVBoxLayout(Login);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lError = new QLabel(Login);
        lError->setObjectName(QString::fromUtf8("lError"));
        lError->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lError);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lUserName = new QLabel(Login);
        lUserName->setObjectName(QString::fromUtf8("lUserName"));

        horizontalLayout_2->addWidget(lUserName);

        eUserName = new QLineEdit(Login);
        eUserName->setObjectName(QString::fromUtf8("eUserName"));
        eUserName->setMaxLength(16);

        horizontalLayout_2->addWidget(eUserName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lPassword = new QLabel(Login);
        lPassword->setObjectName(QString::fromUtf8("lPassword"));

        horizontalLayout_3->addWidget(lPassword);

        ePassword = new QLineEdit(Login);
        ePassword->setObjectName(QString::fromUtf8("ePassword"));
        ePassword->setInputMask(QString::fromUtf8(""));
        ePassword->setMaxLength(16);
        ePassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(ePassword);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(Login);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Login);
        QObject::connect(buttonBox, SIGNAL(rejected()), Login, SLOT(reject()));

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", 0, QApplication::UnicodeUTF8));
        lError->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" color:#ff0000;\">Error: Incorrect Details</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lUserName->setText(QApplication::translate("Login", "User Name:", 0, QApplication::UnicodeUTF8));
        lPassword->setText(QApplication::translate("Login", "Password:  ", 0, QApplication::UnicodeUTF8));
        ePassword->setPlaceholderText(QApplication::translate("Login", "Password", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
