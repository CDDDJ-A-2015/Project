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
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
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
    QLabel *projName;
    QLabel *label;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *EditProject)
    {
        if (EditProject->objectName().isEmpty())
            EditProject->setObjectName(QString::fromUtf8("EditProject"));
        EditProject->resize(689, 295);
        verticalLayout_2 = new QVBoxLayout(EditProject);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        projName = new QLabel(EditProject);
        projName->setObjectName(QString::fromUtf8("projName"));
        QFont font;
        font.setPointSize(32);
        font.setUnderline(true);
        projName->setFont(font);

        horizontalLayout->addWidget(projName);

        label = new QLabel(EditProject);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        pushButton_4 = new QPushButton(EditProject);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_3 = new QPushButton(EditProject);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        label_2 = new QLabel(EditProject);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        pushButton = new QPushButton(EditProject);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        label_3 = new QLabel(EditProject);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        pushButton_2 = new QPushButton(EditProject);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        label_4 = new QLabel(EditProject);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_2);

        plainTextEdit = new QPlainTextEdit(EditProject);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        verticalLayout_2->addLayout(verticalLayout);

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
        projName->setText(QApplication::translate("EditProject", "Trees of Life", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EditProject", "MANAGER:", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("EditProject", "Team Members", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("EditProject", "COCOMO I", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("EditProject", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("EditProject", "COCOMO II", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("EditProject", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("EditProject", "Function Points", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("EditProject", "TextLabel", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QApplication::translate("EditProject", "Description:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditProject: public Ui_EditProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROJECT_H
