/********************************************************************************
** Form generated from reading UI file 'displayGraphics.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYGRAPHICS_H
#define UI_DISPLAYGRAPHICS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_displayGraphics
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *wDisplay;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *displayGraphics)
    {
        if (displayGraphics->objectName().isEmpty())
            displayGraphics->setObjectName(QString::fromUtf8("displayGraphics"));
        displayGraphics->resize(1219, 853);
        verticalLayout = new QVBoxLayout(displayGraphics);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        wDisplay = new QWidget(displayGraphics);
        wDisplay->setObjectName(QString::fromUtf8("wDisplay"));

        verticalLayout->addWidget(wDisplay);

        buttonBox = new QDialogButtonBox(displayGraphics);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(displayGraphics);
        QObject::connect(buttonBox, SIGNAL(accepted()), displayGraphics, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), displayGraphics, SLOT(reject()));

        QMetaObject::connectSlotsByName(displayGraphics);
    } // setupUi

    void retranslateUi(QDialog *displayGraphics)
    {
        displayGraphics->setWindowTitle(QApplication::translate("displayGraphics", "displayGraphics", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class displayGraphics: public Ui_displayGraphics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYGRAPHICS_H
