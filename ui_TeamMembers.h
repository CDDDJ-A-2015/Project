/********************************************************************************
** Form generated from reading UI file 'TeamMembers.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMMEMBERS_H
#define UI_TEAMMEMBERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeamMembers
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QWidget *wCanEdit;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *lDispGlobal;
    QTreeWidget *tGlobal;
    QFrame *fButtons;
    QVBoxLayout *verticalLayout_3;
    QPushButton *bRemove;
    QPushButton *bAssign;
    QVBoxLayout *verticalLayout_4;
    QLabel *lDispAssigned;
    QTreeWidget *tAssigned;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bSearch;
    QPushButton *bRoles;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TeamMembers)
    {
        if (TeamMembers->objectName().isEmpty())
            TeamMembers->setObjectName(QString::fromUtf8("TeamMembers"));
        TeamMembers->resize(953, 667);
        verticalLayout_2 = new QVBoxLayout(TeamMembers);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        wCanEdit = new QWidget(TeamMembers);
        wCanEdit->setObjectName(QString::fromUtf8("wCanEdit"));
        horizontalLayout_3 = new QHBoxLayout(wCanEdit);
#ifndef Q_OS_MAC
        horizontalLayout_3->setSpacing(6);
#endif
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lDispGlobal = new QLabel(wCanEdit);
        lDispGlobal->setObjectName(QString::fromUtf8("lDispGlobal"));
        lDispGlobal->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lDispGlobal);

        tGlobal = new QTreeWidget(wCanEdit);
        tGlobal->setObjectName(QString::fromUtf8("tGlobal"));

        verticalLayout->addWidget(tGlobal);


        horizontalLayout_3->addLayout(verticalLayout);

        fButtons = new QFrame(wCanEdit);
        fButtons->setObjectName(QString::fromUtf8("fButtons"));
        fButtons->setFrameShape(QFrame::NoFrame);
        fButtons->setFrameShadow(QFrame::Plain);
        verticalLayout_3 = new QVBoxLayout(fButtons);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        bRemove = new QPushButton(fButtons);
        bRemove->setObjectName(QString::fromUtf8("bRemove"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bRemove->sizePolicy().hasHeightForWidth());
        bRemove->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/Button-Previous-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        bRemove->setIcon(icon);
        bRemove->setIconSize(QSize(48, 48));

        verticalLayout_3->addWidget(bRemove);

        bAssign = new QPushButton(fButtons);
        bAssign->setObjectName(QString::fromUtf8("bAssign"));
        sizePolicy.setHeightForWidth(bAssign->sizePolicy().hasHeightForWidth());
        bAssign->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/Button-Next-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        bAssign->setIcon(icon1);
        bAssign->setIconSize(QSize(48, 48));

        verticalLayout_3->addWidget(bAssign);


        horizontalLayout_3->addWidget(fButtons);


        horizontalLayout->addWidget(wCanEdit);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lDispAssigned = new QLabel(TeamMembers);
        lDispAssigned->setObjectName(QString::fromUtf8("lDispAssigned"));
        lDispAssigned->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lDispAssigned);

        tAssigned = new QTreeWidget(TeamMembers);
        tAssigned->setObjectName(QString::fromUtf8("tAssigned"));

        verticalLayout_4->addWidget(tAssigned);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        bSearch = new QPushButton(TeamMembers);
        bSearch->setObjectName(QString::fromUtf8("bSearch"));

        horizontalLayout_2->addWidget(bSearch);

        bRoles = new QPushButton(TeamMembers);
        bRoles->setObjectName(QString::fromUtf8("bRoles"));

        horizontalLayout_2->addWidget(bRoles);


        verticalLayout_2->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(TeamMembers);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(TeamMembers);
        QObject::connect(buttonBox, SIGNAL(accepted()), TeamMembers, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TeamMembers, SLOT(reject()));

        QMetaObject::connectSlotsByName(TeamMembers);
    } // setupUi

    void retranslateUi(QDialog *TeamMembers)
    {
        TeamMembers->setWindowTitle(QApplication::translate("TeamMembers", "TeamMembers", 0, QApplication::UnicodeUTF8));
        lDispGlobal->setText(QApplication::translate("TeamMembers", "Global Users", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = tGlobal->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("TeamMembers", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("TeamMembers", "ID", 0, QApplication::UnicodeUTF8));
        bRemove->setText(QString());
        bAssign->setText(QString());
        lDispAssigned->setText(QApplication::translate("TeamMembers", "Assigned Users", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = tAssigned->headerItem();
        ___qtreewidgetitem1->setText(3, QApplication::translate("TeamMembers", "RoleID", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(2, QApplication::translate("TeamMembers", "Role", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(1, QApplication::translate("TeamMembers", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("TeamMembers", "ID", 0, QApplication::UnicodeUTF8));
        bSearch->setText(QApplication::translate("TeamMembers", "Search Users", 0, QApplication::UnicodeUTF8));
        bRoles->setText(QApplication::translate("TeamMembers", "Roles", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TeamMembers: public Ui_TeamMembers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMMEMBERS_H
