/********************************************************************************
** Form generated from reading UI file 'toast.ui'
**
** Created: Mon 13. Mar 22:23:39 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOAST_H
#define UI_TOAST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Toast
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QFrame *Toast)
    {
        if (Toast->objectName().isEmpty())
            Toast->setObjectName(QString::fromUtf8("Toast"));
        Toast->resize(399, 60);
        Toast->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	background-color: rgb(178, 6, 245);\n"
"	color: rgb(255, 255, 255);\n"
"	border-radius:15px;\n"
"}\n"
""));
        Toast->setFrameShape(QFrame::StyledPanel);
        Toast->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(Toast);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Toast);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        retranslateUi(Toast);

        QMetaObject::connectSlotsByName(Toast);
    } // setupUi

    void retranslateUi(QFrame *Toast)
    {
        Toast->setWindowTitle(QApplication::translate("Toast", "Frame", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Toast", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Toast: public Ui_Toast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOAST_H
