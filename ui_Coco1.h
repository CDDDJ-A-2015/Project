/********************************************************************************
** Form generated from reading UI file 'Coco1.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COCO1_H
#define UI_COCO1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Coco1
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lName;
    QLabel *lDispSize;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rVS;
    QRadioButton *rS;
    QRadioButton *rM;
    QRadioButton *rL;
    QRadioButton *rVL;
    QSpacerItem *horizontalSpacer;
    QLabel *lDispType;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rOrganic;
    QRadioButton *rSemi;
    QRadioButton *rEmb;
    QDialogButtonBox *buttonBox;
    QButtonGroup *bgSize;
    QButtonGroup *bgType;

    void setupUi(QDialog *Coco1)
    {
        if (Coco1->objectName().isEmpty())
            Coco1->setObjectName(QString::fromUtf8("Coco1"));
        Coco1->resize(621, 247);
        verticalLayout = new QVBoxLayout(Coco1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lName = new QLabel(Coco1);
        lName->setObjectName(QString::fromUtf8("lName"));
        QFont font;
        font.setPointSize(22);
        lName->setFont(font);
        lName->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lName);

        lDispSize = new QLabel(Coco1);
        lDispSize->setObjectName(QString::fromUtf8("lDispSize"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lDispSize->sizePolicy().hasHeightForWidth());
        lDispSize->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lDispSize);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rVS = new QRadioButton(Coco1);
        bgSize = new QButtonGroup(Coco1);
        bgSize->setObjectName(QString::fromUtf8("bgSize"));
        bgSize->addButton(rVS);
        rVS->setObjectName(QString::fromUtf8("rVS"));
        sizePolicy.setHeightForWidth(rVS->sizePolicy().hasHeightForWidth());
        rVS->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(rVS);

        rS = new QRadioButton(Coco1);
        bgSize->addButton(rS);
        rS->setObjectName(QString::fromUtf8("rS"));
        sizePolicy.setHeightForWidth(rS->sizePolicy().hasHeightForWidth());
        rS->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(rS);

        rM = new QRadioButton(Coco1);
        bgSize->addButton(rM);
        rM->setObjectName(QString::fromUtf8("rM"));
        sizePolicy.setHeightForWidth(rM->sizePolicy().hasHeightForWidth());
        rM->setSizePolicy(sizePolicy);
        rM->setChecked(true);

        horizontalLayout->addWidget(rM);

        rL = new QRadioButton(Coco1);
        bgSize->addButton(rL);
        rL->setObjectName(QString::fromUtf8("rL"));
        sizePolicy.setHeightForWidth(rL->sizePolicy().hasHeightForWidth());
        rL->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(rL);

        rVL = new QRadioButton(Coco1);
        bgSize->addButton(rVL);
        rVL->setObjectName(QString::fromUtf8("rVL"));
        sizePolicy.setHeightForWidth(rVL->sizePolicy().hasHeightForWidth());
        rVL->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(rVL);


        verticalLayout->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        lDispType = new QLabel(Coco1);
        lDispType->setObjectName(QString::fromUtf8("lDispType"));

        verticalLayout->addWidget(lDispType);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(40, -1, -1, -1);
        rOrganic = new QRadioButton(Coco1);
        bgType = new QButtonGroup(Coco1);
        bgType->setObjectName(QString::fromUtf8("bgType"));
        bgType->addButton(rOrganic);
        rOrganic->setObjectName(QString::fromUtf8("rOrganic"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rOrganic->sizePolicy().hasHeightForWidth());
        rOrganic->setSizePolicy(sizePolicy1);
        rOrganic->setMaximumSize(QSize(16777215, 16));

        verticalLayout_2->addWidget(rOrganic);

        rSemi = new QRadioButton(Coco1);
        bgType->addButton(rSemi);
        rSemi->setObjectName(QString::fromUtf8("rSemi"));
        sizePolicy1.setHeightForWidth(rSemi->sizePolicy().hasHeightForWidth());
        rSemi->setSizePolicy(sizePolicy1);
        rSemi->setMaximumSize(QSize(16777215, 16));
        rSemi->setChecked(true);

        verticalLayout_2->addWidget(rSemi);

        rEmb = new QRadioButton(Coco1);
        bgType->addButton(rEmb);
        rEmb->setObjectName(QString::fromUtf8("rEmb"));
        sizePolicy1.setHeightForWidth(rEmb->sizePolicy().hasHeightForWidth());
        rEmb->setSizePolicy(sizePolicy1);
        rEmb->setMaximumSize(QSize(16777215, 16));

        verticalLayout_2->addWidget(rEmb);


        verticalLayout->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(Coco1);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Coco1);
        QObject::connect(buttonBox, SIGNAL(accepted()), Coco1, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Coco1, SLOT(reject()));

        QMetaObject::connectSlotsByName(Coco1);
    } // setupUi

    void retranslateUi(QDialog *Coco1)
    {
        Coco1->setWindowTitle(QApplication::translate("Coco1", "Coco1", 0, QApplication::UnicodeUTF8));
        lName->setText(QApplication::translate("Coco1", "COCOMO", 0, QApplication::UnicodeUTF8));
        lDispSize->setText(QApplication::translate("Coco1", "Size of Project:", 0, QApplication::UnicodeUTF8));
        rVS->setText(QApplication::translate("Coco1", "Very Small", 0, QApplication::UnicodeUTF8));
        rS->setText(QApplication::translate("Coco1", "Small", 0, QApplication::UnicodeUTF8));
        rM->setText(QApplication::translate("Coco1", "Medium", 0, QApplication::UnicodeUTF8));
        rL->setText(QApplication::translate("Coco1", "Large", 0, QApplication::UnicodeUTF8));
        rVL->setText(QApplication::translate("Coco1", "Very Large", 0, QApplication::UnicodeUTF8));
        lDispType->setText(QApplication::translate("Coco1", "How would you describe the project:", 0, QApplication::UnicodeUTF8));
        rOrganic->setText(QApplication::translate("Coco1", "Flexible System, easy to change", 0, QApplication::UnicodeUTF8));
        rSemi->setText(QApplication::translate("Coco1", "In between", 0, QApplication::UnicodeUTF8));
        rEmb->setText(QApplication::translate("Coco1", "Very Tight Constraints", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Coco1: public Ui_Coco1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COCO1_H
