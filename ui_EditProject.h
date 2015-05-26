/********************************************************************************
** Form generated from reading UI file 'EditProject.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROJECT_H
#define UI_EDITPROJECT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditProject
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *eProjName;
    QLabel *lManager;
    QPushButton *bChooseManager;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bC1;
    QLabel *lC1;
    QPushButton *bC2;
    QLabel *lC2;
    QPushButton *bFP;
    QLabel *lFP;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lDispDate;
    QDateEdit *dBeg;
    QPlainTextEdit *eDesc;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lDispID;
    QLabel *lID;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *EditProject)
    {
        if (EditProject->objectName().isEmpty())
            EditProject->setObjectName(QString::fromUtf8("EditProject"));
        EditProject->setWindowModality(Qt::ApplicationModal);
        EditProject->resize(689, 306);
        verticalLayout_2 = new QVBoxLayout(EditProject);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        eProjName = new QLineEdit(EditProject);
        eProjName->setObjectName(QString::fromUtf8("eProjName"));
        QFont font;
        font.setPointSize(32);
        eProjName->setFont(font);

        horizontalLayout->addWidget(eProjName);

        lManager = new QLabel(EditProject);
        lManager->setObjectName(QString::fromUtf8("lManager"));

        horizontalLayout->addWidget(lManager);

        bChooseManager = new QPushButton(EditProject);
        bChooseManager->setObjectName(QString::fromUtf8("bChooseManager"));

        horizontalLayout->addWidget(bChooseManager);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        bC1 = new QPushButton(EditProject);
        bC1->setObjectName(QString::fromUtf8("bC1"));

        horizontalLayout_2->addWidget(bC1);

        lC1 = new QLabel(EditProject);
        lC1->setObjectName(QString::fromUtf8("lC1"));

        horizontalLayout_2->addWidget(lC1);

        bC2 = new QPushButton(EditProject);
        bC2->setObjectName(QString::fromUtf8("bC2"));

        horizontalLayout_2->addWidget(bC2);

        lC2 = new QLabel(EditProject);
        lC2->setObjectName(QString::fromUtf8("lC2"));

        horizontalLayout_2->addWidget(lC2);

        bFP = new QPushButton(EditProject);
        bFP->setObjectName(QString::fromUtf8("bFP"));

        horizontalLayout_2->addWidget(bFP);

        lFP = new QLabel(EditProject);
        lFP->setObjectName(QString::fromUtf8("lFP"));

        horizontalLayout_2->addWidget(lFP);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lDispDate = new QLabel(EditProject);
        lDispDate->setObjectName(QString::fromUtf8("lDispDate"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lDispDate->sizePolicy().hasHeightForWidth());
        lDispDate->setSizePolicy(sizePolicy);
        lDispDate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lDispDate);

        dBeg = new QDateEdit(EditProject);
        dBeg->setObjectName(QString::fromUtf8("dBeg"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dBeg->sizePolicy().hasHeightForWidth());
        dBeg->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(dBeg);


        verticalLayout->addLayout(horizontalLayout_5);

        eDesc = new QPlainTextEdit(EditProject);
        eDesc->setObjectName(QString::fromUtf8("eDesc"));

        verticalLayout->addWidget(eDesc);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lDispID = new QLabel(EditProject);
        lDispID->setObjectName(QString::fromUtf8("lDispID"));
        lDispID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lDispID);

        lID = new QLabel(EditProject);
        lID->setObjectName(QString::fromUtf8("lID"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lID->sizePolicy().hasHeightForWidth());
        lID->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(lID);


        verticalLayout_2->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(EditProject);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        buttonBox->setCenterButtons(true);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(EditProject);

        QMetaObject::connectSlotsByName(EditProject);
    } // setupUi

    void retranslateUi(QWidget *EditProject)
    {
        EditProject->setWindowTitle(QApplication::translate("EditProject", "EditProject", 0, QApplication::UnicodeUTF8));
        eProjName->setText(QString());
        eProjName->setPlaceholderText(QApplication::translate("EditProject", "Project Name", 0, QApplication::UnicodeUTF8));
        lManager->setText(QApplication::translate("EditProject", "MANAGER:", 0, QApplication::UnicodeUTF8));
        bChooseManager->setText(QApplication::translate("EditProject", "Choose Manager", 0, QApplication::UnicodeUTF8));
        bC1->setText(QApplication::translate("EditProject", "COCOMO I", 0, QApplication::UnicodeUTF8));
        lC1->setText(QApplication::translate("EditProject", "Not Completed", 0, QApplication::UnicodeUTF8));
        bC2->setText(QApplication::translate("EditProject", "COCOMO II", 0, QApplication::UnicodeUTF8));
        lC2->setText(QApplication::translate("EditProject", "Not Completed", 0, QApplication::UnicodeUTF8));
        bFP->setText(QApplication::translate("EditProject", "Function Points", 0, QApplication::UnicodeUTF8));
        lFP->setText(QApplication::translate("EditProject", "Not Completed", 0, QApplication::UnicodeUTF8));
        lDispDate->setText(QApplication::translate("EditProject", "Start Date:", 0, QApplication::UnicodeUTF8));
        dBeg->setDisplayFormat(QApplication::translate("EditProject", "d/MM/yyyy", 0, QApplication::UnicodeUTF8));
        eDesc->setPlainText(QApplication::translate("EditProject", "Description:\n"
"", 0, QApplication::UnicodeUTF8));
        lDispID->setText(QApplication::translate("EditProject", "ID Number:", 0, QApplication::UnicodeUTF8));
        lID->setText(QApplication::translate("EditProject", "New Project", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditProject: public Ui_EditProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROJECT_H
