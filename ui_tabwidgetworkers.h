/********************************************************************************
** Form generated from reading UI file 'tabwidgetworkers.ui'
**
** Created: Mon 13. Mar 22:23:38 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABWIDGETWORKERS_H
#define UI_TABWIDGETWORKERS_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabWidgetWorkers
{
public:
    QWidget *T_addWorker;
    QVBoxLayout *verticalLayout;
    QGroupBox *GB_addWorker;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *LE_fullNameWorker;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *LE_phoneWorker;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *LE_primeryEmailW;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_13;
    QLabel *LB_seconderyEmailW;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_9;
    QTextEdit *TE_remarke;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *BT_saveWorker;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *BT_cancelInfoW;
    QSpacerItem *horizontalSpacer_15;
    QWidget *T_updateWorker;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *GB_addClient_3;
    QVBoxLayout *verticalLayout_4;
    QWidget *widgetSearch;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *LE_fullnameFiltre;
    QLabel *label_27;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_5;
    QSpinBox *SB_idWorkerx;
    QLineEdit *LE_fullNamex;
    QLineEdit *LE_phonex;
    QLineEdit *LE_primeryEmlx;
    QTextEdit *TE_remarkex;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *BT_save_3;
    QPushButton *BT_delete;
    QTableView *tableViewWorkers;

    void setupUi(QTabWidget *TabWidgetWorkers)
    {
        if (TabWidgetWorkers->objectName().isEmpty())
            TabWidgetWorkers->setObjectName(QString::fromUtf8("TabWidgetWorkers"));
        TabWidgetWorkers->resize(975, 644);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferAntialias);
        TabWidgetWorkers->setFont(font);
        TabWidgetWorkers->setCursor(QCursor(Qt::ArrowCursor));
        TabWidgetWorkers->setAutoFillBackground(false);
        TabWidgetWorkers->setStyleSheet(QString::fromUtf8("QTabWidget{\n"
"border:0px solid white;\n"
"\n"
"	color: rgb(0, 179, 255);\n"
"}"));
        TabWidgetWorkers->setTabPosition(QTabWidget::East);
        TabWidgetWorkers->setTabShape(QTabWidget::Rounded);
        TabWidgetWorkers->setIconSize(QSize(30, 30));
        TabWidgetWorkers->setElideMode(Qt::ElideRight);
        TabWidgetWorkers->setTabsClosable(false);
        TabWidgetWorkers->setMovable(false);
        T_addWorker = new QWidget();
        T_addWorker->setObjectName(QString::fromUtf8("T_addWorker"));
        T_addWorker->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border:0px solid white;\n"
"}"));
        verticalLayout = new QVBoxLayout(T_addWorker);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        GB_addWorker = new QGroupBox(T_addWorker);
        GB_addWorker->setObjectName(QString::fromUtf8("GB_addWorker"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(false);
        GB_addWorker->setFont(font1);
        GB_addWorker->setLayoutDirection(Qt::LeftToRight);
        GB_addWorker->setAutoFillBackground(false);
        GB_addWorker->setStyleSheet(QString::fromUtf8("QGroupeBox{\n"
"border:0px solid white;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 163, 239);\n"
"\n"
"}"));
        GB_addWorker->setAlignment(Qt::AlignCenter);
        verticalLayout_3 = new QVBoxLayout(GB_addWorker);
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 30, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        LE_fullNameWorker = new QLineEdit(GB_addWorker);
        LE_fullNameWorker->setObjectName(QString::fromUtf8("LE_fullNameWorker"));
        LE_fullNameWorker->setMinimumSize(QSize(250, 35));
        LE_fullNameWorker->setMaximumSize(QSize(500, 16777215));
        LE_fullNameWorker->setBaseSize(QSize(0, 0));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        LE_fullNameWorker->setFont(font2);
        LE_fullNameWorker->setLayoutDirection(Qt::LeftToRight);
        LE_fullNameWorker->setAutoFillBackground(false);
        LE_fullNameWorker->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        LE_fullNameWorker->setMaxLength(40);
        LE_fullNameWorker->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(LE_fullNameWorker);

        label_2 = new QLabel(GB_addWorker);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(30, 30));
        label_2->setMaximumSize(QSize(35, 35));
        QFont font3;
        font3.setStrikeOut(false);
        label_2->setFont(font3);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: #2196F3;\n"
"}"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_perm_identity_white_2x.png")));
        label_2->setScaledContents(true);
        label_2->setIndent(0);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        LE_phoneWorker = new QLineEdit(GB_addWorker);
        LE_phoneWorker->setObjectName(QString::fromUtf8("LE_phoneWorker"));
        LE_phoneWorker->setMinimumSize(QSize(250, 35));
        LE_phoneWorker->setMaximumSize(QSize(500, 16777215));
        LE_phoneWorker->setBaseSize(QSize(0, 0));
        LE_phoneWorker->setFont(font2);
        LE_phoneWorker->setLayoutDirection(Qt::LeftToRight);
        LE_phoneWorker->setAutoFillBackground(false);
        LE_phoneWorker->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        LE_phoneWorker->setMaxLength(32767);
        LE_phoneWorker->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(LE_phoneWorker);

        label_3 = new QLabel(GB_addWorker);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(30, 30));
        label_3->setMaximumSize(QSize(35, 35));
        label_3->setFont(font3);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: #2196F3;\n"
"}"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_phone_android_white_2x.png")));
        label_3->setScaledContents(true);
        label_3->setIndent(0);

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        LE_primeryEmailW = new QLineEdit(GB_addWorker);
        LE_primeryEmailW->setObjectName(QString::fromUtf8("LE_primeryEmailW"));
        LE_primeryEmailW->setMinimumSize(QSize(250, 35));
        LE_primeryEmailW->setMaximumSize(QSize(500, 16777215));
        LE_primeryEmailW->setBaseSize(QSize(0, 0));
        LE_primeryEmailW->setFont(font2);
        LE_primeryEmailW->setLayoutDirection(Qt::LeftToRight);
        LE_primeryEmailW->setAutoFillBackground(false);
        LE_primeryEmailW->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        LE_primeryEmailW->setMaxLength(80);
        LE_primeryEmailW->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(LE_primeryEmailW);

        label_4 = new QLabel(GB_addWorker);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(30, 30));
        label_4->setMaximumSize(QSize(35, 35));
        label_4->setFont(font3);
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


        verticalLayout_3->addLayout(horizontalLayout_5);

        LB_seconderyEmailW = new QLabel(GB_addWorker);
        LB_seconderyEmailW->setObjectName(QString::fromUtf8("LB_seconderyEmailW"));
        LB_seconderyEmailW->setFont(font2);
        LB_seconderyEmailW->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"\n"
"	color: rgb(0, 163, 239);\n"
"}"));
        LB_seconderyEmailW->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(LB_seconderyEmailW);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        TE_remarke = new QTextEdit(GB_addWorker);
        TE_remarke->setObjectName(QString::fromUtf8("TE_remarke"));
        TE_remarke->setMinimumSize(QSize(285, 0));
        TE_remarke->setMaximumSize(QSize(535, 16777215));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        TE_remarke->setFont(font4);
        TE_remarke->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        TE_remarke->setLayoutDirection(Qt::LeftToRight);
        TE_remarke->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"\n"
"  height:20px;\n"
"	color: rgb(68, 68, 68);\n"
"\n"
"    background-color: #FFF;\n"
"    border: 1px solid #2196F3;\n"
"    vertical-align: middle;\n"
"}\n"
"QTextEdit:hover\n"
"{\n"
"	color: #000000;\n"
"   border-top:1px solid #FFFFFF;	\n"
"   border-left:1px solid #FFFFFF;	\n"
"   border-right:1px solid #FFFFFF;	\n"
"   border-bottom:2px solid #2196F3;\n"
"   border-right:2px solid #2196F3;\n"
"   border-left:2px solid #2196F3;\n"
"\n"
"}\n"
""));

        horizontalLayout_7->addWidget(TE_remarke);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BT_saveWorker = new QPushButton(GB_addWorker);
        BT_saveWorker->setObjectName(QString::fromUtf8("BT_saveWorker"));
        BT_saveWorker->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        BT_saveWorker->setIcon(icon);
        BT_saveWorker->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(BT_saveWorker);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        BT_cancelInfoW = new QPushButton(GB_addWorker);
        BT_cancelInfoW->setObjectName(QString::fromUtf8("BT_cancelInfoW"));
        BT_cancelInfoW->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" position: relative;\n"
"    padding: 7px 12px;\n"
"        padding-top: 7px;\n"
"        padding-bottom: 7px;\n"
"    font-size: 15px;\n"
"    font-family: Ubuntu;\n"
"    color: #ffffff;\n"
"    white-space: nowrap;\n"
"    background-color:#455A64;\n"
"   \n"
"    border-radius: 3px;\n"
"        border-top-left-radius: 3px;\n"
"        border-top-right-radius: 3px;\n"
"        border-bottom-right-radius: 3px;\n"
"        border-bottom-left-radius: 3px;\n"
"    border: 1px solid #455A64;\n"
"       \n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color:#37474F;\n"
"    border: 1px solid #37474F;\n"
"color: #ffffff;\n"
"\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/ic_cancel_white_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        BT_cancelInfoW->setIcon(icon1);
        BT_cancelInfoW->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(BT_cancelInfoW);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_15);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addWidget(GB_addWorker);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/ic_add_circle_outline_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        TabWidgetWorkers->addTab(T_addWorker, icon2, QString());
        T_updateWorker = new QWidget();
        T_updateWorker->setObjectName(QString::fromUtf8("T_updateWorker"));
        T_updateWorker->setStyleSheet(QString::fromUtf8("Qwidget{\n"
"border:0px solid white;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(T_updateWorker);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        GB_addClient_3 = new QGroupBox(T_updateWorker);
        GB_addClient_3->setObjectName(QString::fromUtf8("GB_addClient_3"));
        GB_addClient_3->setFont(font1);
        GB_addClient_3->setLayoutDirection(Qt::RightToLeft);
        GB_addClient_3->setAutoFillBackground(false);
        GB_addClient_3->setStyleSheet(QString::fromUtf8("QGroupeBox{\n"
"border:1px solid white;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 163, 239);\n"
"\n"
"}"));
        GB_addClient_3->setAlignment(Qt::AlignCenter);
        GB_addClient_3->setFlat(true);
        GB_addClient_3->setCheckable(false);
        verticalLayout_4 = new QVBoxLayout(GB_addClient_3);
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widgetSearch = new QWidget(GB_addClient_3);
        widgetSearch->setObjectName(QString::fromUtf8("widgetSearch"));
        widgetSearch->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:#D32F2F;\n"
"}"));
        horizontalLayout_8 = new QHBoxLayout(widgetSearch);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(15, 10, 15, 10);
        LE_fullnameFiltre = new QLineEdit(widgetSearch);
        LE_fullnameFiltre->setObjectName(QString::fromUtf8("LE_fullnameFiltre"));
        LE_fullnameFiltre->setFont(font2);
        LE_fullnameFiltre->setLayoutDirection(Qt::LeftToRight);
        LE_fullnameFiltre->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
" margin-bottom: 2px;   \n"
"    padding: 7px 8px;\n"
"        padding-top: 7px;\n"
"        padding-bottom: 7px;\n"
"    outline: medium none;\n"
"        outline-width: medium;\n"
"        outline-style: none;\n"
"        outline-color: -moz-use-text-color;\n"
"\n"
"    background-color: #C62828;\n"
"color:white;\n"
"    border: 1px solid #C62828;\n"
"      \n"
"    border-radius: 3px;\n"
"        border-top-left-radius: 3px;\n"
"        border-top-right-radius: 3px;\n"
"        border-bottom-right-radius: 3px;\n"
"        border-bottom-left-radius: 3px;\n"
"    vertical-align: middle;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"	 border: 1px solid #C62828;\n"
"	 border-top-color: #C62828;\n"
"     border-bottom-color: #C62828;  \n"
"\n"
"}"));
        LE_fullnameFiltre->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(LE_fullnameFiltre);

        label_27 = new QLabel(widgetSearch);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMaximumSize(QSize(35, 35));
        label_27->setBaseSize(QSize(0, 0));
        label_27->setLayoutDirection(Qt::LeftToRight);
        label_27->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_search_white_2x.png")));
        label_27->setScaledContents(true);
        label_27->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_27);


        verticalLayout_4->addWidget(widgetSearch);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(7);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(4, -1, 7, -1);
        SB_idWorkerx = new QSpinBox(GB_addClient_3);
        SB_idWorkerx->setObjectName(QString::fromUtf8("SB_idWorkerx"));
        SB_idWorkerx->setMaximumSize(QSize(250, 16777215));

        verticalLayout_5->addWidget(SB_idWorkerx);

        LE_fullNamex = new QLineEdit(GB_addClient_3);
        LE_fullNamex->setObjectName(QString::fromUtf8("LE_fullNamex"));
        LE_fullNamex->setMinimumSize(QSize(0, 30));
        LE_fullNamex->setMaximumSize(QSize(250, 16777215));
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(true);
        font5.setWeight(75);
        LE_fullNamex->setFont(font5);
        LE_fullNamex->setLayoutDirection(Qt::RightToLeft);
        LE_fullNamex->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"\n"
"\n"
"	color: rgb(68, 68, 68);\n"
"    background-color: #FFF;\n"
"    border: 1px solid #2196F3;   \n"
"\n"
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
"\n"
"}"));
        LE_fullNamex->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(LE_fullNamex);

        LE_phonex = new QLineEdit(GB_addClient_3);
        LE_phonex->setObjectName(QString::fromUtf8("LE_phonex"));
        LE_phonex->setMinimumSize(QSize(0, 30));
        LE_phonex->setMaximumSize(QSize(250, 16777215));
        LE_phonex->setFont(font5);
        LE_phonex->setLayoutDirection(Qt::RightToLeft);
        LE_phonex->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"\n"
"\n"
"	color: rgb(68, 68, 68);\n"
"    background-color: #FFF;\n"
"    border: 1px solid #2196F3;   \n"
"\n"
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
"\n"
"}"));
        LE_phonex->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(LE_phonex);

        LE_primeryEmlx = new QLineEdit(GB_addClient_3);
        LE_primeryEmlx->setObjectName(QString::fromUtf8("LE_primeryEmlx"));
        LE_primeryEmlx->setMinimumSize(QSize(0, 30));
        LE_primeryEmlx->setMaximumSize(QSize(250, 16777215));
        LE_primeryEmlx->setFont(font5);
        LE_primeryEmlx->setLayoutDirection(Qt::RightToLeft);
        LE_primeryEmlx->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"\n"
"\n"
"	color: rgb(68, 68, 68);\n"
"    background-color: #FFF;\n"
"    border: 1px solid #2196F3;   \n"
"\n"
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
"\n"
"}"));
        LE_primeryEmlx->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(LE_primeryEmlx);

        TE_remarkex = new QTextEdit(GB_addClient_3);
        TE_remarkex->setObjectName(QString::fromUtf8("TE_remarkex"));
        TE_remarkex->setMaximumSize(QSize(250, 16777215));
        TE_remarkex->setFont(font5);
        TE_remarkex->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"\n"
"  height:20px;\n"
"	color: rgb(68, 68, 68);\n"
"\n"
"    background-color: #FFF;\n"
"    border: 1px solid #2196F3;   \n"
"    vertical-align: middle;\n"
"}\n"
"QTextEdit:hover\n"
"{\n"
"	color: #000000;\n"
"   border-top:1px solid #FFFFFF;	\n"
"   border-left:1px solid #FFFFFF;	\n"
"   border-right:1px solid #FFFFFF;	\n"
"   border-bottom:2px solid #2196F3;  \n"
"   border-right:2px solid #2196F3; \n"
"   border-left:2px solid #2196F3;\n"
"\n"
"}"));

        verticalLayout_5->addWidget(TE_remarkex);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        BT_save_3 = new QPushButton(GB_addClient_3);
        BT_save_3->setObjectName(QString::fromUtf8("BT_save_3"));
        BT_save_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        BT_save_3->setIcon(icon);
        BT_save_3->setIconSize(QSize(25, 25));

        horizontalLayout_3->addWidget(BT_save_3);

        BT_delete = new QPushButton(GB_addClient_3);
        BT_delete->setObjectName(QString::fromUtf8("BT_delete"));
        BT_delete->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" position: relative;\n"
"    padding: 7px 12px;\n"
"        padding-top: 7px;\n"
"        padding-bottom: 7px;\n"
"    font-size: 15px;\n"
"    font-family: Ubuntu;\n"
"    color: #ffffff;\n"
"    white-space: nowrap;\n"
"    background-color:#D32F2F;\n"
"    border-radius: 3px;\n"
"        border-top-left-radius: 3px;\n"
"        border-top-right-radius: 3px;\n"
"        border-bottom-right-radius: 3px;\n"
"        border-bottom-left-radius: 3px;\n"
"    border: 1px solid #D32F2F;\n"
"       \n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color:#C62828;\n"
"    border: 1px solid #C62828;\n"
"color: #ffffff;\n"
"\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/ic_delete_forever_white_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        BT_delete->setIcon(icon3);
        BT_delete->setIconSize(QSize(25, 25));

        horizontalLayout_3->addWidget(BT_delete);


        verticalLayout_5->addLayout(horizontalLayout_3);


        horizontalLayout_9->addLayout(verticalLayout_5);

        tableViewWorkers = new QTableView(GB_addClient_3);
        tableViewWorkers->setObjectName(QString::fromUtf8("tableViewWorkers"));
        tableViewWorkers->setMinimumSize(QSize(700, 0));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Arial"));
        tableViewWorkers->setFont(font6);
        tableViewWorkers->setStyleSheet(QString::fromUtf8("QTableView\n"
"{\n"
" margin-bottom: 2px;   \n"
"    padding: 7px 8px;\n"
"        padding-top: 7px;\n"
"        padding-bottom: 7px;\n"
"    outline: medium none;\n"
"        outline-width: medium;\n"
"        outline-style: none;\n"
"        outline-color: -moz-use-text-color;\n"
"    color: #333;\n"
"    background-color: #FFF;\n"
"    background-repeat: no-repeat;\n"
"    background-position: right center;\n"
"    border: 1px solid #c5c5c5;\n"
"        border-top-width: 1px;\n"
"        border-bottom-width: 1px;\n"
"        border-top-style: solid;\n"
"        border-bottom-style: solid;\n"
"        border-top-color: #c5c5c5;\n"
"        border-bottom-color: #c5c5c5;      \n"
"    border-radius: 3px;\n"
"        border-top-left-radius: 3px;\n"
"        border-top-right-radius: 3px;\n"
"        border-bottom-right-radius: 3px;\n"
"        border-bottom-left-radius: 3px;\n"
"    vertical-align: middle;\n"
"}\n"
"QTableView:hover\n"
"{\n"
"	 border: 1px solid #00bbff;\n"
"	 border-top-color: #00bbff;\n"
"    "
                        "    border-bottom-color: #00bbff;  \n"
"\n"
"}"));
        tableViewWorkers->setLocale(QLocale(QLocale::Arabic, QLocale::SaudiArabia));

        horizontalLayout_9->addWidget(tableViewWorkers);


        verticalLayout_4->addLayout(horizontalLayout_9);


        verticalLayout_2->addWidget(GB_addClient_3);

        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/ic_update_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        TabWidgetWorkers->addTab(T_updateWorker, icon4, QString());

        retranslateUi(TabWidgetWorkers);

        TabWidgetWorkers->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TabWidgetWorkers);
    } // setupUi

    void retranslateUi(QTabWidget *TabWidgetWorkers)
    {
        TabWidgetWorkers->setWindowTitle(QApplication::translate("TabWidgetWorkers", "TabWidget", 0, QApplication::UnicodeUTF8));
        GB_addWorker->setTitle(QApplication::translate("TabWidgetWorkers", "\330\247\330\266\330\247\331\201\330\251 \331\205\331\210\330\270\331\201", 0, QApplication::UnicodeUTF8));
        LE_fullNameWorker->setPlaceholderText(QApplication::translate("TabWidgetWorkers", "\330\245\330\263\331\205 \330\247\331\204\331\205\331\210\330\270\331\201", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        LE_phoneWorker->setInputMask(QString());
        LE_phoneWorker->setPlaceholderText(QApplication::translate("TabWidgetWorkers", "           \330\261\331\202\331\205 \330\247\331\204\331\207\330\247\330\252\331\201 \330\247\331\204\330\256\330\247\330\265 \330\250\330\247\331\204\331\205\331\210\330\270\331\201", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        LE_primeryEmailW->setPlaceholderText(QApplication::translate("TabWidgetWorkers", "\330\247\331\204\330\250\330\261\331\212\331\200\331\200\330\257 \330\247\331\204\330\245\331\204\331\203\330\252\330\261\331\210\331\206\331\212 ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        LB_seconderyEmailW->setText(QApplication::translate("TabWidgetWorkers", "\331\205\331\204\330\247\330\255\330\270\330\247\330\252", 0, QApplication::UnicodeUTF8));
        BT_saveWorker->setText(QApplication::translate("TabWidgetWorkers", "\330\255\331\201\330\270", 0, QApplication::UnicodeUTF8));
        BT_saveWorker->setShortcut(QApplication::translate("TabWidgetWorkers", "Return", 0, QApplication::UnicodeUTF8));
        BT_cancelInfoW->setText(QApplication::translate("TabWidgetWorkers", "\330\245\331\204\330\272\331\200\331\200\330\247\330\241", 0, QApplication::UnicodeUTF8));
        TabWidgetWorkers->setTabText(TabWidgetWorkers->indexOf(T_addWorker), QApplication::translate("TabWidgetWorkers", "\330\245\330\266\330\247\331\201\330\251 \331\205\331\210\330\270\331\201/\331\203\330\247\330\252\331\200\331\200\330\250", 0, QApplication::UnicodeUTF8));
        GB_addClient_3->setTitle(QString());
        LE_fullnameFiltre->setPlaceholderText(QApplication::translate("TabWidgetWorkers", "\330\247\330\257\330\256\330\247\331\204 \330\247\330\263\331\205 \330\247\331\204\331\205\331\210\330\270\331\201 \330\247\331\204\331\205\330\261\330\247\330\257 \330\247\331\204\330\250\330\255\330\253 \330\271\331\206\331\207", 0, QApplication::UnicodeUTF8));
        label_27->setText(QString());
        LE_fullNamex->setPlaceholderText(QApplication::translate("TabWidgetWorkers", "\330\247\330\263\331\205 \330\247\331\204\331\205\331\210\330\270\331\201", 0, QApplication::UnicodeUTF8));
        LE_phonex->setPlaceholderText(QApplication::translate("TabWidgetWorkers", "\330\261\331\202\331\205 \331\207\330\247\330\252\331\201 \330\247\331\204\331\205\331\210\330\270\331\201", 0, QApplication::UnicodeUTF8));
        LE_primeryEmlx->setPlaceholderText(QApplication::translate("TabWidgetWorkers", "\330\247\331\204\330\250\330\261\331\212\330\257 \330\247\331\204\330\247\331\204\331\203\330\252\331\200\330\261\331\210\331\206\331\212", 0, QApplication::UnicodeUTF8));
        BT_save_3->setText(QApplication::translate("TabWidgetWorkers", "\330\255\331\201\330\270", 0, QApplication::UnicodeUTF8));
        BT_save_3->setShortcut(QApplication::translate("TabWidgetWorkers", "Return", 0, QApplication::UnicodeUTF8));
        BT_delete->setText(QApplication::translate("TabWidgetWorkers", "\330\255\330\260\331\201", 0, QApplication::UnicodeUTF8));
        BT_delete->setShortcut(QApplication::translate("TabWidgetWorkers", "Del", 0, QApplication::UnicodeUTF8));
        TabWidgetWorkers->setTabText(TabWidgetWorkers->indexOf(T_updateWorker), QApplication::translate("TabWidgetWorkers", "\330\252\330\271\330\257\331\212\331\204 \331\205\330\271\331\204\331\210\331\205\330\247\330\252 \330\247\331\204\331\205\331\210\330\270\331\201\331\212\331\206 / \330\247\331\204\330\271\330\247\331\205\331\204", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TabWidgetWorkers: public Ui_TabWidgetWorkers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABWIDGETWORKERS_H
