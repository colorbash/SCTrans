/********************************************************************************
** Form generated from reading UI file 'sctrans.ui'
**
** Created: Tue 22. Aug 17:01:33 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCTRANS_H
#define UI_SCTRANS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SCTransClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_12;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *setStartSC_pb;
    QLineEdit *startSC_le_name;
    QComboBox *startSC_input_cb;
    QHBoxLayout *horizontalLayout;
    QLabel *startSC_lb1;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *startSC_le1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *startSC_lb2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *startSC_le2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *startSC_lb3;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *startSC_le3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *transf_pb;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer;
    QPushButton *back_pb;
    QToolButton *settings_pb;
    QPushButton *forward_pb;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *clear_pb;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *setEndSC_pb;
    QLineEdit *endSC_le_name;
    QComboBox *endSC_input_cb;
    QHBoxLayout *horizontalLayout_4;
    QLabel *endSC_lb1;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *endSC_le1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *endSC_lb2;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *endSC_le2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *endSC_lb3;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *endSC_le3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SCTransClass)
    {
        if (SCTransClass->objectName().isEmpty())
            SCTransClass->setObjectName(QString::fromUtf8("SCTransClass"));
        SCTransClass->resize(633, 243);
        centralWidget = new QWidget(SCTransClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_12 = new QHBoxLayout(centralWidget);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        horizontalLayout_7 = new QHBoxLayout(groupBox);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        setStartSC_pb = new QPushButton(groupBox);
        setStartSC_pb->setObjectName(QString::fromUtf8("setStartSC_pb"));

        horizontalLayout_9->addWidget(setStartSC_pb);

        startSC_le_name = new QLineEdit(groupBox);
        startSC_le_name->setObjectName(QString::fromUtf8("startSC_le_name"));
        startSC_le_name->setReadOnly(true);

        horizontalLayout_9->addWidget(startSC_le_name);


        verticalLayout_5->addLayout(horizontalLayout_9);

        startSC_input_cb = new QComboBox(groupBox);
        startSC_input_cb->setObjectName(QString::fromUtf8("startSC_input_cb"));

        verticalLayout_5->addWidget(startSC_input_cb);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        startSC_lb1 = new QLabel(groupBox);
        startSC_lb1->setObjectName(QString::fromUtf8("startSC_lb1"));

        horizontalLayout->addWidget(startSC_lb1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        startSC_le1 = new QLineEdit(groupBox);
        startSC_le1->setObjectName(QString::fromUtf8("startSC_le1"));

        horizontalLayout->addWidget(startSC_le1);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        startSC_lb2 = new QLabel(groupBox);
        startSC_lb2->setObjectName(QString::fromUtf8("startSC_lb2"));

        horizontalLayout_2->addWidget(startSC_lb2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        startSC_le2 = new QLineEdit(groupBox);
        startSC_le2->setObjectName(QString::fromUtf8("startSC_le2"));

        horizontalLayout_2->addWidget(startSC_le2);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        startSC_lb3 = new QLabel(groupBox);
        startSC_lb3->setObjectName(QString::fromUtf8("startSC_lb3"));

        horizontalLayout_3->addWidget(startSC_lb3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        startSC_le3 = new QLineEdit(groupBox);
        startSC_le3->setObjectName(QString::fromUtf8("startSC_le3"));

        horizontalLayout_3->addWidget(startSC_le3);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_5);


        horizontalLayout_7->addLayout(verticalLayout_3);


        horizontalLayout_12->addWidget(groupBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        transf_pb = new QPushButton(centralWidget);
        transf_pb->setObjectName(QString::fromUtf8("transf_pb"));

        verticalLayout_2->addWidget(transf_pb);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        back_pb = new QPushButton(centralWidget);
        back_pb->setObjectName(QString::fromUtf8("back_pb"));

        horizontalLayout_11->addWidget(back_pb);

        settings_pb = new QToolButton(centralWidget);
        settings_pb->setObjectName(QString::fromUtf8("settings_pb"));

        horizontalLayout_11->addWidget(settings_pb);

        forward_pb = new QPushButton(centralWidget);
        forward_pb->setObjectName(QString::fromUtf8("forward_pb"));

        horizontalLayout_11->addWidget(forward_pb);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_11);

        clear_pb = new QPushButton(centralWidget);
        clear_pb->setObjectName(QString::fromUtf8("clear_pb"));

        verticalLayout_2->addWidget(clear_pb);


        horizontalLayout_12->addLayout(verticalLayout_2);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        horizontalLayout_8 = new QHBoxLayout(groupBox_2);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        setEndSC_pb = new QPushButton(groupBox_2);
        setEndSC_pb->setObjectName(QString::fromUtf8("setEndSC_pb"));

        horizontalLayout_10->addWidget(setEndSC_pb);

        endSC_le_name = new QLineEdit(groupBox_2);
        endSC_le_name->setObjectName(QString::fromUtf8("endSC_le_name"));
        endSC_le_name->setReadOnly(true);

        horizontalLayout_10->addWidget(endSC_le_name);


        verticalLayout->addLayout(horizontalLayout_10);

        endSC_input_cb = new QComboBox(groupBox_2);
        endSC_input_cb->setObjectName(QString::fromUtf8("endSC_input_cb"));

        verticalLayout->addWidget(endSC_input_cb);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        endSC_lb1 = new QLabel(groupBox_2);
        endSC_lb1->setObjectName(QString::fromUtf8("endSC_lb1"));

        horizontalLayout_4->addWidget(endSC_lb1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        endSC_le1 = new QLineEdit(groupBox_2);
        endSC_le1->setObjectName(QString::fromUtf8("endSC_le1"));
        endSC_le1->setReadOnly(true);

        horizontalLayout_4->addWidget(endSC_le1);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        endSC_lb2 = new QLabel(groupBox_2);
        endSC_lb2->setObjectName(QString::fromUtf8("endSC_lb2"));

        horizontalLayout_5->addWidget(endSC_lb2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        endSC_le2 = new QLineEdit(groupBox_2);
        endSC_le2->setObjectName(QString::fromUtf8("endSC_le2"));
        endSC_le2->setReadOnly(true);

        horizontalLayout_5->addWidget(endSC_le2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        endSC_lb3 = new QLabel(groupBox_2);
        endSC_lb3->setObjectName(QString::fromUtf8("endSC_lb3"));

        horizontalLayout_6->addWidget(endSC_lb3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        endSC_le3 = new QLineEdit(groupBox_2);
        endSC_le3->setObjectName(QString::fromUtf8("endSC_le3"));
        endSC_le3->setReadOnly(true);

        horizontalLayout_6->addWidget(endSC_le3);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_4->addLayout(verticalLayout);


        horizontalLayout_8->addLayout(verticalLayout_4);


        horizontalLayout_12->addWidget(groupBox_2);

        SCTransClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SCTransClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 633, 21));
        SCTransClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SCTransClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SCTransClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SCTransClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SCTransClass->setStatusBar(statusBar);

        retranslateUi(SCTransClass);

        QMetaObject::connectSlotsByName(SCTransClass);
    } // setupUi

    void retranslateUi(QMainWindow *SCTransClass)
    {
        SCTransClass->setWindowTitle(QApplication::translate("SCTransClass", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\277\320\265\321\200\320\265\321\205\320\276\320\264\320\260 \320\274\320\265\320\266\320\264\321\203 \320\267\320\265\320\274\320\275\321\213\320\274\320\270 \321\201\320\270\321\201\321\202\320\265\320\274\320\260\320\274\320\270 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202 ", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SCTransClass", "\320\230\321\201\321\205\320\276\320\264\320\275\320\260\321\217 \320\241\320\232", 0, QApplication::UnicodeUTF8));
        setStartSC_pb->setText(QApplication::translate("SCTransClass", "\320\227\320\260\320\264\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        startSC_input_cb->clear();
        startSC_input_cb->insertItems(0, QStringList()
         << QApplication::translate("SCTransClass", "X, Y, Z (\320\237\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\321\213\320\265 \320\272\320\276\320\276\321\200\320\264.)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SCTransClass", "B, L, H (\320\223\320\265\320\276\320\264\320\265\320\267\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\272\320\276\320\276\321\200\320\264.)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SCTransClass", "R, F, L (\320\241\321\204\320\265\321\200\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\272\320\276\320\276\321\200\320\264.)", 0, QApplication::UnicodeUTF8)
        );
        startSC_lb1->setText(QApplication::translate("SCTransClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        startSC_lb2->setText(QApplication::translate("SCTransClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        startSC_lb3->setText(QApplication::translate("SCTransClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        transf_pb->setText(QString());
        back_pb->setText(QString());
        settings_pb->setText(QApplication::translate("SCTransClass", "...", 0, QApplication::UnicodeUTF8));
        forward_pb->setText(QString());
        clear_pb->setText(QApplication::translate("SCTransClass", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("SCTransClass", "\320\230\321\202\320\276\320\263\320\276\320\262\320\260\321\217 \320\241\320\232", 0, QApplication::UnicodeUTF8));
        setEndSC_pb->setText(QApplication::translate("SCTransClass", "\320\227\320\260\320\264\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        endSC_input_cb->clear();
        endSC_input_cb->insertItems(0, QStringList()
         << QApplication::translate("SCTransClass", "X, Y, Z (\320\237\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\321\213\320\265 \320\272\320\276\320\276\321\200\320\264.)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SCTransClass", "B, L, H (\320\223\320\265\320\276\320\264\320\265\320\267\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\272\320\276\320\276\321\200\320\264.)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SCTransClass", "R, F, L (\320\241\321\204\320\265\321\200\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\272\320\276\320\276\321\200\320\264.)", 0, QApplication::UnicodeUTF8)
        );
        endSC_lb1->setText(QApplication::translate("SCTransClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        endSC_lb2->setText(QApplication::translate("SCTransClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        endSC_lb3->setText(QApplication::translate("SCTransClass", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SCTransClass: public Ui_SCTransClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCTRANS_H
