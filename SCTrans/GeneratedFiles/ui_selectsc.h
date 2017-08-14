/********************************************************************************
** Form generated from reading UI file 'selectsc.ui'
**
** Created: Mon 14. Aug 11:28:48 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTSC_H
#define UI_SELECTSC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectSC
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QPushButton *createSC_pb;
    QPushButton *delete_pb;
    QPushButton *editSC_pb;
    QPushButton *setSC_pb;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SelectSC)
    {
        if (SelectSC->objectName().isEmpty())
            SelectSC->setObjectName(QString::fromUtf8("SelectSC"));
        SelectSC->resize(581, 275);
        verticalLayout_2 = new QVBoxLayout(SelectSC);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableView = new QTableView(SelectSC);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout->addWidget(tableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        createSC_pb = new QPushButton(SelectSC);
        createSC_pb->setObjectName(QString::fromUtf8("createSC_pb"));

        verticalLayout->addWidget(createSC_pb);

        delete_pb = new QPushButton(SelectSC);
        delete_pb->setObjectName(QString::fromUtf8("delete_pb"));

        verticalLayout->addWidget(delete_pb);

        editSC_pb = new QPushButton(SelectSC);
        editSC_pb->setObjectName(QString::fromUtf8("editSC_pb"));

        verticalLayout->addWidget(editSC_pb);

        setSC_pb = new QPushButton(SelectSC);
        setSC_pb->setObjectName(QString::fromUtf8("setSC_pb"));

        verticalLayout->addWidget(setSC_pb);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(SelectSC);

        QMetaObject::connectSlotsByName(SelectSC);
    } // setupUi

    void retranslateUi(QDialog *SelectSC)
    {
        SelectSC->setWindowTitle(QApplication::translate("SelectSC", "\320\222\321\213\320\261\320\276\321\200 \320\264\320\276\321\201\321\202\321\203\320\277\320\275\320\276\320\271 \320\241\320\232", 0, QApplication::UnicodeUTF8));
        createSC_pb->setText(QApplication::translate("SelectSC", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\241\320\232", 0, QApplication::UnicodeUTF8));
        delete_pb->setText(QApplication::translate("SelectSC", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        editSC_pb->setText(QApplication::translate("SelectSC", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\241\320\232", 0, QApplication::UnicodeUTF8));
        setSC_pb->setText(QApplication::translate("SelectSC", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\241\320\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SelectSC: public Ui_SelectSC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTSC_H
