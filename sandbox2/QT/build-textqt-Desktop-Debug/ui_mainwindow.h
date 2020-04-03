/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *widget;
    QLabel *label_3;
    QWidget *tab_2;
    QDateTimeEdit *dateTimeEdit;
    QWidget *tab_4;
    QPushButton *pushButton_openimage;
    QWidget *tab_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_Exit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1153, 719);
        QFont font;
        font.setPointSize(16);
        font.setItalic(true);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QStringLiteral("background-image:url(/home/wumengli/sandbox/QT/textqt/2.jpg)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 200, 481, 351));
        tabWidget->setStyleSheet(QStringLiteral("background-image:url(/home/wumengli/sandbox/QT/textqt/4.jpg)"));
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, -20, 441, 241));
        label_3->setStyleSheet(QStringLiteral("font: 25 16pt \"Ubuntu\";"));
        tabWidget->addTab(widget, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        dateTimeEdit = new QDateTimeEdit(tab_2);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(270, 10, 194, 27));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_openimage = new QPushButton(tab_4);
        pushButton_openimage->setObjectName(QStringLiteral("pushButton_openimage"));
        pushButton_openimage->setGeometry(QRect(140, 90, 251, 111));
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 70, 291, 31));
        label->setStyleSheet(QLatin1String("border-top-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 255, 255, 255), stop:0.1 rgba(255, 255, 255, 255), stop:0.2 rgba(255, 176, 176, 167), stop:0.3 rgba(255, 151, 151, 92), stop:0.4 rgba(255, 125, 125, 51), stop:0.5 rgba(255, 76, 76, 205), stop:0.52 rgba(255, 76, 76, 205), stop:0.6 rgba(255, 180, 180, 84), stop:1 rgba(255, 255, 255, 0));\n"
"font: 57 italic 16pt \"Ubuntu\";\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));\n"
"color: rgb(179, 0, 89);\n"
""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(760, 0, 301, 71));
        label_2->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));\n"
"font: 75 oblique 16pt \"Waree\";"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 20, 67, 17));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(430, 30, 141, 17));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(420, 120, 201, 81));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 130, 271, 51));
        label_7->setStyleSheet(QLatin1String("font: 22pt \"Abyssinica SIL\";\n"
"color: rgb(170, 0, 127);"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 570, 561, 101));
        label_8->setStyleSheet(QStringLiteral("font: 57 italic 28pt \"Ubuntu\";"));
        pushButton_Exit = new QPushButton(centralWidget);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(860, 456, 191, 71));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1153, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_3->setText(QApplication::translate("MainWindow", "\345\201\245\345\272\267\347\232\204\347\224\237\346\264\273\347\272\252\345\276\213\357\274\232\n"
"1.\346\257\217\345\244\251\346\231\232\344\270\21211\347\202\271\344\271\213\345\211\215\345\277\205\351\241\273\347\235\241\350\247\211\343\200\202\n"
"2.\346\200\273\346\230\257\344\277\235\346\214\201\345\245\275\345\277\203\346\203\205\343\200\202\n"
"3.\350\256\260\345\276\227\345\220\203\346\227\251\351\244\220\357\274\214\350\256\260\345\276\227\350\257\264\346\231\232\345\256\211\343\200\202\n"
"\344\275\240\346\230\257\344\270\252\345\244\247\350\211\272\346\234\257\345\256\266\357\274\214\344\275\240\350\246\201\347\205\247\351\241\276\345\245\275\350\207\252\345\267\261\343\200\202 \342\200\213\342\200\213\342\200\213\n"
"", 0));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("MainWindow", " L ", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", " O", 0));
        pushButton_openimage->setText(QApplication::translate("MainWindow", "PushButton", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", " V", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "E", 0));
        label->setText(QApplication::translate("MainWindow", "A wise man does not fall in love", 0));
        label_2->setText(QApplication::translate("MainWindow", "\347\224\265\344\277\241172-\345\220\264\345\255\237\344\270\275-3170406035", 0));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "\342\200\234\346\231\256\351\200\232\345\260\217\345\255\251 \347\203\255\347\210\261\347\224\237\346\264\273\342\200\235 \342\200\213\342\200\213\342\200\213", 0));
        label_6->setText(QApplication::translate("MainWindow", "\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\227\217\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\n"
"\342\207\206 \343\205\244\343\205\244\343\205\244 \342\227\201 \343\205\244\343\205\244 \342\235\232\342\235\232  \343\205\244\343\205\244\342\226\267 \343\205\244\343\205\244\343\205\244 \342\206\273  \n"
"\360\235\231\245\360\235\231\241\360\235\231\226\360\235\231\256\360\235\231\241\360\235\231\236\360\235\231\250\360\235\231\251 / \360\235\231\242\360\235\231\244\360\235\231\253\360\235\231\236\360\235\231\232 ", 0));
        label_7->setText(QApplication::translate("MainWindow", "\351\200\200\345\275\271\351\255\224\346\263\225\345\260\221\345\245\263\346\227\245\350\256\260", 0));
        label_8->setText(QApplication::translate("MainWindow", "\313\201\341\277\201\314\255\313\200\313\201\341\277\201\314\256\313\200\313\201\341\277\201\314\261\313\200\313\201\341\277\201\314\245\313\200\313\201\341\277\201\314\274\313\200\313\201\341\277\201\314\251\313\200\313\201\341\277\201\314\254\313\200   \312\225\342\200\242\314\253\315\241\342\200\242 \312\224\342\200\242\314\253\315\241\342\200\242\340\275\273\312\225\342\200\242\314\253\315\241\342\200\242\312\224\342\200\242\315\223\315\241\342\200\242\312\224 \n"
"", 0));
        pushButton_Exit->setText(QApplication::translate("MainWindow", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
