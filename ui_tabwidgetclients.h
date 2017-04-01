/********************************************************************************
** Form generated from reading UI file 'tabwidgetclients.ui'
**
** Created: Mon 13. Mar 22:23:38 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABWIDGETCLIENTS_H
#define UI_TABWIDGETCLIENTS_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabWidgetClients
{
public:
    QWidget *T_addClient;
    QVBoxLayout *verticalLayout;
    QGroupBox *GB_addClient;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLineEdit *LE_fullnameClient;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QLineEdit *LE_titleDoc;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_9;
    QLineEdit *LE_primaryEmail;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_8;
    QLineEdit *LE_phoneNumber;
    QSpacerItem *horizontalSpacer_16;
    QVBoxLayout *verticalLayout_2;
    QLabel *LB_languageDoc;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QComboBox *CB_langDoc;
    QSpacerItem *horizontalSpacer_12;
    QLabel *LB_totalPages;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_5;
    QSpinBox *SB_nbrPagesDoc;
    QSpacerItem *horizontalSpacer_13;
    QLabel *LB_depositeDay;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_6;
    QDateEdit *DE_deposite;
    QSpacerItem *horizontalSpacer_14;
    QLabel *LB_deliveryDay;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_7;
    QDateEdit *DE_delivery;
    QSpacerItem *horizontalSpacer_15;
    QVBoxLayout *verticalLayout_4;
    QLabel *LB_deliveryDay_2;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_21;
    QTextEdit *TE_remarke;
    QSpacerItem *horizontalSpacer_20;
    QHBoxLayout *horizontalLayout_4;
    QSplitter *splitter_3;
    QSplitter *splitter_4;
    QLabel *label_10;
    QSpinBox *SB_price;
    QLabel *LB_price;
    QSplitter *splitter_2;
    QComboBox *CB_payementState;
    QLabel *LB_payementState;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *BT_cancel_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *BT_save;
    QSpacerItem *horizontalSpacer_2;
    QWidget *T_updateClient;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *GB_addClient_3;
    QVBoxLayout *verticalLayout_6;
    QWidget *widgetSearch;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_28;
    QLineEdit *LE_fullnameFiltre;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_5;
    QSpinBox *SB_idClientx;
    QLineEdit *LE_fullNamex;
    QLineEdit *LE_phonex;
    QLineEdit *LE_primeryEmlx;
    QSpinBox *SB_pricex;
    QComboBox *CB_paymentStatsx;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *LY_updateClient;
    QPushButton *Bt_deleteClient;
    QPushButton *BT_save_3;
    QSplitter *splitter_10;
    QSplitter *splitter_11;
    QSplitter *splitter_12;

    void setupUi(QTabWidget *TabWidgetClients)
    {
        if (TabWidgetClients->objectName().isEmpty())
            TabWidgetClients->setObjectName(QString::fromUtf8("TabWidgetClients"));
        TabWidgetClients->resize(901, 631);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        TabWidgetClients->setFont(font);
        TabWidgetClients->setLayoutDirection(Qt::LeftToRight);
        TabWidgetClients->setStyleSheet(QString::fromUtf8("QTabWidget{\n"
"border:0px solid white;\n"
"}"));
        TabWidgetClients->setTabPosition(QTabWidget::East);
        TabWidgetClients->setTabShape(QTabWidget::Rounded);
        TabWidgetClients->setIconSize(QSize(30, 30));
        TabWidgetClients->setElideMode(Qt::ElideNone);
        T_addClient = new QWidget();
        T_addClient->setObjectName(QString::fromUtf8("T_addClient"));
        verticalLayout = new QVBoxLayout(T_addClient);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        GB_addClient = new QGroupBox(T_addClient);
        GB_addClient->setObjectName(QString::fromUtf8("GB_addClient"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        GB_addClient->setFont(font1);
        GB_addClient->setLayoutDirection(Qt::RightToLeft);
        GB_addClient->setAutoFillBackground(false);
        GB_addClient->setStyleSheet(QString::fromUtf8("QGroupeBox\n"
"{\n"
"background-color:#fafafa;\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(GB_addClient);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_2 = new QLabel(GB_addClient);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(30, 30));
        label_2->setMaximumSize(QSize(35, 35));
        QFont font2;
        font2.setStrikeOut(false);
        label_2->setFont(font2);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: #2196F3;\n"
"}"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_perm_identity_white_2x.png")));
        label_2->setScaledContents(true);
        label_2->setIndent(0);

        horizontalLayout_3->addWidget(label_2);

        LE_fullnameClient = new QLineEdit(GB_addClient);
        LE_fullnameClient->setObjectName(QString::fromUtf8("LE_fullnameClient"));
        LE_fullnameClient->setMinimumSize(QSize(250, 35));
        LE_fullnameClient->setMaximumSize(QSize(500, 16777215));
        LE_fullnameClient->setBaseSize(QSize(0, 0));
        LE_fullnameClient->setFont(font);
        LE_fullnameClient->setLayoutDirection(Qt::LeftToRight);
        LE_fullnameClient->setAutoFillBackground(false);
        LE_fullnameClient->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        LE_fullnameClient->setMaxLength(40);
        LE_fullnameClient->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(LE_fullnameClient);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        label_3 = new QLabel(GB_addClient);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(30, 30));
        label_3->setMaximumSize(QSize(35, 35));
        label_3->setFont(font2);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: #2196F3;\n"
"}"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_book_white_2x.png")));
        label_3->setScaledContents(true);
        label_3->setIndent(0);

        horizontalLayout_5->addWidget(label_3);

        LE_titleDoc = new QLineEdit(GB_addClient);
        LE_titleDoc->setObjectName(QString::fromUtf8("LE_titleDoc"));
        LE_titleDoc->setMinimumSize(QSize(250, 35));
        LE_titleDoc->setMaximumSize(QSize(500, 16777215));
        LE_titleDoc->setBaseSize(QSize(0, 0));
        LE_titleDoc->setFont(font);
        LE_titleDoc->setLayoutDirection(Qt::LeftToRight);
        LE_titleDoc->setAutoFillBackground(false);
        LE_titleDoc->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        LE_titleDoc->setMaxLength(40);
        LE_titleDoc->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(LE_titleDoc);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_17);

        label_9 = new QLabel(GB_addClient);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(30, 30));
        label_9->setMaximumSize(QSize(35, 35));
        label_9->setFont(font2);
        label_9->setLayoutDirection(Qt::LeftToRight);
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: #2196F3;\n"
"}"));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_mail_white_2x.png")));
        label_9->setScaledContents(true);
        label_9->setIndent(0);

        horizontalLayout_12->addWidget(label_9);

        LE_primaryEmail = new QLineEdit(GB_addClient);
        LE_primaryEmail->setObjectName(QString::fromUtf8("LE_primaryEmail"));
        LE_primaryEmail->setMinimumSize(QSize(250, 35));
        LE_primaryEmail->setMaximumSize(QSize(500, 16777215));
        LE_primaryEmail->setFont(font);
        LE_primaryEmail->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        LE_primaryEmail->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(LE_primaryEmail);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_18);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);

        label_8 = new QLabel(GB_addClient);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(30, 30));
        label_8->setMaximumSize(QSize(35, 35));
        label_8->setFont(font2);
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: #2196F3;\n"
"}"));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_phone_android_white_2x.png")));
        label_8->setScaledContents(true);
        label_8->setIndent(0);

        horizontalLayout_11->addWidget(label_8);

        LE_phoneNumber = new QLineEdit(GB_addClient);
        LE_phoneNumber->setObjectName(QString::fromUtf8("LE_phoneNumber"));
        LE_phoneNumber->setMinimumSize(QSize(250, 35));
        LE_phoneNumber->setMaximumSize(QSize(500, 16777215));
        LE_phoneNumber->setFont(font);
        LE_phoneNumber->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        LE_phoneNumber->setFrame(true);
        LE_phoneNumber->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(LE_phoneNumber);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_16);


        verticalLayout_3->addLayout(horizontalLayout_11);


        horizontalLayout_13->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        LB_languageDoc = new QLabel(GB_addClient);
        LB_languageDoc->setObjectName(QString::fromUtf8("LB_languageDoc"));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        LB_languageDoc->setFont(font3);
        LB_languageDoc->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"\n"
"	color: rgb(0, 163, 239);\n"
"}"));
        LB_languageDoc->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(LB_languageDoc);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        label_4 = new QLabel(GB_addClient);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(30, 30));
        label_4->setMaximumSize(QSize(35, 35));
        label_4->setFont(font2);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: #2196F3;\n"
"}"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_language_white_24dp.png")));
        label_4->setScaledContents(true);
        label_4->setIndent(0);

        horizontalLayout_6->addWidget(label_4);

        CB_langDoc = new QComboBox(GB_addClient);
        CB_langDoc->setObjectName(QString::fromUtf8("CB_langDoc"));
        CB_langDoc->setMinimumSize(QSize(250, 35));
        CB_langDoc->setMaximumSize(QSize(500, 16777215));
        CB_langDoc->setFont(font);
        CB_langDoc->setLayoutDirection(Qt::LeftToRight);
        CB_langDoc->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"\n"
"\n"
"	color: rgb(68, 68, 68);\n"
"    background-color: #FFF;\n"
"    border: 1px solid #2196F3;   \n"
"	border-right:0px solid #FFFFFF;\n"
"    vertical-align: middle;\n"
"}\n"
"QComboBox:hover\n"
"{\n"
"	color: #000000;\n"
"\n"
"   border-top:1px solid #FFFFFF;	\n"
"   border-left:1px solid #FFFFFF;	\n"
"   border-right:1px solid #FFFFFF;	\n"
"   border-bottom:2px solid #2196F3;  \n"
"   border-right:0px solid #FFFFFF;\n"
"}"));
        CB_langDoc->setMaxCount(40);

        horizontalLayout_6->addWidget(CB_langDoc);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout_6);

        LB_totalPages = new QLabel(GB_addClient);
        LB_totalPages->setObjectName(QString::fromUtf8("LB_totalPages"));
        LB_totalPages->setFont(font3);
        LB_totalPages->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"\n"
"	color: rgb(0, 163, 239);\n"
"}"));
        LB_totalPages->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(LB_totalPages);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        label_5 = new QLabel(GB_addClient);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(30, 30));
        label_5->setMaximumSize(QSize(35, 35));
        label_5->setFont(font2);
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: #2196F3;\n"
"}"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_library_books_white_2x.png")));
        label_5->setScaledContents(true);
        label_5->setIndent(0);

        horizontalLayout_7->addWidget(label_5);

        SB_nbrPagesDoc = new QSpinBox(GB_addClient);
        SB_nbrPagesDoc->setObjectName(QString::fromUtf8("SB_nbrPagesDoc"));
        SB_nbrPagesDoc->setMinimumSize(QSize(250, 35));
        SB_nbrPagesDoc->setMaximumSize(QSize(500, 16777215));
        SB_nbrPagesDoc->setFont(font);
        SB_nbrPagesDoc->setLayoutDirection(Qt::RightToLeft);
        SB_nbrPagesDoc->setStyleSheet(QString::fromUtf8("QSpinBox\n"
"{\n"
"\n"
"\n"
"	color: rgb(68, 68, 68);\n"
"    background-color: #FFF;\n"
"    border: 1px solid #2196F3;   \n"
"	border-right:0px solid #FFFFFF;\n"
"    vertical-align: middle;\n"
"}\n"
"QSpinBox:hover\n"
"{\n"
"	color: #000000;\n"
"\n"
"   border-top:1px solid #FFFFFF;	\n"
"   border-left:1px solid #FFFFFF;	\n"
"   border-right:1px solid #FFFFFF;	\n"
"   border-bottom:2px solid #2196F3;  \n"
"   border-right:0px solid #FFFFFF;\n"
"}"));
        SB_nbrPagesDoc->setAlignment(Qt::AlignCenter);
        SB_nbrPagesDoc->setMaximum(5000);
        SB_nbrPagesDoc->setValue(1);

        horizontalLayout_7->addWidget(SB_nbrPagesDoc);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);


        verticalLayout_2->addLayout(horizontalLayout_7);

        LB_depositeDay = new QLabel(GB_addClient);
        LB_depositeDay->setObjectName(QString::fromUtf8("LB_depositeDay"));
        LB_depositeDay->setFont(font3);
        LB_depositeDay->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"\n"
"	color: rgb(0, 163, 239);\n"
"}"));
        LB_depositeDay->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(LB_depositeDay);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        label_6 = new QLabel(GB_addClient);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(30, 30));
        label_6->setMaximumSize(QSize(35, 35));
        label_6->setFont(font2);
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: #2196F3;\n"
"}"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_date_range_white_2x.png")));
        label_6->setScaledContents(true);
        label_6->setIndent(0);

        horizontalLayout_9->addWidget(label_6);

        DE_deposite = new QDateEdit(GB_addClient);
        DE_deposite->setObjectName(QString::fromUtf8("DE_deposite"));
        DE_deposite->setMinimumSize(QSize(250, 35));
        DE_deposite->setMaximumSize(QSize(500, 16777215));
        DE_deposite->setFont(font);
        DE_deposite->setLayoutDirection(Qt::LeftToRight);
        DE_deposite->setStyleSheet(QString::fromUtf8("QDateEdit\n"
"{\n"
"\n"
"\n"
"	color: rgb(68, 68, 68);\n"
"    background-color: #FFF;\n"
"    border: 1px solid #2196F3;   \n"
"	border-right:0px solid #FFFFFF;\n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QDateEdit:hover\n"
"{\n"
"	color: #000000;\n"
"\n"
"   border-top:1px solid #FFFFFF;	\n"
"   border-left:1px solid #FFFFFF;	\n"
"   border-right:1px solid #FFFFFF;	\n"
"   border-bottom:2px solid #2196F3;  \n"
"   border-right:0px solid #FFFFFF;\n"
"}"));
        DE_deposite->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(DE_deposite);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);


        verticalLayout_2->addLayout(horizontalLayout_9);

        LB_deliveryDay = new QLabel(GB_addClient);
        LB_deliveryDay->setObjectName(QString::fromUtf8("LB_deliveryDay"));
        LB_deliveryDay->setFont(font3);
        LB_deliveryDay->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"\n"
"	color: rgb(0, 163, 239);\n"
"}"));
        LB_deliveryDay->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(LB_deliveryDay);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        label_7 = new QLabel(GB_addClient);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(30, 30));
        label_7->setMaximumSize(QSize(35, 35));
        label_7->setFont(font2);
        label_7->setLayoutDirection(Qt::LeftToRight);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: #2196F3;\n"
"}"));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_date_range_white_2x.png")));
        label_7->setScaledContents(true);
        label_7->setIndent(0);

        horizontalLayout_10->addWidget(label_7);

        DE_delivery = new QDateEdit(GB_addClient);
        DE_delivery->setObjectName(QString::fromUtf8("DE_delivery"));
        DE_delivery->setMinimumSize(QSize(250, 35));
        DE_delivery->setMaximumSize(QSize(500, 16777215));
        DE_delivery->setFont(font);
        DE_delivery->setLayoutDirection(Qt::LeftToRight);
        DE_delivery->setStyleSheet(QString::fromUtf8("QDateEdit\n"
"{\n"
"\n"
"\n"
"	color: rgb(68, 68, 68);\n"
"    background-color: #FFF;\n"
"    border: 1px solid #2196F3;   \n"
"	border-right:0px solid #FFFFFF;\n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QDateEdit:hover\n"
"{\n"
"	color: #000000;\n"
"\n"
"   border-top:1px solid #FFFFFF;	\n"
"   border-left:1px solid #FFFFFF;	\n"
"   border-right:1px solid #FFFFFF;	\n"
"   border-bottom:2px solid #2196F3;  \n"
"   border-right:0px solid #FFFFFF;\n"
"}"));
        DE_delivery->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(DE_delivery);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_15);


        verticalLayout_2->addLayout(horizontalLayout_10);


        horizontalLayout_13->addLayout(verticalLayout_2);


        verticalLayout_7->addLayout(horizontalLayout_13);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(12);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        LB_deliveryDay_2 = new QLabel(GB_addClient);
        LB_deliveryDay_2->setObjectName(QString::fromUtf8("LB_deliveryDay_2"));
        LB_deliveryDay_2->setFont(font);
        LB_deliveryDay_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"\n"
"	color: rgb(0, 163, 239);\n"
"}"));
        LB_deliveryDay_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(LB_deliveryDay_2);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_21);

        TE_remarke = new QTextEdit(GB_addClient);
        TE_remarke->setObjectName(QString::fromUtf8("TE_remarke"));
        TE_remarke->setMinimumSize(QSize(600, 100));
        TE_remarke->setMaximumSize(QSize(600, 200));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        TE_remarke->setFont(font4);
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

        horizontalLayout_16->addWidget(TE_remarke);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_20);


        verticalLayout_4->addLayout(horizontalLayout_16);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        splitter_3 = new QSplitter(GB_addClient);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setLayoutDirection(Qt::LeftToRight);
        splitter_3->setOrientation(Qt::Horizontal);
        splitter_4 = new QSplitter(splitter_3);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setLayoutDirection(Qt::LeftToRight);
        splitter_4->setOrientation(Qt::Horizontal);
        label_10 = new QLabel(splitter_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
        label_10->setLayoutDirection(Qt::LeftToRight);
        splitter_4->addWidget(label_10);
        SB_price = new QSpinBox(splitter_4);
        SB_price->setObjectName(QString::fromUtf8("SB_price"));
        SB_price->setFont(font3);
        SB_price->setLayoutDirection(Qt::LeftToRight);
        SB_price->setStyleSheet(QString::fromUtf8("QSpinBox\n"
"{\n"
" margin-bottom: 2px;   \n"
"    padding: 7px 8px;\n"
"        padding-top: 4px;\n"
"        padding-bottom: 4px;\n"
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
"QSpinBox:hover\n"
"{\n"
"	 border: 1px solid #00bbff;\n"
"	 border-top-color: #00bbff;\n"
"        "
                        "border-bottom-color: #00bbff;  \n"
"\n"
"}"));
        SB_price->setAlignment(Qt::AlignCenter);
        SB_price->setMaximum(100000);
        splitter_4->addWidget(SB_price);
        splitter_3->addWidget(splitter_4);
        LB_price = new QLabel(splitter_3);
        LB_price->setObjectName(QString::fromUtf8("LB_price"));
        LB_price->setMinimumSize(QSize(250, 0));
        LB_price->setMaximumSize(QSize(250, 16777215));
        LB_price->setFont(font3);
        LB_price->setLayoutDirection(Qt::LeftToRight);
        LB_price->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        splitter_3->addWidget(LB_price);

        horizontalLayout_4->addWidget(splitter_3);

        splitter_2 = new QSplitter(GB_addClient);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setLayoutDirection(Qt::LeftToRight);
        splitter_2->setOrientation(Qt::Horizontal);
        CB_payementState = new QComboBox(splitter_2);
        CB_payementState->setObjectName(QString::fromUtf8("CB_payementState"));
        CB_payementState->setMaximumSize(QSize(167777, 16777215));
        CB_payementState->setFont(font);
        CB_payementState->setLayoutDirection(Qt::LeftToRight);
        CB_payementState->setMaxCount(3);
        splitter_2->addWidget(CB_payementState);
        LB_payementState = new QLabel(splitter_2);
        LB_payementState->setObjectName(QString::fromUtf8("LB_payementState"));
        LB_payementState->setMinimumSize(QSize(50, 0));
        LB_payementState->setMaximumSize(QSize(50, 16777215));
        LB_payementState->setFont(font3);
        LB_payementState->setLayoutDirection(Qt::LeftToRight);
        splitter_2->addWidget(LB_payementState);

        horizontalLayout_4->addWidget(splitter_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_19);

        BT_cancel_2 = new QPushButton(GB_addClient);
        BT_cancel_2->setObjectName(QString::fromUtf8("BT_cancel_2"));
        BT_cancel_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/ic_cancel_white_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        BT_cancel_2->setIcon(icon);
        BT_cancel_2->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(BT_cancel_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BT_save = new QPushButton(GB_addClient);
        BT_save->setObjectName(QString::fromUtf8("BT_save"));
        BT_save->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        icon1.addFile(QString::fromUtf8(":/Icons/ic_save_white_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        BT_save->setIcon(icon1);
        BT_save->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(BT_save);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_7->addLayout(verticalLayout_4);


        verticalLayout->addWidget(GB_addClient);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/ic_add_circle_outline_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        TabWidgetClients->addTab(T_addClient, icon2, QString());
        T_updateClient = new QWidget();
        T_updateClient->setObjectName(QString::fromUtf8("T_updateClient"));
        verticalLayout_12 = new QVBoxLayout(T_updateClient);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        GB_addClient_3 = new QGroupBox(T_updateClient);
        GB_addClient_3->setObjectName(QString::fromUtf8("GB_addClient_3"));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setItalic(true);
        font5.setUnderline(false);
        font5.setWeight(75);
        font5.setStrikeOut(false);
        font5.setKerning(false);
        GB_addClient_3->setFont(font5);
        GB_addClient_3->setLayoutDirection(Qt::LeftToRight);
        GB_addClient_3->setStyleSheet(QString::fromUtf8("QGroupeBox\n"
"{\n"
"border:0px solid white;\n"
"border-top:1px solid #FF165A;\n"
"}"));
        GB_addClient_3->setAlignment(Qt::AlignCenter);
        GB_addClient_3->setFlat(true);
        verticalLayout_6 = new QVBoxLayout(GB_addClient_3);
        verticalLayout_6->setSpacing(20);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(4, 15, 4, -1);
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
        label_28 = new QLabel(widgetSearch);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMaximumSize(QSize(35, 35));
        label_28->setBaseSize(QSize(0, 0));
        label_28->setLayoutDirection(Qt::LeftToRight);
        label_28->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_search_white_2x.png")));
        label_28->setScaledContents(true);
        label_28->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_28);

        LE_fullnameFiltre = new QLineEdit(widgetSearch);
        LE_fullnameFiltre->setObjectName(QString::fromUtf8("LE_fullnameFiltre"));
        LE_fullnameFiltre->setFont(font);
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


        verticalLayout_6->addWidget(widgetSearch);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tableView = new QTableView(GB_addClient_3);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEnabled(true);
        QFont font6;
        font6.setFamily(QString::fromUtf8("Arial"));
        tableView->setFont(font6);
        tableView->setStyleSheet(QString::fromUtf8("QTableView\n"
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
        tableView->setLocale(QLocale(QLocale::Arabic, QLocale::SaudiArabia));
        tableView->setFrameShadow(QFrame::Sunken);
        tableView->setGridStyle(Qt::CustomDashLine);

        horizontalLayout_2->addWidget(tableView);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        SB_idClientx = new QSpinBox(GB_addClient_3);
        SB_idClientx->setObjectName(QString::fromUtf8("SB_idClientx"));
        SB_idClientx->setMinimumSize(QSize(0, 25));
        SB_idClientx->setMaximumSize(QSize(250, 16777215));
        SB_idClientx->setMaximum(1000000);

        verticalLayout_5->addWidget(SB_idClientx);

        LE_fullNamex = new QLineEdit(GB_addClient_3);
        LE_fullNamex->setObjectName(QString::fromUtf8("LE_fullNamex"));
        LE_fullNamex->setMinimumSize(QSize(0, 30));
        LE_fullNamex->setMaximumSize(QSize(250, 16777215));
        LE_fullNamex->setFont(font3);
        LE_fullNamex->setLayoutDirection(Qt::LeftToRight);
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
        LE_phonex->setFont(font3);
        LE_phonex->setLayoutDirection(Qt::LeftToRight);
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
        LE_primeryEmlx->setFont(font3);
        LE_primeryEmlx->setLayoutDirection(Qt::LeftToRight);
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

        SB_pricex = new QSpinBox(GB_addClient_3);
        SB_pricex->setObjectName(QString::fromUtf8("SB_pricex"));
        SB_pricex->setMinimumSize(QSize(0, 25));
        SB_pricex->setMaximumSize(QSize(250, 16777215));
        SB_pricex->setFont(font3);
        SB_pricex->setAlignment(Qt::AlignCenter);
        SB_pricex->setMaximum(1000000);

        verticalLayout_5->addWidget(SB_pricex);

        CB_paymentStatsx = new QComboBox(GB_addClient_3);
        CB_paymentStatsx->setObjectName(QString::fromUtf8("CB_paymentStatsx"));
        CB_paymentStatsx->setMinimumSize(QSize(0, 25));
        CB_paymentStatsx->setMaximumSize(QSize(250, 16777215));
        CB_paymentStatsx->setFont(font3);
        CB_paymentStatsx->setLayoutDirection(Qt::LeftToRight);
        CB_paymentStatsx->setMaxCount(3);

        verticalLayout_5->addWidget(CB_paymentStatsx);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        LY_updateClient = new QHBoxLayout();
        LY_updateClient->setObjectName(QString::fromUtf8("LY_updateClient"));
        Bt_deleteClient = new QPushButton(GB_addClient_3);
        Bt_deleteClient->setObjectName(QString::fromUtf8("Bt_deleteClient"));
        Bt_deleteClient->setCursor(QCursor(Qt::PointingHandCursor));
        Bt_deleteClient->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        Bt_deleteClient->setIcon(icon3);
        Bt_deleteClient->setIconSize(QSize(25, 25));

        LY_updateClient->addWidget(Bt_deleteClient);

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
        BT_save_3->setIcon(icon1);
        BT_save_3->setIconSize(QSize(25, 25));

        LY_updateClient->addWidget(BT_save_3);


        verticalLayout_5->addLayout(LY_updateClient);


        horizontalLayout_2->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_2);

        splitter_10 = new QSplitter(GB_addClient_3);
        splitter_10->setObjectName(QString::fromUtf8("splitter_10"));
        splitter_10->setLayoutDirection(Qt::LeftToRight);
        splitter_10->setOrientation(Qt::Horizontal);
        splitter_11 = new QSplitter(splitter_10);
        splitter_11->setObjectName(QString::fromUtf8("splitter_11"));
        splitter_11->setLayoutDirection(Qt::LeftToRight);
        splitter_11->setOrientation(Qt::Horizontal);
        splitter_12 = new QSplitter(splitter_11);
        splitter_12->setObjectName(QString::fromUtf8("splitter_12"));
        splitter_12->setLayoutDirection(Qt::LeftToRight);
        splitter_12->setOrientation(Qt::Horizontal);
        splitter_11->addWidget(splitter_12);
        splitter_10->addWidget(splitter_11);

        verticalLayout_6->addWidget(splitter_10);


        verticalLayout_12->addWidget(GB_addClient_3);

        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/ic_update_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        TabWidgetClients->addTab(T_updateClient, icon4, QString());

        retranslateUi(TabWidgetClients);

        TabWidgetClients->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TabWidgetClients);
    } // setupUi

    void retranslateUi(QTabWidget *TabWidgetClients)
    {
        TabWidgetClients->setWindowTitle(QApplication::translate("TabWidgetClients", "TabWidget", 0, QApplication::UnicodeUTF8));
        GB_addClient->setTitle(QApplication::translate("TabWidgetClients", "\330\247\330\266\330\247\331\201\330\251 \330\262\330\250\331\200\331\210\331\206", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        LE_fullnameClient->setPlaceholderText(QApplication::translate("TabWidgetClients", "\330\245\330\263\331\205 \330\247\331\204\330\262\330\250\331\210\331\206", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        LE_titleDoc->setPlaceholderText(QApplication::translate("TabWidgetClients", "\330\271\331\206\331\210\330\247\331\206 \330\247\331\204\331\205\330\260\331\203\331\200\330\261\330\251 / \330\247\331\204\331\210\330\253\331\212\331\202\330\251 / \330\247\331\204\331\203\330\252\330\247\330\250", 0, QApplication::UnicodeUTF8));
        label_9->setText(QString());
        LE_primaryEmail->setPlaceholderText(QApplication::translate("TabWidgetClients", "\330\247\331\204\330\250\330\261\331\212\331\200\331\200\330\257 \330\247\331\204\330\245\331\204\331\203\330\252\330\261\331\210\331\206\331\212 \331\204\331\204\330\262\330\250\331\210\331\206", 0, QApplication::UnicodeUTF8));
        label_8->setText(QString());
        LE_phoneNumber->setInputMask(QString());
        LE_phoneNumber->setText(QString());
        LE_phoneNumber->setPlaceholderText(QApplication::translate("TabWidgetClients", "\330\261\331\202\331\205 \330\247\331\204\331\207\330\247\330\252\331\201", 0, QApplication::UnicodeUTF8));
        LB_languageDoc->setText(QApplication::translate("TabWidgetClients", "\331\204\330\272\330\251 \330\247\331\204\331\205\330\260\331\203\331\200\331\200\330\261\330\251 / \330\247\331\204\331\210\330\253\331\212\331\202\330\251 / \330\247\331\204\331\203\330\252\330\247\330\250", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        CB_langDoc->clear();
        CB_langDoc->insertItems(0, QStringList()
         << QApplication::translate("TabWidgetClients", "\330\271\330\261\330\250\331\212\330\251", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TabWidgetClients", "\331\201\330\261\331\206\330\263\331\212\330\251", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TabWidgetClients", "\330\245\331\206\330\254\331\204\331\212\330\262\331\212\330\251", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TabWidgetClients", "\331\204\330\272\330\251 \330\243\330\256\330\261\331\211", 0, QApplication::UnicodeUTF8)
        );
        LB_totalPages->setText(QApplication::translate("TabWidgetClients", "\330\271\330\257\330\257 \330\247\331\204\330\265\331\201\330\255\330\247\330\252 ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        LB_depositeDay->setText(QApplication::translate("TabWidgetClients", "\330\252\330\247\330\261\331\212\330\256 \330\247\331\204\330\245\331\212\331\200\331\200\330\257\330\247\330\271 ", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        LB_deliveryDay->setText(QApplication::translate("TabWidgetClients", "\330\252\330\247\330\261\331\212\330\256 \330\247\331\204\330\252\330\263\331\204\331\212\331\205 ", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        LB_deliveryDay_2->setText(QApplication::translate("TabWidgetClients", "\331\205\331\204\330\247\330\255\330\270\330\247\330\252", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("TabWidgetClients", "\330\257\330\254", 0, QApplication::UnicodeUTF8));
        LB_price->setText(QApplication::translate("TabWidgetClients", "\330\247\331\204\330\263\330\271\330\261 \330\247\331\204\330\247\330\254\331\205\330\247\331\204\331\212 \331\204\331\204\330\257\331\201\330\271 => ", 0, QApplication::UnicodeUTF8));
        CB_payementState->clear();
        CB_payementState->insertItems(0, QStringList()
         << QApplication::translate("TabWidgetClients", "\331\204\331\205 \331\212\330\257\331\201\330\271 \330\250\330\271\330\257", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TabWidgetClients", "\330\252\331\205 \330\247\331\204\330\257\331\201\330\271", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TabWidgetClients", "\330\247\330\256\330\261\331\211 ", 0, QApplication::UnicodeUTF8)
        );
        LB_payementState->setText(QApplication::translate("TabWidgetClients", "\330\252\331\205 \330\247\331\204\330\257\331\201\330\271 ", 0, QApplication::UnicodeUTF8));
        BT_cancel_2->setText(QApplication::translate("TabWidgetClients", "\330\245\331\204\330\272\331\200\331\200\330\247\330\241", 0, QApplication::UnicodeUTF8));
        BT_save->setText(QApplication::translate("TabWidgetClients", "\330\255\331\201\330\270", 0, QApplication::UnicodeUTF8));
        BT_save->setShortcut(QApplication::translate("TabWidgetClients", "Return", 0, QApplication::UnicodeUTF8));
        TabWidgetClients->setTabText(TabWidgetClients->indexOf(T_addClient), QApplication::translate("TabWidgetClients", "\330\245\330\266\331\200\331\200\330\247\331\201\330\251 \330\262\330\250\331\210\331\206", 0, QApplication::UnicodeUTF8));
        TabWidgetClients->setTabToolTip(TabWidgetClients->indexOf(T_addClient), QApplication::translate("TabWidgetClients", "\331\204\330\245\330\266\330\247\331\201\330\251 \330\262\330\250\331\210\331\206 \330\254\330\257\331\212\330\257", 0, QApplication::UnicodeUTF8));
        GB_addClient_3->setTitle(QApplication::translate("TabWidgetClients", "\330\252\330\271\330\257\331\212\331\204 \331\205\330\271\331\204\331\210\331\205\330\247\330\252 \330\247\331\204\330\262\330\250\331\210\331\206", 0, QApplication::UnicodeUTF8));
        label_28->setText(QString());
        LE_fullnameFiltre->setPlaceholderText(QApplication::translate("TabWidgetClients", "\330\247\330\257\330\256\330\247\331\204 \330\247\330\263\331\205 \330\247\331\204\330\262\330\250\331\210\331\206 \330\247\331\204\331\205\330\261\330\247\330\257 \330\247\331\204\330\250\330\255\330\253 \330\271\331\206\331\207", 0, QApplication::UnicodeUTF8));
        LE_fullNamex->setPlaceholderText(QApplication::translate("TabWidgetClients", "\330\247\330\263\331\205 \330\247\331\204\330\262\330\250\331\210\331\206", 0, QApplication::UnicodeUTF8));
        LE_phonex->setPlaceholderText(QApplication::translate("TabWidgetClients", "\330\261\331\202\331\205 \331\207\330\247\330\252\331\201 \330\247\331\204\330\262\330\250\331\210\331\206", 0, QApplication::UnicodeUTF8));
        LE_primeryEmlx->setText(QString());
        LE_primeryEmlx->setPlaceholderText(QApplication::translate("TabWidgetClients", "\330\247\331\204\330\250\330\261\331\212\330\257 \330\247\331\204\330\247\331\204\331\203\330\252\330\261\331\210\331\206\331\212", 0, QApplication::UnicodeUTF8));
        CB_paymentStatsx->clear();
        CB_paymentStatsx->insertItems(0, QStringList()
         << QApplication::translate("TabWidgetClients", "\331\204\331\205 \331\212\330\257\331\201\330\271 \330\250\330\271\330\257", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TabWidgetClients", "\330\252\331\205 \330\247\331\204\330\257\331\201\330\271", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TabWidgetClients", "\330\247\330\256\330\261\331\211 ", 0, QApplication::UnicodeUTF8)
        );
        Bt_deleteClient->setText(QApplication::translate("TabWidgetClients", "\330\255\330\260\331\201", 0, QApplication::UnicodeUTF8));
        Bt_deleteClient->setShortcut(QApplication::translate("TabWidgetClients", "Del", 0, QApplication::UnicodeUTF8));
        BT_save_3->setText(QApplication::translate("TabWidgetClients", "\330\255\331\201\330\270", 0, QApplication::UnicodeUTF8));
        BT_save_3->setShortcut(QApplication::translate("TabWidgetClients", "Return", 0, QApplication::UnicodeUTF8));
        TabWidgetClients->setTabText(TabWidgetClients->indexOf(T_updateClient), QApplication::translate("TabWidgetClients", "\330\252\330\255\330\257\331\212\330\253 \331\205\330\271\331\204\331\210\331\205\330\247\330\252 \330\247\331\204\330\262\330\250\331\210\331\206", 0, QApplication::UnicodeUTF8));
        TabWidgetClients->setTabToolTip(TabWidgetClients->indexOf(T_updateClient), QApplication::translate("TabWidgetClients", "\330\247\331\203\331\205\330\247\331\204 \331\205\331\204\330\243 \330\247\331\204\331\205\330\271\331\204\331\210\331\205\330\247\330\252 \330\247\331\204\331\206\330\247\331\202\330\265\330\251 \330\247\331\210 \330\252\330\272\331\212\331\212\330\261\331\207\330\247", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TabWidgetClients: public Ui_TabWidgetClients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABWIDGETCLIENTS_H
