/********************************************************************************
** Form generated from reading UI file 'tabwidgetdocuments.ui'
**
** Created: Mon 13. Mar 22:23:38 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABWIDGETDOCUMENTS_H
#define UI_TABWIDGETDOCUMENTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabWidgetDocuments
{
public:
    QWidget *T_taskDistro;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_3;
    QPushButton *BT_associate;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_2;
    QComboBox *CB_pickDoc;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *CB_pickEmpl;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *T_progressLevels;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea_archive;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QTabWidget *TabWidgetDocuments)
    {
        if (TabWidgetDocuments->objectName().isEmpty())
            TabWidgetDocuments->setObjectName(QString::fromUtf8("TabWidgetDocuments"));
        TabWidgetDocuments->resize(735, 507);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        TabWidgetDocuments->setFont(font);
        TabWidgetDocuments->setStyleSheet(QString::fromUtf8(""));
        TabWidgetDocuments->setTabPosition(QTabWidget::East);
        TabWidgetDocuments->setIconSize(QSize(25, 25));
        T_taskDistro = new QWidget();
        T_taskDistro->setObjectName(QString::fromUtf8("T_taskDistro"));
        verticalLayout_9 = new QVBoxLayout(T_taskDistro);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_3 = new QLabel(T_taskDistro);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(false);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_3);

        BT_associate = new QPushButton(T_taskDistro);
        BT_associate->setObjectName(QString::fromUtf8("BT_associate"));
        BT_associate->setMaximumSize(QSize(150, 35));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu"));
        font2.setBold(true);
        font2.setWeight(75);
        font2.setKerning(false);
        BT_associate->setFont(font2);
        BT_associate->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        icon.addFile(QString::fromUtf8(":/Icons/ic_insert_link_white_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        BT_associate->setIcon(icon);
        BT_associate->setIconSize(QSize(30, 30));

        verticalLayout_8->addWidget(BT_associate);


        horizontalLayout->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_2 = new QLabel(T_taskDistro);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        font3.setKerning(false);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(42, 188, 255);"));

        verticalLayout_7->addWidget(label_2);

        CB_pickDoc = new QComboBox(T_taskDistro);
        CB_pickDoc->setObjectName(QString::fromUtf8("CB_pickDoc"));
        CB_pickDoc->setEnabled(true);
        CB_pickDoc->setMinimumSize(QSize(250, 30));
        CB_pickDoc->setFont(font);
        CB_pickDoc->setLayoutDirection(Qt::RightToLeft);
        CB_pickDoc->setEditable(false);

        verticalLayout_7->addWidget(CB_pickDoc);


        horizontalLayout->addLayout(verticalLayout_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(T_taskDistro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color: rgb(42, 188, 255);"));

        verticalLayout->addWidget(label);

        CB_pickEmpl = new QComboBox(T_taskDistro);
        CB_pickEmpl->setObjectName(QString::fromUtf8("CB_pickEmpl"));
        CB_pickEmpl->setMinimumSize(QSize(250, 30));
        CB_pickEmpl->setFont(font);
        CB_pickEmpl->setLayoutDirection(Qt::RightToLeft);
        CB_pickEmpl->setStyleSheet(QString::fromUtf8("QcomboBox\n"
"{\n"
"text-align:center;\n"
"}"));
        CB_pickEmpl->setEditable(false);
        CB_pickEmpl->setMaxCount(200);

        verticalLayout->addWidget(CB_pickEmpl);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_9->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(T_taskDistro);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border:0px solid white;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 682, 418));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        groupBox->setAlignment(Qt::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 15, -1, -1);

        verticalLayout_3->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_9->addWidget(scrollArea);

        TabWidgetDocuments->addTab(T_taskDistro, icon, QString());
        T_progressLevels = new QWidget();
        T_progressLevels->setObjectName(QString::fromUtf8("T_progressLevels"));
        verticalLayout_4 = new QVBoxLayout(T_progressLevels);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        scrollArea_archive = new QScrollArea(T_progressLevels);
        scrollArea_archive->setObjectName(QString::fromUtf8("scrollArea_archive"));
        scrollArea_archive->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border:0px solid white;"));
        scrollArea_archive->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 682, 485));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_ = new QGroupBox(scrollAreaWidgetContents);
        groupBox_->setObjectName(QString::fromUtf8("groupBox_"));
        groupBox_->setFont(font3);
        groupBox_->setAlignment(Qt::AlignCenter);
        verticalLayout_6 = new QVBoxLayout(groupBox_);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, 15, -1, -1);

        verticalLayout_5->addWidget(groupBox_);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        scrollArea_archive->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea_archive);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/ic_archive_white_2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        TabWidgetDocuments->addTab(T_progressLevels, icon1, QString());

        retranslateUi(TabWidgetDocuments);

        TabWidgetDocuments->setCurrentIndex(0);
        CB_pickEmpl->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(TabWidgetDocuments);
    } // setupUi

    void retranslateUi(QTabWidget *TabWidgetDocuments)
    {
        TabWidgetDocuments->setWindowTitle(QApplication::translate("TabWidgetDocuments", "TabWidget", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TabWidgetDocuments", ".", 0, QApplication::UnicodeUTF8));
        BT_associate->setText(QApplication::translate("TabWidgetDocuments", "\330\252\330\271\331\212\331\212\331\206", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TabWidgetDocuments", "\330\245\330\256\330\252\331\212\330\247\330\261 \331\210\330\253\331\212\331\202\330\251 / \331\205\330\260\331\203\330\261\330\251 :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TabWidgetDocuments", "\330\245\330\256\330\252\331\212\330\247\330\261 \331\205\331\210\330\270\331\201 :", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("TabWidgetDocuments", "\330\247\331\204\331\210\330\253\330\247\330\246\331\202 \331\201\331\212 \330\267\331\210\330\261 \330\247\331\204\330\247\331\206\330\254\330\247\330\262", 0, QApplication::UnicodeUTF8));
        TabWidgetDocuments->setTabText(TabWidgetDocuments->indexOf(T_taskDistro), QApplication::translate("TabWidgetDocuments", "\330\252\331\210\330\262\331\212\330\271 \330\247\331\204\331\210\330\253\330\247\330\246\331\202 \330\271\331\204\331\211 \330\247\331\204\331\205\331\210\330\270\331\201\331\212\331\206", 0, QApplication::UnicodeUTF8));
        groupBox_->setTitle(QApplication::translate("TabWidgetDocuments", "\330\247\331\204\331\210\330\253\330\247\330\246\331\202 \330\247\331\204\330\252\331\212 \330\252\331\205 \330\247\331\206\330\254\330\247\330\262\331\207\330\247", 0, QApplication::UnicodeUTF8));
        TabWidgetDocuments->setTabText(TabWidgetDocuments->indexOf(T_progressLevels), QApplication::translate("TabWidgetDocuments", "\330\247\331\204\330\247\330\261\330\264\331\212\331\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TabWidgetDocuments: public Ui_TabWidgetDocuments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABWIDGETDOCUMENTS_H
