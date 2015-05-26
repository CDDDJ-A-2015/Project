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
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
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
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lDispBegDate;
    QDateEdit *dStartDate;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lDispLength;
    QSpinBox *sLength;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lDispDueDate;
    QDateEdit *dDueDate;
    QPlainTextEdit *eDesc;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lDispStatus;
    QComboBox *cStatus;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lDispProgress;
    QSpinBox *sProgress;
    QProgressBar *progressBar;
    QLabel *lDispDep;
    QTreeWidget *tDep;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bAddDep;
    QPushButton *bDelDep;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *bDeleteTask;
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

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lDispBegDate = new QLabel(EditTask);
        lDispBegDate->setObjectName(QString::fromUtf8("lDispBegDate"));
        sizePolicy.setHeightForWidth(lDispBegDate->sizePolicy().hasHeightForWidth());
        lDispBegDate->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(lDispBegDate);

        dStartDate = new QDateEdit(EditTask);
        dStartDate->setObjectName(QString::fromUtf8("dStartDate"));

        horizontalLayout_8->addWidget(dStartDate);


        horizontalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lDispLength = new QLabel(EditTask);
        lDispLength->setObjectName(QString::fromUtf8("lDispLength"));
        sizePolicy.setHeightForWidth(lDispLength->sizePolicy().hasHeightForWidth());
        lDispLength->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(lDispLength);

        sLength = new QSpinBox(EditTask);
        sLength->setObjectName(QString::fromUtf8("sLength"));

        horizontalLayout_7->addWidget(sLength);


        horizontalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lDispDueDate = new QLabel(EditTask);
        lDispDueDate->setObjectName(QString::fromUtf8("lDispDueDate"));
        sizePolicy.setHeightForWidth(lDispDueDate->sizePolicy().hasHeightForWidth());
        lDispDueDate->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(lDispDueDate);

        dDueDate = new QDateEdit(EditTask);
        dDueDate->setObjectName(QString::fromUtf8("dDueDate"));

        horizontalLayout_6->addWidget(dDueDate);


        horizontalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_4);

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
        lDispStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lDispStatus);

        cStatus = new QComboBox(EditTask);
        cStatus->setObjectName(QString::fromUtf8("cStatus"));

        horizontalLayout_2->addWidget(cStatus);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        lDispProgress = new QLabel(EditTask);
        lDispProgress->setObjectName(QString::fromUtf8("lDispProgress"));
        lDispProgress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(lDispProgress);

        sProgress = new QSpinBox(EditTask);
        sProgress->setObjectName(QString::fromUtf8("sProgress"));
        sProgress->setMaximum(100);

        horizontalLayout_9->addWidget(sProgress);


        horizontalLayout_2->addLayout(horizontalLayout_9);


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

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        bDeleteTask = new QPushButton(EditTask);
        bDeleteTask->setObjectName(QString::fromUtf8("bDeleteTask"));
        sizePolicy1.setHeightForWidth(bDeleteTask->sizePolicy().hasHeightForWidth());
        bDeleteTask->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(bDeleteTask);

        buttonBox = new QDialogButtonBox(EditTask);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setMinimumSize(QSize(600, 0));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        horizontalLayout_5->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(EditTask);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditTask, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditTask, SLOT(reject()));

        cStatus->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(EditTask);
    } // setupUi

    void retranslateUi(QDialog *EditTask)
    {
        EditTask->setWindowTitle(QApplication::translate("EditTask", "EditTask", 0, QApplication::UnicodeUTF8));
        lDispPriority->setText(QApplication::translate("EditTask", "Priority:", 0, QApplication::UnicodeUTF8));
        cPriority->clear();
        cPriority->insertItems(0, QStringList()
         << QApplication::translate("EditTask", "Trivial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditTask", "Low", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditTask", "High", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditTask", "Critical", 0, QApplication::UnicodeUTF8)
        );
        lDispID->setText(QApplication::translate("EditTask", "ID Number:", 0, QApplication::UnicodeUTF8));
        lID->setText(QApplication::translate("EditTask", "New Task", 0, QApplication::UnicodeUTF8));
        lDispBegDate->setText(QApplication::translate("EditTask", "Start Date:", 0, QApplication::UnicodeUTF8));
        dStartDate->setDisplayFormat(QApplication::translate("EditTask", "d/MM/yyyy", 0, QApplication::UnicodeUTF8));
        lDispLength->setText(QApplication::translate("EditTask", "Length:", 0, QApplication::UnicodeUTF8));
        lDispDueDate->setText(QApplication::translate("EditTask", "Due Date:", 0, QApplication::UnicodeUTF8));
        dDueDate->setDisplayFormat(QApplication::translate("EditTask", "d/MM/yyyy", 0, QApplication::UnicodeUTF8));
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
        lDispProgress->setText(QApplication::translate("EditTask", "Progress:", 0, QApplication::UnicodeUTF8));
        lDispDep->setText(QApplication::translate("EditTask", "Dependencies:", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = tDep->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("EditTask", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("EditTask", "Status", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("EditTask", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("EditTask", "ID", 0, QApplication::UnicodeUTF8));
        bAddDep->setText(QApplication::translate("EditTask", "Add Dependency", 0, QApplication::UnicodeUTF8));
        bDelDep->setText(QApplication::translate("EditTask", "Delete Dependency", 0, QApplication::UnicodeUTF8));
        bDeleteTask->setText(QApplication::translate("EditTask", "Delete Task", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditTask: public Ui_EditTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTASK_H
