/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 13. Mar 22:23:38 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actClientSpace;
    QAction *actDocumentSpace;
    QAction *actWorkerSpace;
    QAction *actSetting;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(734, 478);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/ic_polymer_black_24dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        actClientSpace = new QAction(MainWindow);
        actClientSpace->setObjectName(QString::fromUtf8("actClientSpace"));
        actClientSpace->setCheckable(false);
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        actClientSpace->setFont(font);
        actDocumentSpace = new QAction(MainWindow);
        actDocumentSpace->setObjectName(QString::fromUtf8("actDocumentSpace"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        actDocumentSpace->setFont(font1);
        actWorkerSpace = new QAction(MainWindow);
        actWorkerSpace->setObjectName(QString::fromUtf8("actWorkerSpace"));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        actWorkerSpace->setFont(font2);
        actSetting = new QAction(MainWindow);
        actSetting->setObjectName(QString::fromUtf8("actSetting"));
        actSetting->setFont(font1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(9);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QFont font3;
        font3.setPointSize(10);
        font3.setItalic(true);
        statusBar->setFont(font3);
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actClientSpace->setText(QApplication::translate("MainWindow", "\331\201\330\266\330\247\330\241 \330\247\331\204\330\262\330\250\330\247\330\246\331\206", 0, QApplication::UnicodeUTF8));
        actDocumentSpace->setText(QApplication::translate("MainWindow", "\330\247\331\204\331\210\330\253\330\247\330\246\331\202/ \330\247\331\204\331\203\330\252\330\250 /\330\247\331\204\331\205\330\260\331\203\330\261\330\247\330\252", 0, QApplication::UnicodeUTF8));
        actWorkerSpace->setText(QApplication::translate("MainWindow", "\331\201\330\266\330\247\330\241 \330\247\331\204\330\271\331\205\330\247\331\204", 0, QApplication::UnicodeUTF8));
        actSetting->setText(QApplication::translate("MainWindow", "\330\252\330\271\330\257\331\212\331\204\330\247\330\252 \330\247\331\204\330\250\330\261\331\206\330\247\331\205\330\254", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
