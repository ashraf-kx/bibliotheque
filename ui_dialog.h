/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Mon 13. Mar 22:23:39 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *icon;
    QLabel *labelMessage;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *Bt_no;
    QPushButton *Bt_yes;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(526, 208);
        Dialog->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(Dialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, -1, -1, -1);
        icon = new QLabel(frame);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setMaximumSize(QSize(48, 48));
        icon->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_done_2x.png")));
        icon->setScaledContents(true);

        horizontalLayout_2->addWidget(icon);

        labelMessage = new QLabel(frame);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));
        labelMessage->setMinimumSize(QSize(0, 100));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        labelMessage->setFont(font);
        labelMessage->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelMessage);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Bt_no = new QPushButton(frame);
        Bt_no->setObjectName(QString::fromUtf8("Bt_no"));
        Bt_no->setMinimumSize(QSize(0, 35));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        font1.setKerning(false);
        Bt_no->setFont(font1);
        Bt_no->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 170, 255);\n"
"border:0px solid white;\n"
"border-top:2px solid  rgb(225, 225, 225);\n"
"border-right:1px solid  rgb(225, 225, 225);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(232, 232, 232);\n"
"	color: rgb(0, 85, 255);\n"
"\n"
"}"));

        horizontalLayout->addWidget(Bt_no);

        Bt_yes = new QPushButton(frame);
        Bt_yes->setObjectName(QString::fromUtf8("Bt_yes"));
        Bt_yes->setMinimumSize(QSize(0, 35));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setKerning(false);
        Bt_yes->setFont(font2);
        Bt_yes->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 170, 255);\n"
"border:0px solid white;\n"
"border-top:2px solid  rgb(225, 225, 225);\n"
"border-left:1px solid  rgb(225, 225, 225);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(232, 232, 232);\n"
"	color: rgb(0, 85, 255);\n"
"\n"
"}"));

        horizontalLayout->addWidget(Bt_yes);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(frame);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        icon->setText(QString());
        labelMessage->setText(QApplication::translate("Dialog", "\331\207\331\204 \330\252\330\261\331\212\330\257 \330\255\331\201\330\270 \330\247\331\204\331\205\330\271\331\204\331\210\331\205\330\247\330\252 \330\237", 0, QApplication::UnicodeUTF8));
        Bt_no->setText(QApplication::translate("Dialog", "\331\204\330\247", 0, QApplication::UnicodeUTF8));
        Bt_no->setShortcut(QApplication::translate("Dialog", "Esc", 0, QApplication::UnicodeUTF8));
        Bt_yes->setText(QApplication::translate("Dialog", "\331\206\330\271\331\205", 0, QApplication::UnicodeUTF8));
        Bt_yes->setShortcut(QApplication::translate("Dialog", "Return", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
