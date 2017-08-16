/********************************************************************************
** Form generated from reading UI file 'createsc.ui'
**
** Created: Tue 15. Aug 10:50:08 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATESC_H
#define UI_CREATESC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateSC
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLineEdit *name_le;
    QLabel *label;
    QLineEdit *m_le;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *wX_le;
    QLabel *label_3;
    QLineEdit *wY_le;
    QLabel *label_8;
    QLineEdit *wZ_le;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLineEdit *dX_le;
    QLabel *label_7;
    QLineEdit *dY_le;
    QLabel *label_4;
    QLineEdit *dZ_le;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QLineEdit *a_ell_le;
    QLabel *label_10;
    QLineEdit *compK_le;
    QSpacerItem *verticalSpacer;
    QPushButton *add_pb;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *CreateSC)
    {
        if (CreateSC->objectName().isEmpty())
            CreateSC->setObjectName(QString::fromUtf8("CreateSC"));
        CreateSC->resize(416, 276);
        horizontalLayout_2 = new QHBoxLayout(CreateSC);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_6 = new QLabel(CreateSC);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 20));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_6);

        name_le = new QLineEdit(CreateSC);
        name_le->setObjectName(QString::fromUtf8("name_le"));

        verticalLayout_4->addWidget(name_le);

        label = new QLabel(CreateSC);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 20));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        m_le = new QLineEdit(CreateSC);
        m_le->setObjectName(QString::fromUtf8("m_le"));

        verticalLayout_4->addWidget(m_le);


        verticalLayout_6->addLayout(verticalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_2 = new QGroupBox(CreateSC);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 20));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        wX_le = new QLineEdit(groupBox_2);
        wX_le->setObjectName(QString::fromUtf8("wX_le"));

        verticalLayout_2->addWidget(wX_le);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 20));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        wY_le = new QLineEdit(groupBox_2);
        wY_le->setObjectName(QString::fromUtf8("wY_le"));

        verticalLayout_2->addWidget(wY_le);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 20));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_8);

        wZ_le = new QLineEdit(groupBox_2);
        wZ_le->setObjectName(QString::fromUtf8("wZ_le"));

        verticalLayout_2->addWidget(wZ_le);


        horizontalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(CreateSC);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 20));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        dX_le = new QLineEdit(groupBox);
        dX_le->setObjectName(QString::fromUtf8("dX_le"));

        verticalLayout->addWidget(dX_le);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 20));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_7);

        dY_le = new QLineEdit(groupBox);
        dY_le->setObjectName(QString::fromUtf8("dY_le"));

        verticalLayout->addWidget(dY_le);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 20));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        dZ_le = new QLineEdit(groupBox);
        dZ_le->setObjectName(QString::fromUtf8("dZ_le"));

        verticalLayout->addWidget(dZ_le);


        horizontalLayout->addWidget(groupBox);


        verticalLayout_6->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_3 = new QGroupBox(CreateSC);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_9);

        a_ell_le = new QLineEdit(groupBox_3);
        a_ell_le->setObjectName(QString::fromUtf8("a_ell_le"));

        verticalLayout_3->addWidget(a_ell_le);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_10);

        compK_le = new QLineEdit(groupBox_3);
        compK_le->setObjectName(QString::fromUtf8("compK_le"));

        verticalLayout_3->addWidget(compK_le);


        verticalLayout_5->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        add_pb = new QPushButton(CreateSC);
        add_pb->setObjectName(QString::fromUtf8("add_pb"));

        verticalLayout_5->addWidget(add_pb);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_5);


        retranslateUi(CreateSC);

        QMetaObject::connectSlotsByName(CreateSC);
    } // setupUi

    void retranslateUi(QDialog *CreateSC)
    {
        CreateSC->setWindowTitle(QApplication::translate("CreateSC", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\271 \320\241\320\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CreateSC", "\320\235\320\260\320\267\320\260\320\262\320\260\320\275\320\270\320\265 \320\241\320\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CreateSC", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\275\321\213\320\271 \320\272\320\276\321\215\321\204. m, 1e-6", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("CreateSC", "\320\243\320\263\320\273\320\276\320\262\321\213\320\265 \320\272\320\276\321\215\321\204.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CreateSC", "wY, \321\203\320\263\320\273. \320\274\321\201.", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CreateSC", "wY, \321\203\320\263\320\273. \320\274\321\201.", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CreateSC", "wZ, \321\203\320\263\320\273. \320\274\321\201.", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CreateSC", "\320\233\320\270\320\275\320\265\320\271\320\275\321\213\320\265 \320\272\320\276\321\215\321\204.", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CreateSC", "dX, \320\274.", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CreateSC", "dY, \320\274.", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CreateSC", "dZ, \320\274.", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("CreateSC", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\241\320\232", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CreateSC", "\320\221\320\276\320\273\321\214\321\210\320\260\321\217 \320\277\320\276\320\273\321\203\320\276\321\201\321\214 \321\215\320\273\320\273\320\270\320\277\321\201\320\276\320\270\320\264\320\260, \320\274", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CreateSC", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 \321\201\320\266\320\260\321\202\320\270\321\217 \321\215\320\273\320\273\320\270\320\277\321\201\320\276\320\270\320\264\320\260", 0, QApplication::UnicodeUTF8));
        add_pb->setText(QApplication::translate("CreateSC", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CreateSC: public Ui_CreateSC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATESC_H
