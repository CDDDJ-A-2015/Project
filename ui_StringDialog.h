/********************************************************************************
** Form generated from reading UI file 'StringDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRINGDIALOG_H
#define UI_STRINGDIALOG_H

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

class Ui_StringDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StringDialog)
    {
        if (StringDialog->objectName().isEmpty())
            StringDialog->setObjectName(QString::fromUtf8("StringDialog"));
        StringDialog->resize(400, 99);
        verticalLayout = new QVBoxLayout(StringDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(StringDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(StringDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(StringDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(StringDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), StringDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StringDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(StringDialog);
    } // setupUi

    void retranslateUi(QDialog *StringDialog)
    {
        StringDialog->setWindowTitle(QApplication::translate("StringDialog", "StringDialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("StringDialog", "Comment:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StringDialog: public Ui_StringDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRINGDIALOG_H
