/********************************************************************************
** Form generated from reading UI file 'activedoc.ui'
**
** Created: Mon 13. Mar 22:23:39 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVEDOC_H
#define UI_ACTIVEDOC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActiveDoc
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Bt_lock;
    QPushButton *Bt_toArchive;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Bt_remove;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *L_titleDoc;
    QLabel *label;
    QLabel *L_nameWorker;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QProgressBar *PB_advance;
    QSlider *slider;
    QProgressBar *PB_daysLeft;

    void setupUi(QWidget *ActiveDoc)
    {
        if (ActiveDoc->objectName().isEmpty())
            ActiveDoc->setObjectName(QString::fromUtf8("ActiveDoc"));
        ActiveDoc->resize(819, 205);
        QFont font;
        font.setKerning(false);
        ActiveDoc->setFont(font);
        ActiveDoc->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(ActiveDoc);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(9, 9, 9, -1);
        frame = new QFrame(ActiveDoc);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Bt_lock = new QPushButton(frame);
        Bt_lock->setObjectName(QString::fromUtf8("Bt_lock"));
        Bt_lock->setMaximumSize(QSize(25, 25));
        Bt_lock->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        Bt_lock->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(Bt_lock);

        Bt_toArchive = new QPushButton(frame);
        Bt_toArchive->setObjectName(QString::fromUtf8("Bt_toArchive"));
        Bt_toArchive->setMaximumSize(QSize(25, 25));
        Bt_toArchive->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" position: relative;\n"
"    padding: 7px 12px;\n"
"        padding-top: 7px;\n"
"        padding-bottom: 7px;\n"
"    font-size: 15px;\n"
"    font-family: Ubuntu;\n"
"    color: #ffffff;\n"
"    white-space: nowrap;\n"
"    background-color: rgb(100, 116, 116);\n"
"    border-radius: 3px;\n"
"        border-top-left-radius: 3px;\n"
"        border-top-right-radius: 3px;\n"
"        border-bottom-right-radius: 3px;\n"
"        border-bottom-left-radius: 3px;\n"
"    border: 1px solid rgb(100, 116, 116);\n"
"       \n"
"    vertical-align: middle;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color:  rgb(148, 148, 148);\n"
"    border: 1px solid  rgb(148, 148, 148);\n"
"color: #ffffff;\n"
"\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/ic_archive_white_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bt_toArchive->setIcon(icon);
        Bt_toArchive->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(Bt_toArchive);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        Bt_remove = new QPushButton(frame);
        Bt_remove->setObjectName(QString::fromUtf8("Bt_remove"));
        Bt_remove->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/ic_clear_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bt_remove->setIcon(icon1);
        Bt_remove->setIconSize(QSize(15, 15));

        horizontalLayout_3->addWidget(Bt_remove);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(15, -1, 15, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        L_titleDoc = new QLabel(frame);
        L_titleDoc->setObjectName(QString::fromUtf8("L_titleDoc"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        L_titleDoc->setFont(font1);
        L_titleDoc->setScaledContents(true);
        L_titleDoc->setMargin(5);

        horizontalLayout_2->addWidget(L_titleDoc);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(25, 25));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Icons/ic_create_2x.png")));
        label->setScaledContents(true);

        horizontalLayout_2->addWidget(label);

        L_nameWorker = new QLabel(frame);
        L_nameWorker->setObjectName(QString::fromUtf8("L_nameWorker"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        L_nameWorker->setFont(font2);
        L_nameWorker->setScaledContents(true);
        L_nameWorker->setAlignment(Qt::AlignCenter);
        L_nameWorker->setWordWrap(false);
        L_nameWorker->setMargin(5);

        horizontalLayout_2->addWidget(L_nameWorker);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(15, 0, 15, 0);
        PB_advance = new QProgressBar(frame);
        PB_advance->setObjectName(QString::fromUtf8("PB_advance"));
        PB_advance->setMinimumSize(QSize(0, 0));
        PB_advance->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        font3.setKerning(false);
        PB_advance->setFont(font3);
        PB_advance->setLayoutDirection(Qt::RightToLeft);
        PB_advance->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"border:1px solid rgb(231, 231, 231);\n"
"background:  qlineargradient(spread:repeat, x1:0, y1:0.500273, x2:1, y2:0.505, stop:0.318182 rgba(82, 200, 18, 250), stop:0.715909 rgba(217, 241, 0, 192));\n"
"border-radius: 0px;\n"
"\n"
"width: 10px;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"background:white;\n"
"border: 1px solid white;\n"
"border-radius: 0px;\n"
"}"));
        PB_advance->setMaximum(150);
        PB_advance->setValue(130);
        PB_advance->setAlignment(Qt::AlignCenter);
        PB_advance->setTextVisible(true);
        PB_advance->setInvertedAppearance(true);

        verticalLayout->addWidget(PB_advance);

        slider = new QSlider(frame);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setLayoutDirection(Qt::LeftToRight);
        slider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider);

        PB_daysLeft = new QProgressBar(frame);
        PB_daysLeft->setObjectName(QString::fromUtf8("PB_daysLeft"));
        PB_daysLeft->setMaximumSize(QSize(16777215, 16777215));
        PB_daysLeft->setFont(font2);
        PB_daysLeft->setLayoutDirection(Qt::RightToLeft);
        PB_daysLeft->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"border:1px solid rgb(231, 231, 231);\n"
"background: qlineargradient(spread:repeat, x1:0, y1:0.500273, x2:1, y2:0.505, stop:0.318182 rgba(255, 21, 0, 214), stop:0.715909 rgba(0, 104, 255, 147));\n"
"border-radius: 0px;\n"
"\n"
"width: 10px;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"background:white;\n"
"border: 1px solid white;\n"
"border-radius: 0px;\n"
"\n"
"}"));
        PB_daysLeft->setValue(50);
        PB_daysLeft->setAlignment(Qt::AlignCenter);
        PB_daysLeft->setTextVisible(true);
        PB_daysLeft->setInvertedAppearance(true);

        verticalLayout->addWidget(PB_daysLeft);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addWidget(frame);


        retranslateUi(ActiveDoc);

        QMetaObject::connectSlotsByName(ActiveDoc);
    } // setupUi

    void retranslateUi(QWidget *ActiveDoc)
    {
        ActiveDoc->setWindowTitle(QApplication::translate("ActiveDoc", "Form", 0, QApplication::UnicodeUTF8));
        Bt_lock->setText(QString());
        Bt_toArchive->setText(QString());
        Bt_remove->setText(QString());
        L_titleDoc->setText(QApplication::translate("ActiveDoc", "\330\247\331\204\331\203\330\252\330\247\330\250", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        L_nameWorker->setText(QApplication::translate("ActiveDoc", "\330\247\330\263\331\205 \330\247\331\204\331\205\331\210\330\270\331\201", 0, QApplication::UnicodeUTF8));
        PB_advance->setFormat(QApplication::translate("ActiveDoc", "\331\206\330\263\330\250\330\251 \330\247\331\204\330\252\331\202\330\257\331\205", 0, QApplication::UnicodeUTF8));
        PB_daysLeft->setFormat(QApplication::translate("ActiveDoc", "\331\212\331\210\331\205 \331\205\330\252\330\250\331\202\331\212", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ActiveDoc: public Ui_ActiveDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVEDOC_H
