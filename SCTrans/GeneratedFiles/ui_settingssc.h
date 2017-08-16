/********************************************************************************
** Form generated from reading UI file 'settingssc.ui'
**
** Created: Tue 15. Aug 10:50:08 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSSC_H
#define UI_SETTINGSSC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsSC
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *angl_cb;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *lin_cb;
    QPushButton *ok_pb;

    void setupUi(QDialog *SettingsSC)
    {
        if (SettingsSC->objectName().isEmpty())
            SettingsSC->setObjectName(QString::fromUtf8("SettingsSC"));
        SettingsSC->resize(230, 121);
        verticalLayout = new QVBoxLayout(SettingsSC);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(SettingsSC);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        angl_cb = new QComboBox(SettingsSC);
        angl_cb->setObjectName(QString::fromUtf8("angl_cb"));

        horizontalLayout->addWidget(angl_cb);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(SettingsSC);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lin_cb = new QComboBox(SettingsSC);
        lin_cb->setObjectName(QString::fromUtf8("lin_cb"));

        horizontalLayout_2->addWidget(lin_cb);


        verticalLayout->addLayout(horizontalLayout_2);

        ok_pb = new QPushButton(SettingsSC);
        ok_pb->setObjectName(QString::fromUtf8("ok_pb"));

        verticalLayout->addWidget(ok_pb);


        retranslateUi(SettingsSC);

        QMetaObject::connectSlotsByName(SettingsSC);
    } // setupUi

    void retranslateUi(QDialog *SettingsSC)
    {
        SettingsSC->setWindowTitle(QApplication::translate("SettingsSC", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SettingsSC", "\320\243\320\263\320\273\321\213", 0, QApplication::UnicodeUTF8));
        angl_cb->clear();
        angl_cb->insertItems(0, QStringList()
         << QApplication::translate("SettingsSC", "\320\223\321\200\320\260\320\264\321\203\321\201\321\213", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsSC", "\320\240\320\260\320\264\320\270\320\260\320\275\321\213", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("SettingsSC", "\320\233\320\270\320\275\320\265\320\271\320\275\321\213\320\265 \320\272\320\276\320\276\321\200\320\264.", 0, QApplication::UnicodeUTF8));
        lin_cb->clear();
        lin_cb->insertItems(0, QStringList()
         << QApplication::translate("SettingsSC", "\320\234\320\265\321\202\321\200\321\213", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsSC", "\320\232\320\270\320\273\320\276\320\274\320\265\321\202\321\200\321\213", 0, QApplication::UnicodeUTF8)
        );
        ok_pb->setText(QApplication::translate("SettingsSC", "\320\236\320\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SettingsSC: public Ui_SettingsSC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSSC_H
