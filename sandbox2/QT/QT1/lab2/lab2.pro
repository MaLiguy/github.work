#-------------------------------------------------
#
# Project created by QtCreator 2020-03-28T12:16:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = lab2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    imageviewer.cpp

HEADERS  += mainwindow.h \
    asmOpenCV.h \
    imageviewer.h

FORMS    += mainwindow.ui

DISTFILES += \
    CMakeLists.txt
