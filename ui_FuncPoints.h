/********************************************************************************
** Form generated from reading UI file 'FuncPoints.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCPOINTS_H
#define UI_FUNCPOINTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollArea>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FuncPoints
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lName;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QSpinBox *sEOH;
    QSpinBox *sEIL;
    QSpinBox *sEOL;
    QSpinBox *sEIFL;
    QSpinBox *sEIFM;
    QSpinBox *sILFL;
    QSpinBox *sEOM;
    QSpinBox *sEIH;
    QSpinBox *sEQH;
    QSpinBox *sEIM;
    QSpinBox *sEQM;
    QLabel *label;
    QLabel *label_4;
    QSpinBox *sILFH;
    QLabel *label_3;
    QSpinBox *sEIFH;
    QSpinBox *sILFM;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *sEQL;
    QFormLayout *formLayout;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_17;
    QLabel *label_16;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_24;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_21;
    QLabel *label_20;
    QLabel *label_19;
    QLabel *label_18;
    QSpinBox *sDI1;
    QSpinBox *sDI2;
    QSpinBox *sDI3;
    QSpinBox *sDI4;
    QSpinBox *sDI5;
    QSpinBox *sDI6;
    QSpinBox *sDI8;
    QSpinBox *sDI7;
    QSpinBox *sDI9;
    QSpinBox *sDI10;
    QSpinBox *sDI11;
    QSpinBox *sDI12;
    QSpinBox *sDI13;
    QSpinBox *sDI14;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FuncPoints)
    {
        if (FuncPoints->objectName().isEmpty())
            FuncPoints->setObjectName(QString::fromUtf8("FuncPoints"));
        FuncPoints->resize(695, 568);
        verticalLayout = new QVBoxLayout(FuncPoints);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lName = new QLabel(FuncPoints);
        lName->setObjectName(QString::fromUtf8("lName"));
        QFont font;
        font.setPointSize(22);
        lName->setFont(font);
        lName->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lName);

        scrollArea = new QScrollArea(FuncPoints);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 659, 689));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        sEOH = new QSpinBox(scrollAreaWidgetContents);
        sEOH->setObjectName(QString::fromUtf8("sEOH"));
        sEOH->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sEOH->setMaximum(99999);

        gridLayout->addWidget(sEOH, 2, 3, 1, 1);

        sEIL = new QSpinBox(scrollAreaWidgetContents);
        sEIL->setObjectName(QString::fromUtf8("sEIL"));
        sEIL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sEIL->setMaximum(99999);

        gridLayout->addWidget(sEIL, 1, 1, 1, 1);

        sEOL = new QSpinBox(scrollAreaWidgetContents);
        sEOL->setObjectName(QString::fromUtf8("sEOL"));
        sEOL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sEOL->setMaximum(99999);

        gridLayout->addWidget(sEOL, 2, 1, 1, 1);

        sEIFL = new QSpinBox(scrollAreaWidgetContents);
        sEIFL->setObjectName(QString::fromUtf8("sEIFL"));
        sEIFL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sEIFL->setMaximum(99999);

        gridLayout->addWidget(sEIFL, 5, 1, 1, 1);

        sEIFM = new QSpinBox(scrollAreaWidgetContents);
        sEIFM->setObjectName(QString::fromUtf8("sEIFM"));
        sEIFM->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sEIFM->setMaximum(99999);

        gridLayout->addWidget(sEIFM, 5, 2, 1, 1);

        sILFL = new QSpinBox(scrollAreaWidgetContents);
        sILFL->setObjectName(QString::fromUtf8("sILFL"));
        sILFL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sILFL->setMaximum(99999);

        gridLayout->addWidget(sILFL, 4, 1, 1, 1);

        sEOM = new QSpinBox(scrollAreaWidgetContents);
        sEOM->setObjectName(QString::fromUtf8("sEOM"));
        sEOM->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sEOM->setMaximum(99999);

        gridLayout->addWidget(sEOM, 2, 2, 1, 1);

        sEIH = new QSpinBox(scrollAreaWidgetContents);
        sEIH->setObjectName(QString::fromUtf8("sEIH"));
        sEIH->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sEIH->setMaximum(99999);

        gridLayout->addWidget(sEIH, 1, 3, 1, 1);

        sEQH = new QSpinBox(scrollAreaWidgetContents);
        sEQH->setObjectName(QString::fromUtf8("sEQH"));
        sEQH->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sEQH->setMaximum(99999);

        gridLayout->addWidget(sEQH, 3, 3, 1, 1);

        sEIM = new QSpinBox(scrollAreaWidgetContents);
        sEIM->setObjectName(QString::fromUtf8("sEIM"));
        sEIM->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sEIM->setMaximum(99999);

        gridLayout->addWidget(sEIM, 1, 2, 1, 1);

        sEQM = new QSpinBox(scrollAreaWidgetContents);
        sEQM->setObjectName(QString::fromUtf8("sEQM"));
        sEQM->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sEQM->setMaximum(99999);

        gridLayout->addWidget(sEQM, 3, 2, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        sILFH = new QSpinBox(scrollAreaWidgetContents);
        sILFH->setObjectName(QString::fromUtf8("sILFH"));
        sILFH->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sILFH->setMaximum(99999);

        gridLayout->addWidget(sILFH, 4, 3, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        sEIFH = new QSpinBox(scrollAreaWidgetContents);
        sEIFH->setObjectName(QString::fromUtf8("sEIFH"));
        sEIFH->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sEIFH->setMaximum(99999);

        gridLayout->addWidget(sEIFH, 5, 3, 1, 1);

        sILFM = new QSpinBox(scrollAreaWidgetContents);
        sILFM->setObjectName(QString::fromUtf8("sILFM"));
        sILFM->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sILFM->setMaximum(99999);

        gridLayout->addWidget(sILFM, 4, 2, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 0, 3, 1, 1);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        sEQL = new QSpinBox(scrollAreaWidgetContents);
        sEQL->setObjectName(QString::fromUtf8("sEQL"));
        sEQL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sEQL->setMaximum(99999);

        gridLayout->addWidget(sEQL, 3, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, label_10);

        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_12);

        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_17);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_16);

        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_15);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_14);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_13);

        label_24 = new QLabel(scrollAreaWidgetContents);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_24);

        label_22 = new QLabel(scrollAreaWidgetContents);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout->setWidget(12, QFormLayout::LabelRole, label_22);

        label_23 = new QLabel(scrollAreaWidgetContents);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout->setWidget(14, QFormLayout::LabelRole, label_23);

        label_21 = new QLabel(scrollAreaWidgetContents);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout->setWidget(13, QFormLayout::LabelRole, label_21);

        label_20 = new QLabel(scrollAreaWidgetContents);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_20);

        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_19);

        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_18);

        sDI1 = new QSpinBox(scrollAreaWidgetContents);
        sDI1->setObjectName(QString::fromUtf8("sDI1"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sDI1->sizePolicy().hasHeightForWidth());
        sDI1->setSizePolicy(sizePolicy1);
        sDI1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sDI1->setMaximum(5);

        formLayout->setWidget(1, QFormLayout::FieldRole, sDI1);

        sDI2 = new QSpinBox(scrollAreaWidgetContents);
        sDI2->setObjectName(QString::fromUtf8("sDI2"));
        sizePolicy1.setHeightForWidth(sDI2->sizePolicy().hasHeightForWidth());
        sDI2->setSizePolicy(sizePolicy1);
        sDI2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sDI2->setMaximum(5);

        formLayout->setWidget(2, QFormLayout::FieldRole, sDI2);

        sDI3 = new QSpinBox(scrollAreaWidgetContents);
        sDI3->setObjectName(QString::fromUtf8("sDI3"));
        sizePolicy1.setHeightForWidth(sDI3->sizePolicy().hasHeightForWidth());
        sDI3->setSizePolicy(sizePolicy1);
        sDI3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sDI3->setMaximum(5);

        formLayout->setWidget(3, QFormLayout::FieldRole, sDI3);

        sDI4 = new QSpinBox(scrollAreaWidgetContents);
        sDI4->setObjectName(QString::fromUtf8("sDI4"));
        sizePolicy1.setHeightForWidth(sDI4->sizePolicy().hasHeightForWidth());
        sDI4->setSizePolicy(sizePolicy1);
        sDI4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sDI4->setMaximum(5);

        formLayout->setWidget(4, QFormLayout::FieldRole, sDI4);

        sDI5 = new QSpinBox(scrollAreaWidgetContents);
        sDI5->setObjectName(QString::fromUtf8("sDI5"));
        sizePolicy1.setHeightForWidth(sDI5->sizePolicy().hasHeightForWidth());
        sDI5->setSizePolicy(sizePolicy1);
        sDI5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sDI5->setMaximum(5);

        formLayout->setWidget(5, QFormLayout::FieldRole, sDI5);

        sDI6 = new QSpinBox(scrollAreaWidgetContents);
        sDI6->setObjectName(QString::fromUtf8("sDI6"));
        sizePolicy1.setHeightForWidth(sDI6->sizePolicy().hasHeightForWidth());
        sDI6->setSizePolicy(sizePolicy1);
        sDI6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sDI6->setMaximum(5);

        formLayout->setWidget(6, QFormLayout::FieldRole, sDI6);

        sDI8 = new QSpinBox(scrollAreaWidgetContents);
        sDI8->setObjectName(QString::fromUtf8("sDI8"));
        sizePolicy1.setHeightForWidth(sDI8->sizePolicy().hasHeightForWidth());
        sDI8->setSizePolicy(sizePolicy1);
        sDI8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sDI8->setMaximum(5);

        formLayout->setWidget(8, QFormLayout::FieldRole, sDI8);

        sDI7 = new QSpinBox(scrollAreaWidgetContents);
        sDI7->setObjectName(QString::fromUtf8("sDI7"));
        sizePolicy1.setHeightForWidth(sDI7->sizePolicy().hasHeightForWidth());
        sDI7->setSizePolicy(sizePolicy1);
        sDI7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sDI7->setMaximum(5);

        formLayout->setWidget(7, QFormLayout::FieldRole, sDI7);

        sDI9 = new QSpinBox(scrollAreaWidgetContents);
        sDI9->setObjectName(QString::fromUtf8("sDI9"));
        sizePolicy1.setHeightForWidth(sDI9->sizePolicy().hasHeightForWidth());
        sDI9->setSizePolicy(sizePolicy1);
        sDI9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sDI9->setMaximum(5);

        formLayout->setWidget(9, QFormLayout::FieldRole, sDI9);

        sDI10 = new QSpinBox(scrollAreaWidgetContents);
        sDI10->setObjectName(QString::fromUtf8("sDI10"));
        sizePolicy1.setHeightForWidth(sDI10->sizePolicy().hasHeightForWidth());
        sDI10->setSizePolicy(sizePolicy1);
        sDI10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sDI10->setMaximum(5);

        formLayout->setWidget(10, QFormLayout::FieldRole, sDI10);

        sDI11 = new QSpinBox(scrollAreaWidgetContents);
        sDI11->setObjectName(QString::fromUtf8("sDI11"));
        sizePolicy1.setHeightForWidth(sDI11->sizePolicy().hasHeightForWidth());
        sDI11->setSizePolicy(sizePolicy1);
        sDI11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sDI11->setMaximum(5);

        formLayout->setWidget(11, QFormLayout::FieldRole, sDI11);

        sDI12 = new QSpinBox(scrollAreaWidgetContents);
        sDI12->setObjectName(QString::fromUtf8("sDI12"));
        sizePolicy1.setHeightForWidth(sDI12->sizePolicy().hasHeightForWidth());
        sDI12->setSizePolicy(sizePolicy1);
        sDI12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sDI12->setMaximum(5);

        formLayout->setWidget(12, QFormLayout::FieldRole, sDI12);

        sDI13 = new QSpinBox(scrollAreaWidgetContents);
        sDI13->setObjectName(QString::fromUtf8("sDI13"));
        sizePolicy1.setHeightForWidth(sDI13->sizePolicy().hasHeightForWidth());
        sDI13->setSizePolicy(sizePolicy1);
        sDI13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sDI13->setMaximum(5);

        formLayout->setWidget(13, QFormLayout::FieldRole, sDI13);

        sDI14 = new QSpinBox(scrollAreaWidgetContents);
        sDI14->setObjectName(QString::fromUtf8("sDI14"));
        sizePolicy1.setHeightForWidth(sDI14->sizePolicy().hasHeightForWidth());
        sDI14->setSizePolicy(sizePolicy1);
        sDI14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sDI14->setMaximum(5);

        formLayout->setWidget(14, QFormLayout::FieldRole, sDI14);


        verticalLayout_2->addLayout(formLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(FuncPoints);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FuncPoints);
        QObject::connect(buttonBox, SIGNAL(accepted()), FuncPoints, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FuncPoints, SLOT(reject()));

        QMetaObject::connectSlotsByName(FuncPoints);
    } // setupUi

    void retranslateUi(QDialog *FuncPoints)
    {
        FuncPoints->setWindowTitle(QApplication::translate("FuncPoints", "FuncPoints", 0, QApplication::UnicodeUTF8));
        lName->setText(QApplication::translate("FuncPoints", "Function Points (Technical)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FuncPoints", "Low", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FuncPoints", "External Query", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FuncPoints", "External Output", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FuncPoints", "External Input", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FuncPoints", "Internal Logical Files", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("FuncPoints", "High", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FuncPoints", "External Interface Files", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("FuncPoints", "Medium ", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("FuncPoints", "General System Characteristics (GSCs)", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("FuncPoints", "Degree of Influence (DI) 0-5", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("FuncPoints", "1. Data Communications", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("FuncPoints", "2. Distributed Data Processing", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("FuncPoints", "3. Performance", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("FuncPoints", "4. Heavily Used Configurations", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("FuncPoints", "5. Transaction Rate", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("FuncPoints", "6. Online Data Entry", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("FuncPoints", "7. End-User Efficiency", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("FuncPoints", "10. Reusability", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("FuncPoints", "12. Operational Ease", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("FuncPoints", "14. Facilitate Change", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("FuncPoints", "13. Multiple Sites", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("FuncPoints", "11. Installation Ease", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("FuncPoints", "8. Online Update", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("FuncPoints", "9. Complex Processing", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FuncPoints: public Ui_FuncPoints {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCPOINTS_H
