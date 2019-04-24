#-------------------------------------------------
#
# Project created by QtCreator 2017-02-21T11:07:43
#
#-------------------------------------------------

QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG   += c++11

TARGET = bibliotheque
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    db.cpp \
    tabwidgetclients.cpp \
    tabwidgetworkers.cpp \
    tabwidgetdocuments.cpp \
    topnav.cpp \
    login.cpp \
    archiveddoc.cpp \
    activedoc.cpp \
    simplecrypt.cpp \
    tabwidgetsettings.cpp \
    dialog.cpp \
    toast.cpp

HEADERS  += mainwindow.h \
    db.h \
    tabwidgetclients.h \
    tabwidgetworkers.h \
    tabwidgetdocuments.h \
    topnav.h \
    login.h \
    archiveddoc.h \
    activedoc.h \
    simplecrypt.h \
    tabwidgetsettings.h \
    dialog.h \
    toast.h

FORMS    += mainwindow.ui \
    tabwidgetclients.ui \
    tabwidgetworkers.ui \
    tabwidgetdocuments.ui \
    topnav.ui \
    login.ui \
    archiveddoc.ui \
    activedoc.ui \
    tabwidgetsettings.ui \
    dialog.ui \
    toast.ui

RESOURCES += \
    Icons.qrc \
    lang.qrc

TRANSLATIONS = bibliotheque_ar.ts
