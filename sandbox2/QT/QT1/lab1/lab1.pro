#-------------------------------------------------
#
# Project created by QtCreator 2020-03-22T10:37:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = lab1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    imageviewer.cpp

HEADERS  += mainwindow.h \
    imageviewer.h \
    asmOpenCV.h

FORMS    += mainwindow.ui

DISTFILES += \
    CMakeLists.txt
