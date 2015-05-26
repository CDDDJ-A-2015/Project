/********************************************************************************
** Form generated from reading UI file 'GetInt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETINT_H
#define UI_GETINT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GetInt
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *sInt;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GetInt)
    {
        if (GetInt->objectName().isEmpty())
            GetInt->setObjectName(QString::fromUtf8("GetInt"));
        GetInt->resize(460, 97);
        verticalLayout = new QVBoxLayout(GetInt);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(GetInt);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        sInt = new QSpinBox(GetInt);
        sInt->setObjectName(QString::fromUtf8("sInt"));
        sInt->setMaximum(200);

        horizontalLayout->addWidget(sInt);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(GetInt);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GetInt);
        QObject::connect(buttonBox, SIGNAL(accepted()), GetInt, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GetInt, SLOT(reject()));

        QMetaObject::connectSlotsByName(GetInt);
    } // setupUi

    void retranslateUi(QDialog *GetInt)
    {
        GetInt->setWindowTitle(QApplication::translate("GetInt", "GetInt", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GetInt", "Please enter estimated project finish time:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GetInt: public Ui_GetInt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETINT_H
