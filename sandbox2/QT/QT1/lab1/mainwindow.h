#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include"imageviewer.h"
//#include <QMainWindow>
#include <QtWidgets>

#include<opencv2/core.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_Exit_clicked();

    void on_pushButton_openimage_clicked();

    void on_pushButton_openvideo_clicked();



    void on_pushButton_opencamera_clicked();



private:
    Ui::MainWindow *ui;

    ImageViewer iv;

    QImage image;

    cv::Mat frame;

    bool loadFile(const QString &);

    bool loadVideo(const QString &);

    bool OpenCamera();
};

#endif // MAINWINDOW_H
