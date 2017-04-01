/********************************************************************************
** Form generated from reading UI file 'archiveddoc.ui'
**
** Created: Mon 13. Mar 22:23:38 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCHIVEDDOC_H
#define UI_ARCHIVEDDOC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArchivedDoc
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Bt_Cancel;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLabel *L_showMessage;

    void setupUi(QWidget *ArchivedDoc)
    {
        if (ArchivedDoc->objectName().isEmpty())
            ArchivedDoc->setObjectName(QString::fromUtf8("ArchivedDoc"));
        ArchivedDoc->resize(798, 108);
        ArchivedDoc->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_2 = new QVBoxLayout(ArchivedDoc);
#ifndef Q_OS_MAC
        verticalLayout_2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        verticalLayout_2->setContentsMargins(9, 9, 9, 9);
#endif
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(ArchivedDoc);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, 0, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        Bt_Cancel = new QPushButton(frame);
        Bt_Cancel->setObjectName(QString::fromUtf8("Bt_Cancel"));
        Bt_Cancel->setMinimumSize(QSize(30, 30));
        Bt_Cancel->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    padding: 7px 7px 7px 7px;\n"
"    font-size: 15px;\n"
"    font-family: Ubuntu;\n"
"    color: #ffffff;\n"
"    white-space: nowrap;\n"
"    background-color:#FFF;\n"
"   \n"
"    border-radius: 3px;\n"
"       \n"
"    border: 1px solid #FFF;\n"
"       \n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color:#FFFFF9;\n"
"    border: 1px solid #FFFFF9;\n"
"color: #ffffff;\n"
"\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/ic_clear_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bt_Cancel->setIcon(icon);

        horizontalLayout_2->addWidget(Bt_Cancel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(25, -1, 25, -1);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(30, 30));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 232, 0);"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_beenhere_white_2x.png")));
        label_2->setScaledContents(true);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        L_showMessage = new QLabel(frame);
        L_showMessage->setObjectName(QString::fromUtf8("L_showMessage"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        L_showMessage->setFont(font);

        horizontalLayout->addWidget(L_showMessage);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(frame);


        retranslateUi(ArchivedDoc);

        QMetaObject::connectSlotsByName(ArchivedDoc);
    } // setupUi

    void retranslateUi(QWidget *ArchivedDoc)
    {
        ArchivedDoc->setWindowTitle(QApplication::translate("ArchivedDoc", "Form", 0, QApplication::UnicodeUTF8));
        Bt_Cancel->setText(QString());
        label_2->setText(QString());
        L_showMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ArchivedDoc: public Ui_ArchivedDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCHIVEDDOC_H
