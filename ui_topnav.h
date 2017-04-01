/********************************************************************************
** Form generated from reading UI file 'topnav.ui'
**
** Created: Mon 13. Mar 22:23:38 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPNAV_H
#define UI_TOPNAV_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_topNav
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *Bt_logOut;
    QHBoxLayout *horizontalLayout;
    QPushButton *BT_Setting;
    QPushButton *BT_Books;
    QPushButton *BT_Workers;
    QPushButton *BT_Clients;

    void setupUi(QWidget *topNav)
    {
        if (topNav->objectName().isEmpty())
            topNav->setObjectName(QString::fromUtf8("topNav"));
        topNav->resize(762, 78);
        topNav->setCursor(QCursor(Qt::ArrowCursor));
        topNav->setAutoFillBackground(false);
        topNav->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(topNav);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(topNav);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#3f51b5;\n"
"border:1px solid #3f51b5;\n"
"max-width:35px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"border:2px solid #b3d4fc;\n"
"\n"
"        border-top-left-radius: 4px;\n"
"        border-top-right-radius: 4px;\n"
"        border-bottom-right-radius: 4px;\n"
"        border-bottom-left-radius: 4px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/ic_help_outline_white_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(35, 35));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(true);

        horizontalLayout_2->addWidget(pushButton);

        label = new QLabel(topNav);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        label->setFont(font);
        label->setMouseTracking(true);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:#3f51b5;\n"
"border:1px solid #3f51b5;\n"
"color:white;\n"
"font-size:14px;\n"
"height:200px;\n"
"margin:0px 0px 0px 0px;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        Bt_logOut = new QPushButton(topNav);
        Bt_logOut->setObjectName(QString::fromUtf8("Bt_logOut"));
        Bt_logOut->setCursor(QCursor(Qt::PointingHandCursor));
        Bt_logOut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#3f51b5;\n"
"border:1px solid #3f51b5;\n"
"max-width:35px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"border:2px solid #b3d4fc;\n"
"\n"
"        border-top-left-radius: 4px;\n"
"        border-top-right-radius: 4px;\n"
"        border-bottom-right-radius: 4px;\n"
"        border-bottom-left-radius: 4px;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/ic_exit_to_app_white_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bt_logOut->setIcon(icon1);
        Bt_logOut->setIconSize(QSize(35, 35));

        horizontalLayout_2->addWidget(Bt_logOut);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        BT_Setting = new QPushButton(topNav);
        BT_Setting->setObjectName(QString::fromUtf8("BT_Setting"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(false);
        BT_Setting->setFont(font1);
        BT_Setting->setCursor(QCursor(Qt::PointingHandCursor));
        BT_Setting->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" position: relative;\n"
"    padding: 0px 0px;\n"
"        padding-top: 0px;\n"
"        padding-bottom: 0px;\n"
"    font-size: 15px;\n"
"    font-family: Ubuntu;\n"
"    color: #9E9E9E;\n"
"    white-space: nowrap;\n"
"    background-color: #3F51B5;\n"
"   \n"
"    border-radius: 0px;\n"
"	  border: 1px solid #3F51B5 ;\n"
"    \n"
"      \n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
" background-color: #03A9F4;\n"
" border-top: 1px solid  #03A9F4 ;\n"
" border-left: 1px solid  #03A9F4 ;\n"
" border-right: 1px solid  #03A9F4 ;\n"
"border-bottom: 2px solid #FF4081;\n"
" color: #ffffff;\n"
"\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/ic_settings_white_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        BT_Setting->setIcon(icon2);
        BT_Setting->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(BT_Setting);

        BT_Books = new QPushButton(topNav);
        BT_Books->setObjectName(QString::fromUtf8("BT_Books"));
        BT_Books->setFont(font1);
        BT_Books->setCursor(QCursor(Qt::PointingHandCursor));
        BT_Books->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" position: relative;\n"
"    padding: 0px 0px;\n"
"        padding-top: 0px;\n"
"        padding-bottom: 0px;\n"
"    font-size: 15px;\n"
"    font-family: Ubuntu;\n"
"    color: #9E9E9E;\n"
"    white-space: nowrap;\n"
"    background-color: #3F51B5;\n"
"   \n"
"    border-radius: 0px;\n"
"	  border: 1px solid #3F51B5 ;\n"
"    \n"
"      \n"
"        \n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
" background-color: #03A9F4;\n"
" border-top: 1px solid  #03A9F4 ;\n"
" border-left: 1px solid  #03A9F4 ;\n"
" border-right: 1px solid  #03A9F4 ;\n"
"border-bottom: 2px solid #FF4081;\n"
" color: #ffffff;\n"
"\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/ic_attachment_white_24dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        BT_Books->setIcon(icon3);
        BT_Books->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(BT_Books);

        BT_Workers = new QPushButton(topNav);
        BT_Workers->setObjectName(QString::fromUtf8("BT_Workers"));
        BT_Workers->setFont(font1);
        BT_Workers->setCursor(QCursor(Qt::PointingHandCursor));
        BT_Workers->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" position: relative;\n"
"    padding: 0px 0px;\n"
"        padding-top: 0px;\n"
"        padding-bottom: 0px;\n"
"    font-size: 15px;\n"
"    font-family: Ubuntu;\n"
"    color: #9E9E9E;\n"
"    white-space: nowrap;\n"
"    background-color: #3F51B5;\n"
"   \n"
"    border-radius: 0px;\n"
"	  border: 1px solid #3F51B5 ;\n"
"    \n"
"      \n"
"        \n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
" background-color: #03A9F4;\n"
" border-top: 1px solid  #03A9F4 ;\n"
" border-left: 1px solid  #03A9F4 ;\n"
" border-right: 1px solid  #03A9F4 ;\n"
"border-bottom: 2px solid #FF4081;\n"
" color: #ffffff;\n"
"\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/ic_work_white_24dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        BT_Workers->setIcon(icon4);
        BT_Workers->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(BT_Workers);

        BT_Clients = new QPushButton(topNav);
        BT_Clients->setObjectName(QString::fromUtf8("BT_Clients"));
        BT_Clients->setFont(font1);
        BT_Clients->setCursor(QCursor(Qt::PointingHandCursor));
        BT_Clients->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" position: relative;\n"
"    padding: 0px 0px;\n"
"        padding-top: 0px;\n"
"        padding-bottom: 0px;\n"
"    font-size: 15px;\n"
"    font-family: Ubuntu;\n"
"    color: #9E9E9E;\n"
"    white-space: nowrap;\n"
"    background-color: #3F51B5;\n"
"   \n"
"    border-radius: 0px;\n"
"	  border: 1px solid #3F51B5 ;\n"
"    \n"
"      \n"
"        \n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
" background-color: #03A9F4;\n"
" border-top: 1px solid  #03A9F4 ;\n"
" border-left: 1px solid  #03A9F4 ;\n"
" border-right: 1px solid  #03A9F4 ;\n"
"border-bottom: 2px solid #FF4081;\n"
" color: #ffffff;\n"
"\n"
"}\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/ic_supervisor_account_white_24dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        BT_Clients->setIcon(icon5);
        BT_Clients->setIconSize(QSize(35, 35));
        BT_Clients->setFlat(true);

        horizontalLayout->addWidget(BT_Clients);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(topNav);

        QMetaObject::connectSlotsByName(topNav);
    } // setupUi

    void retranslateUi(QWidget *topNav)
    {
        topNav->setWindowTitle(QApplication::translate("topNav", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
        label->setText(QApplication::translate("topNav", "\331\205\331\203\330\252\330\250\330\251 \331\212\330\247\330\263\331\212\331\206", 0, QApplication::UnicodeUTF8));
        Bt_logOut->setText(QString());
        BT_Setting->setText(QApplication::translate("topNav", "\330\252\330\271\330\257\331\212\331\204 \330\247\331\204\330\250\330\261\331\206\330\247\331\205\330\254", 0, QApplication::UnicodeUTF8));
        BT_Books->setText(QApplication::translate("topNav", "\330\247\331\204\331\203\330\252\330\250 / \330\247\331\204\331\210\330\253\330\247\330\246\331\202", 0, QApplication::UnicodeUTF8));
        BT_Workers->setText(QApplication::translate("topNav", "\330\247\331\204\331\205\331\200\331\210\330\270\331\201\331\212\331\206", 0, QApplication::UnicodeUTF8));
        BT_Clients->setText(QApplication::translate("topNav", "\330\247\331\204\330\262\330\250\330\247\330\246\331\200\331\200\331\206", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class topNav: public Ui_topNav {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPNAV_H
