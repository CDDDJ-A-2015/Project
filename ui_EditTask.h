/********************************************************************************
** Form generated from reading UI file 'EditTask.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTASK_H
#define UI_EDITTASK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditTask
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lDispPriority;
    QComboBox *cPriority;
    QLineEdit *eName;
    QLabel *lDispID;
    QLabel *lID;
    QPlainTextEdit *eDesc;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lDispStatus;
    QComboBox *cStatus;
    QProgressBar *progressBar;
    QLabel *lDispDep;
    QTreeWidget *tDep;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bAddDep;
    QPushButton *bDelDep;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditTask)
    {
        if (EditTask->objectName().isEmpty())
            EditTask->setObjectName(QString::fromUtf8("EditTask"));
        EditTask->resize(786, 496);
        verticalLayout = new QVBoxLayout(EditTask);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lDispPriority = new QLabel(EditTask);
        lDispPriority->setObjectName(QString::fromUtf8("lDispPriority"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lDispPriority->sizePolicy().hasHeightForWidth());
        lDispPriority->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lDispPriority);

        cPriority = new QComboBox(EditTask);
        cPriority->setObjectName(QString::fromUtf8("cPriority"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cPriority->sizePolicy().hasHeightForWidth());
        cPriority->setSizePolicy(sizePolicy1);
        cPriority->setMinimumSize(QSize(80, 0));
        cPriority->setEditable(false);

        horizontalLayout->addWidget(cPriority);

        eName = new QLineEdit(EditTask);
        eName->setObjectName(QString::fromUtf8("eName"));
        eName->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(eName);

        lDispID = new QLabel(EditTask);
        lDispID->setObjectName(QString::fromUtf8("lDispID"));
        sizePolicy.setHeightForWidth(lDispID->sizePolicy().hasHeightForWidth());
        lDispID->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lDispID);

        lID = new QLabel(EditTask);
        lID->setObjectName(QString::fromUtf8("lID"));
        sizePolicy.setHeightForWidth(lID->sizePolicy().hasHeightForWidth());
        lID->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lID);


        verticalLayout->addLayout(horizontalLayout);

        eDesc = new QPlainTextEdit(EditTask);
        eDesc->setObjectName(QString::fromUtf8("eDesc"));

        verticalLayout->addWidget(eDesc);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lDispStatus = new QLabel(EditTask);
        lDispStatus->setObjectName(QString::fromUtf8("lDispStatus"));
        QFont font;
        font.setPointSize(20);
        lDispStatus->setFont(font);
        lDispStatus->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lDispStatus);

        cStatus = new QComboBox(EditTask);
        cStatus->setObjectName(QString::fromUtf8("cStatus"));

        horizontalLayout_2->addWidget(cStatus);


        verticalLayout->addLayout(horizontalLayout_2);

        progressBar = new QProgressBar(EditTask);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMinimum(0);
        progressBar->setValue(0);
        progressBar->setFormat(QString::fromUtf8("%p%"));

        verticalLayout->addWidget(progressBar);

        lDispDep = new QLabel(EditTask);
        lDispDep->setObjectName(QString::fromUtf8("lDispDep"));
        lDispDep->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lDispDep);

        tDep = new QTreeWidget(EditTask);
        tDep->setObjectName(QString::fromUtf8("tDep"));

        verticalLayout->addWidget(tDep);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        bAddDep = new QPushButton(EditTask);
        bAddDep->setObjectName(QString::fromUtf8("bAddDep"));

        horizontalLayout_3->addWidget(bAddDep);

        bDelDep = new QPushButton(EditTask);
        bDelDep->setObjectName(QString::fromUtf8("bDelDep"));

        horizontalLayout_3->addWidget(bDelDep);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(EditTask);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EditTask);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditTask, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditTask, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditTask);
    } // setupUi

    void retranslateUi(QDialog *EditTask)
    {
        EditTask->setWindowTitle(QApplication::translate("EditTask", "EditTask", 0, QApplication::UnicodeUTF8));
        lDispPriority->setText(QApplication::translate("EditTask", "Priority:", 0, QApplication::UnicodeUTF8));
        cPriority->clear();
        cPriority->insertItems(0, QStringList()
         << QApplication::translate("EditTask", "Select", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditTask", "Trivial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditTask", "Low", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditTask", "High", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditTask", "Critical", 0, QApplication::UnicodeUTF8)
        );
        lDispID->setText(QApplication::translate("EditTask", "ID Number:", 0, QApplication::UnicodeUTF8));
        lID->setText(QApplication::translate("EditTask", "2412421", 0, QApplication::UnicodeUTF8));
        eDesc->setPlainText(QApplication::translate("EditTask", "Description:\n"
"", 0, QApplication::UnicodeUTF8));
        lDispStatus->setText(QApplication::translate("EditTask", "Status:", 0, QApplication::UnicodeUTF8));
        cStatus->clear();
        cStatus->insertItems(0, QStringList()
         << QApplication::translate("EditTask", "Pending", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditTask", "Not Started", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditTask", "In Progress", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditTask", "Completed", 0, QApplication::UnicodeUTF8)
        );
        lDispDep->setText(QApplication::translate("EditTask", "Dependencies:", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = tDep->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("EditTask", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("EditTask", "Status", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("EditTask", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("EditTask", "ID", 0, QApplication::UnicodeUTF8));
        bAddDep->setText(QApplication::translate("EditTask", "Add Dependency", 0, QApplication::UnicodeUTF8));
        bDelDep->setText(QApplication::translate("EditTask", "Delete Dependency", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditTask: public Ui_EditTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTASK_H
