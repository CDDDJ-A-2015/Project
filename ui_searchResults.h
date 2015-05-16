/********************************************************************************
** Form generated from reading UI file 'searchResults.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHRESULTS_H
#define UI_SEARCHRESULTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchResults
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *tGlobals;

    void setupUi(QWidget *searchResults)
    {
        if (searchResults->objectName().isEmpty())
            searchResults->setObjectName(QString::fromUtf8("searchResults"));
        searchResults->resize(521, 389);
        verticalLayout = new QVBoxLayout(searchResults);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tGlobals = new QTreeWidget(searchResults);
        tGlobals->setObjectName(QString::fromUtf8("tGlobals"));
#ifndef QT_NO_WHATSTHIS
        tGlobals->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
        tGlobals->setAlternatingRowColors(true);
        tGlobals->setWordWrap(true);
        tGlobals->setExpandsOnDoubleClick(true);
        tGlobals->header()->setStretchLastSection(false);

        verticalLayout->addWidget(tGlobals);


        retranslateUi(searchResults);

        QMetaObject::connectSlotsByName(searchResults);
    } // setupUi

    void retranslateUi(QWidget *searchResults)
    {
        searchResults->setWindowTitle(QApplication::translate("searchResults", "searchResults", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = tGlobals->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("searchResults", "Due Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("searchResults", "Progress", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("searchResults", "Manager", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("searchResults", "Project Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("searchResults", "ID", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class searchResults: public Ui_searchResults {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHRESULTS_H
