/********************************************************************************
** Form generated from reading UI file 'tabwidgetsettings.ui'
**
** Created: Mon 13. Mar 22:23:39 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABWIDGETSETTINGS_H
#define UI_TABWIDGETSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabWidgetSettings
{
public:
    QWidget *tab;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *LE_nameAdmin;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *BT_saveNameAdmin;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *BT_cancelNameAdmin;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *LE_newPass;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *LE_repNewPass;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *BT_saveNewPass;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *BT_cancelPass;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *BT_backUP;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *BT_loadBackUP;
    QSpacerItem *horizontalSpacer_16;

    void setupUi(QTabWidget *TabWidgetSettings)
    {
        if (TabWidgetSettings->objectName().isEmpty())
            TabWidgetSettings->setObjectName(QString::fromUtf8("TabWidgetSettings"));
        TabWidgetSettings->resize(811, 510);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        groupBox_2->setCheckable(true);
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        LE_nameAdmin = new QLineEdit(groupBox_2);
        LE_nameAdmin->setObjectName(QString::fromUtf8("LE_nameAdmin"));
        LE_nameAdmin->setMinimumSize(QSize(250, 35));
        LE_nameAdmin->setMaximumSize(QSize(500, 16777215));
        LE_nameAdmin->setBaseSize(QSize(0, 0));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        LE_nameAdmin->setFont(font);
        LE_nameAdmin->setLayoutDirection(Qt::LeftToRight);
        LE_nameAdmin->setAutoFillBackground(false);
        LE_nameAdmin->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"\n"
"\n"
"	color: rgb(68, 68, 68);\n"
"    background-color: #FFF;\n"
"    border: 1px solid #2196F3;   \n"
"	border-right:0px solid #FFFFFF;\n"
"    vertical-align: middle;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"	color: #000000;\n"
"\n"
"   border-top:1px solid #FFFFFF;	\n"
"   border-left:1px solid #FFFFFF;	\n"
"   border-right:1px solid #FFFFFF;	\n"
"   border-bottom:2px solid #2196F3;  \n"
"   border-right:0px solid #FFFFFF;\n"
"}"));
        LE_nameAdmin->setMaxLength(30);
        LE_nameAdmin->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(LE_nameAdmin);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(30, 30));
        label_4->setMaximumSize(QSize(35, 35));
        QFont font1;
        font1.setStrikeOut(false);
        label_4->setFont(font1);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: #2196F3;\n"
"}"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_mail_white_2x.png")));
        label_4->setScaledContents(true);
        label_4->setIndent(0);

        horizontalLayout_5->addWidget(label_4);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_13);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(28, 43, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        BT_saveNameAdmin = new QPushButton(groupBox_2);
        BT_saveNameAdmin->setObjectName(QString::fromUtf8("BT_saveNameAdmin"));
        BT_saveNameAdmin->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" position: relative;\n"
"    padding: 7px 12px;\n"
"        padding-top: 7px;\n"
"        padding-bottom: 7px;\n"
"    font-size: 15px;\n"
"    font-family: Ubuntu;\n"
"    color: #ffffff;\n"
"    white-space: nowrap;\n"
"    background-color: rgb(0, 163, 239);\n"
"   \n"
"    border-radius: 3px;\n"
"        border-top-left-radius: 3px;\n"
"        border-top-right-radius: 3px;\n"
"        border-bottom-right-radius: 3px;\n"
"        border-bottom-left-radius: 3px;\n"
"    border: 1px solid rgb(0, 163, 239);\n"
"       \n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(11, 109, 255);\n"
"    border: 1px solid  rgb(11, 109, 255);\n"
"color: #ffffff;\n"
"\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/ic_save_white_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        BT_saveNameAdmin->setIcon(icon);
        BT_saveNameAdmin->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(BT_saveNameAdmin);

        horizontalSpacer_5 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        BT_cancelNameAdmin = new QPushButton(groupBox_2);
        BT_cancelNameAdmin->setObjectName(QString::fromUtf8("BT_cancelNameAdmin"));
        BT_cancelNameAdmin->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" position: relative;\n"
"    padding: 7px 12px;\n"
"        padding-top: 7px;\n"
"        padding-bottom: 7px;\n"
"    font-size: 15px;\n"
"    font-family: Ubuntu;\n"
"    color: #ffffff;\n"
"    white-space: nowrap;\n"
"    background-color: rgb(0, 163, 239);\n"
"   \n"
"    border-radius: 3px;\n"
"        border-top-left-radius: 3px;\n"
"        border-top-right-radius: 3px;\n"
"        border-bottom-right-radius: 3px;\n"
"        border-bottom-left-radius: 3px;\n"
"    border: 1px solid rgb(0, 163, 239);\n"
"       \n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(11, 109, 255);\n"
"    border: 1px solid  rgb(11, 109, 255);\n"
"color: #ffffff;\n"
"\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/ic_cancel_white_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        BT_cancelNameAdmin->setIcon(icon1);
        BT_cancelNameAdmin->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(BT_cancelNameAdmin);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        LE_newPass = new QLineEdit(groupBox_2);
        LE_newPass->setObjectName(QString::fromUtf8("LE_newPass"));
        LE_newPass->setMinimumSize(QSize(250, 35));
        LE_newPass->setMaximumSize(QSize(500, 16777215));
        LE_newPass->setBaseSize(QSize(0, 0));
        LE_newPass->setFont(font);
        LE_newPass->setLayoutDirection(Qt::LeftToRight);
        LE_newPass->setAutoFillBackground(false);
        LE_newPass->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"\n"
"\n"
"	color: rgb(68, 68, 68);\n"
"    background-color: #FFF;\n"
"    border: 1px solid #2196F3;   \n"
"	border-right:0px solid #FFFFFF;\n"
"    vertical-align: middle;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"	color: #000000;\n"
"\n"
"   border-top:1px solid #FFFFFF;	\n"
"   border-left:1px solid #FFFFFF;	\n"
"   border-right:1px solid #FFFFFF;	\n"
"   border-bottom:2px solid #2196F3;  \n"
"   border-right:0px solid #FFFFFF;\n"
"}"));
        LE_newPass->setMaxLength(80);
        LE_newPass->setEchoMode(QLineEdit::Password);
        LE_newPass->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(LE_newPass);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(30, 30));
        label_5->setMaximumSize(QSize(35, 35));
        label_5->setFont(font1);
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: #2196F3;\n"
"}"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_mail_white_2x.png")));
        label_5->setScaledContents(true);
        label_5->setIndent(0);

        horizontalLayout_6->addWidget(label_5);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);

        LE_repNewPass = new QLineEdit(groupBox_2);
        LE_repNewPass->setObjectName(QString::fromUtf8("LE_repNewPass"));
        LE_repNewPass->setMinimumSize(QSize(250, 35));
        LE_repNewPass->setMaximumSize(QSize(500, 16777215));
        LE_repNewPass->setBaseSize(QSize(0, 0));
        LE_repNewPass->setFont(font);
        LE_repNewPass->setLayoutDirection(Qt::LeftToRight);
        LE_repNewPass->setAutoFillBackground(false);
        LE_repNewPass->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"\n"
"\n"
"	color: rgb(68, 68, 68);\n"
"    background-color: #FFF;\n"
"    border: 1px solid #2196F3;   \n"
"	border-right:0px solid #FFFFFF;\n"
"    vertical-align: middle;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"	color: #000000;\n"
"\n"
"   border-top:1px solid #FFFFFF;	\n"
"   border-left:1px solid #FFFFFF;	\n"
"   border-right:1px solid #FFFFFF;	\n"
"   border-bottom:2px solid #2196F3;  \n"
"   border-right:0px solid #FFFFFF;\n"
"}"));
        LE_repNewPass->setMaxLength(80);
        LE_repNewPass->setEchoMode(QLineEdit::Password);
        LE_repNewPass->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(LE_repNewPass);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(30, 30));
        label_6->setMaximumSize(QSize(35, 35));
        label_6->setFont(font1);
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: #2196F3;\n"
"}"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_mail_white_2x.png")));
        label_6->setScaledContents(true);
        label_6->setIndent(0);

        horizontalLayout_7->addWidget(label_6);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_15);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        BT_saveNewPass = new QPushButton(groupBox_2);
        BT_saveNewPass->setObjectName(QString::fromUtf8("BT_saveNewPass"));
        BT_saveNewPass->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" position: relative;\n"
"    padding: 7px 12px;\n"
"        padding-top: 7px;\n"
"        padding-bottom: 7px;\n"
"    font-size: 15px;\n"
"    font-family: Ubuntu;\n"
"    color: #ffffff;\n"
"    white-space: nowrap;\n"
"    background-color: rgb(0, 163, 239);\n"
"   \n"
"    border-radius: 3px;\n"
"        border-top-left-radius: 3px;\n"
"        border-top-right-radius: 3px;\n"
"        border-bottom-right-radius: 3px;\n"
"        border-bottom-left-radius: 3px;\n"
"    border: 1px solid rgb(0, 163, 239);\n"
"       \n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(11, 109, 255);\n"
"    border: 1px solid  rgb(11, 109, 255);\n"
"color: #ffffff;\n"
"\n"
"}\n"
""));
        BT_saveNewPass->setIcon(icon);
        BT_saveNewPass->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(BT_saveNewPass);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        BT_cancelPass = new QPushButton(groupBox_2);
        BT_cancelPass->setObjectName(QString::fromUtf8("BT_cancelPass"));
        BT_cancelPass->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" position: relative;\n"
"    padding: 7px 12px;\n"
"        padding-top: 7px;\n"
"        padding-bottom: 7px;\n"
"    font-size: 15px;\n"
"    font-family: Ubuntu;\n"
"    color: #ffffff;\n"
"    white-space: nowrap;\n"
"    background-color: rgb(0, 163, 239);\n"
"   \n"
"    border-radius: 3px;\n"
"        border-top-left-radius: 3px;\n"
"        border-top-right-radius: 3px;\n"
"        border-bottom-right-radius: 3px;\n"
"        border-bottom-left-radius: 3px;\n"
"    border: 1px solid rgb(0, 163, 239);\n"
"       \n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(11, 109, 255);\n"
"    border: 1px solid  rgb(11, 109, 255);\n"
"color: #ffffff;\n"
"\n"
"}\n"
""));
        BT_cancelPass->setIcon(icon1);
        BT_cancelPass->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(BT_cancelPass);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addWidget(groupBox_2, 0, 2, 1, 1);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setAlignment(Qt::AlignCenter);
        groupBox_4->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        BT_backUP = new QPushButton(groupBox_4);
        BT_backUP->setObjectName(QString::fromUtf8("BT_backUP"));
        BT_backUP->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" position: relative;\n"
"    padding: 7px 12px;\n"
"        padding-top: 7px;\n"
"        padding-bottom: 7px;\n"
"    font-size: 15px;\n"
"    font-family: Ubuntu;\n"
"    color: #ffffff;\n"
"    white-space: nowrap;\n"
"    background-color: rgb(0, 163, 239);\n"
"   \n"
"    border-radius: 3px;\n"
"        border-top-left-radius: 3px;\n"
"        border-top-right-radius: 3px;\n"
"        border-bottom-right-radius: 3px;\n"
"        border-bottom-left-radius: 3px;\n"
"    border: 1px solid rgb(0, 163, 239);\n"
"       \n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(11, 109, 255);\n"
"    border: 1px solid  rgb(11, 109, 255);\n"
"color: #ffffff;\n"
"\n"
"}\n"
""));
        BT_backUP->setIcon(icon);
        BT_backUP->setIconSize(QSize(25, 25));

        horizontalLayout_3->addWidget(BT_backUP);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);

        BT_loadBackUP = new QPushButton(groupBox_4);
        BT_loadBackUP->setObjectName(QString::fromUtf8("BT_loadBackUP"));
        BT_loadBackUP->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" position: relative;\n"
"    padding: 7px 12px;\n"
"        padding-top: 7px;\n"
"        padding-bottom: 7px;\n"
"    font-size: 15px;\n"
"    font-family: Ubuntu;\n"
"    color: #ffffff;\n"
"    white-space: nowrap;\n"
"    background-color: rgb(0, 163, 239);\n"
"   \n"
"    border-radius: 3px;\n"
"        border-top-left-radius: 3px;\n"
"        border-top-right-radius: 3px;\n"
"        border-bottom-right-radius: 3px;\n"
"        border-bottom-left-radius: 3px;\n"
"    border: 1px solid rgb(0, 163, 239);\n"
"       \n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(11, 109, 255);\n"
"    border: 1px solid  rgb(11, 109, 255);\n"
"color: #ffffff;\n"
"\n"
"}\n"
""));
        BT_loadBackUP->setIcon(icon);
        BT_loadBackUP->setIconSize(QSize(25, 25));

        horizontalLayout_4->addWidget(BT_loadBackUP);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_16);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addWidget(groupBox_4, 0, 1, 1, 1);

        TabWidgetSettings->addTab(tab, QString());

        retranslateUi(TabWidgetSettings);

        TabWidgetSettings->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TabWidgetSettings);
    } // setupUi

    void retranslateUi(QTabWidget *TabWidgetSettings)
    {
        TabWidgetSettings->setWindowTitle(QApplication::translate("TabWidgetSettings", "TabWidget", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("TabWidgetSettings", "\330\252\330\255\330\257\331\212\330\253 \331\205\330\271\331\204\331\210\331\205\330\247\330\252 \330\247\331\204\331\205\330\263\330\252\330\256\330\257\331\205 : ", 0, QApplication::UnicodeUTF8));
        LE_nameAdmin->setPlaceholderText(QApplication::translate("TabWidgetSettings", "\330\245\330\257\330\256\330\247\331\204 \330\247\331\204\330\247\330\263\331\205 \330\247\331\204\330\254\330\257\331\212\330\257 \331\204\331\204\331\205\330\263\330\252\330\256\330\257\331\205", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        BT_saveNameAdmin->setText(QApplication::translate("TabWidgetSettings", "\330\255\331\201\330\270", 0, QApplication::UnicodeUTF8));
        BT_saveNameAdmin->setShortcut(QApplication::translate("TabWidgetSettings", "Return", 0, QApplication::UnicodeUTF8));
        BT_cancelNameAdmin->setText(QApplication::translate("TabWidgetSettings", "\330\245\331\204\330\272\330\247\330\241", 0, QApplication::UnicodeUTF8));
        BT_cancelNameAdmin->setShortcut(QApplication::translate("TabWidgetSettings", "Return", 0, QApplication::UnicodeUTF8));
        LE_newPass->setText(QString());
        LE_newPass->setPlaceholderText(QApplication::translate("TabWidgetSettings", "\330\245\330\257\330\256\330\247\331\204 \331\203\331\204\331\205\330\251 \330\247\331\204\331\205\330\261\331\210\330\261 \330\247\331\204\330\254\330\257\331\212\330\257\330\251", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        LE_repNewPass->setPlaceholderText(QApplication::translate("TabWidgetSettings", "\330\252\330\247\331\203\331\212\330\257 \331\203\331\204\331\205\330\251 \330\247\331\204\331\205\330\261\331\210\330\261", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        BT_saveNewPass->setText(QApplication::translate("TabWidgetSettings", "\330\255\331\201\330\270", 0, QApplication::UnicodeUTF8));
        BT_saveNewPass->setShortcut(QApplication::translate("TabWidgetSettings", "Return", 0, QApplication::UnicodeUTF8));
        BT_cancelPass->setText(QApplication::translate("TabWidgetSettings", "\330\245\331\204\330\272\330\247\330\241", 0, QApplication::UnicodeUTF8));
        BT_cancelPass->setShortcut(QApplication::translate("TabWidgetSettings", "Return", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("TabWidgetSettings", "\330\247\330\257\330\247\330\261\330\251 \330\247\331\204\331\205\330\271\331\204\331\210\331\205\330\247\330\252 \330\247\331\204\330\247\330\255\330\252\331\212\330\247\330\267\331\212\330\251", 0, QApplication::UnicodeUTF8));
        BT_backUP->setText(QApplication::translate("TabWidgetSettings", "\330\255\331\201\330\270", 0, QApplication::UnicodeUTF8));
        BT_backUP->setShortcut(QApplication::translate("TabWidgetSettings", "Return", 0, QApplication::UnicodeUTF8));
        BT_loadBackUP->setText(QApplication::translate("TabWidgetSettings", "\330\255\331\201\330\270", 0, QApplication::UnicodeUTF8));
        BT_loadBackUP->setShortcut(QApplication::translate("TabWidgetSettings", "Return", 0, QApplication::UnicodeUTF8));
        TabWidgetSettings->setTabText(TabWidgetSettings->indexOf(tab), QApplication::translate("TabWidgetSettings", "Tab 1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TabWidgetSettings: public Ui_TabWidgetSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABWIDGETSETTINGS_H
