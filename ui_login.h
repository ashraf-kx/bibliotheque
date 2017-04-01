/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created: Mon 13. Mar 22:23:38 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *LE_loginName;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *LE_passwordLogin;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *BT_login;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *BT_cancel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *LB_msg;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(471, 219);
        Login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(Login);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        LE_loginName = new QLineEdit(Login);
        LE_loginName->setObjectName(QString::fromUtf8("LE_loginName"));
        LE_loginName->setMinimumSize(QSize(250, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("arial"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        LE_loginName->setFont(font1);
        LE_loginName->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"\n"
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
"QLineEdit:hover\n"
"{\n"
"	 border: 1px solid #00bbff;\n"
"	 border-top-color: #00bbff;\n"
" "
                        "       border-bottom-color: #00bbff;  \n"
"\n"
"}"));
        LE_loginName->setMaxLength(50);
        LE_loginName->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(LE_loginName);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        LE_passwordLogin = new QLineEdit(Login);
        LE_passwordLogin->setObjectName(QString::fromUtf8("LE_passwordLogin"));
        LE_passwordLogin->setMinimumSize(QSize(250, 0));
        LE_passwordLogin->setFont(font1);
        LE_passwordLogin->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"\n"
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
"QLineEdit:hover\n"
"{\n"
"	 border: 1px solid #00bbff;\n"
"	 border-top-color: #00bbff;\n"
" "
                        "       border-bottom-color: #00bbff;  \n"
"\n"
"}"));
        LE_passwordLogin->setMaxLength(50);
        LE_passwordLogin->setEchoMode(QLineEdit::Password);
        LE_passwordLogin->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(LE_passwordLogin);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        BT_login = new QPushButton(Login);
        BT_login->setObjectName(QString::fromUtf8("BT_login"));
        BT_login->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" position: relative;\n"
"    padding: 7px 12px;\n"
"        padding-top: 7px;\n"
"        padding-bottom: 7px;\n"
"    font-size: 15px;\n"
"    font-family: Ubuntu;\n"
"    color: #ffffff;\n"
"    white-space: nowrap;\n"
"    background-color: #E36C43;\n"
"   \n"
"    border-radius: 3px;\n"
"        border-top-left-radius: 3px;\n"
"        border-top-right-radius: 3px;\n"
"        border-bottom-right-radius: 3px;\n"
"        border-bottom-left-radius: 3px;\n"
"    border: 1px solid #E36C43;\n"
"        border-top-width: 1px;\n"
"        border-bottom-width: 1px;\n"
"        border-top-style: solid;\n"
"        border-bottom-style: solid;\n"
"        border-top-color: #E36C43;\n"
"        border-bottom-color: #E36C43;\n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color: #DD4814;\n"
"color: #ffffff;\n"
"\n"
"}\n"
""));

        horizontalLayout_3->addWidget(BT_login);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        BT_cancel = new QPushButton(Login);
        BT_cancel->setObjectName(QString::fromUtf8("BT_cancel"));
        BT_cancel->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" position: relative;\n"
"    padding: 7px 12px;\n"
"        padding-top: 7px;\n"
"        padding-bottom: 7px;\n"
"    font-size: 15px;\n"
"    font-family: Ubuntu;\n"
"    color: #ffffff;\n"
"    white-space: nowrap;\n"
"    background-color: #E36C43;\n"
"   \n"
"    border-radius: 3px;\n"
"        border-top-left-radius: 3px;\n"
"        border-top-right-radius: 3px;\n"
"        border-bottom-right-radius: 3px;\n"
"        border-bottom-left-radius: 3px;\n"
"    border: 1px solid #E36C43;\n"
"        border-top-width: 1px;\n"
"        border-bottom-width: 1px;\n"
"        border-top-style: solid;\n"
"        border-bottom-style: solid;\n"
"        border-top-color: #E36C43;\n"
"        border-bottom-color: #E36C43;\n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color: #DD4814;\n"
"color: #ffffff;\n"
"\n"
"}\n"
""));

        horizontalLayout_3->addWidget(BT_cancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        LB_msg = new QLabel(Login);
        LB_msg->setObjectName(QString::fromUtf8("LB_msg"));

        verticalLayout->addWidget(LB_msg);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Login", "\331\205\331\203\330\252\330\250\330\251 \331\212\330\247\330\263\331\212\331\206", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        LE_loginName->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        LE_loginName->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        LE_loginName->setText(QString());
        LE_loginName->setPlaceholderText(QApplication::translate("Login", "\330\245\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\256\330\257\331\205", 0, QApplication::UnicodeUTF8));
        LE_passwordLogin->setPlaceholderText(QApplication::translate("Login", "\331\203\331\204\331\205\330\251 \330\247\331\204\331\205\330\261\331\210\330\261", 0, QApplication::UnicodeUTF8));
        BT_login->setText(QApplication::translate("Login", "\330\257\330\256\331\210\331\204", 0, QApplication::UnicodeUTF8));
        BT_login->setShortcut(QApplication::translate("Login", "Return", 0, QApplication::UnicodeUTF8));
        BT_cancel->setText(QApplication::translate("Login", "\330\247\331\204\330\272\330\247\330\241", 0, QApplication::UnicodeUTF8));
        BT_cancel->setShortcut(QApplication::translate("Login", "Esc", 0, QApplication::UnicodeUTF8));
        LB_msg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
