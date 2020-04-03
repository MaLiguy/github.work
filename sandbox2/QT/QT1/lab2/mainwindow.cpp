#include "mainwindow.h"
#include "ui_mainwindow.h"

#include"asmOpenCV.h"

#include <iostream> // for standard I/O
#include <string>   // for strings
#include <iomanip>  // for controlling float print precision
#include <sstream>  // string to number conversion
#include <opencv2/core.hpp>     // Basic OpenCV structures (cv::Mat, Scalar)
#include <opencv2/imgproc.hpp>  // Gaussian Blur
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>  // OpenCV window I/O





MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::loadFile(const QString &fileName)
{
    QImageReader reader(fileName);
    reader.setAutoTransform(true);
    /*const QImage*/ image = reader.read();
    if (image.isNull()) {
        QMessageBox::information(this, QGuiApplication::applicationDisplayName(),
                                 tr("Cannot load %1.").arg(QDir::toNativeSeparators(fileName)));
        setWindowFilePath(QString());
        iv.imageLabel->setPixmap(QPixmap());
        iv.imageLabel->adjustSize();
        return false;
    }
//! [2] //! [3]
    iv.imageLabel->setPixmap(QPixmap::fromImage(image));
//! [3] //! [4]
    iv.scaleFactor = 1.0;

//    printAct->setEnabled(true);
    iv.fitToWindowAct->setEnabled(true);
    iv.updateActions();

    if (!iv.fitToWindowAct->isChecked())
        iv.imageLabel->adjustSize();

    setWindowFilePath(fileName);
    iv.show();
    return true;
}


bool MainWindow::loadVideo(const QString &fileName)
{
//    QImageReader reader(fileName);
//    reader.setAutoTransform(true);
//    /*const QImage*/ image = reader.read();
    using namespace cv;
    using namespace std;
    int frameNum = -1;
    VideoCapture video(fileName.toStdString());

    if (!video.isOpened()) {
        QMessageBox::information(this, QGuiApplication::applicationDisplayName(),
                                 tr("Cannot load %1.").arg(QDir::toNativeSeparators(fileName)));
        setWindowFilePath(QString());
        iv.imageLabel->setPixmap(QPixmap());
        iv.imageLabel->adjustSize();
        return false;
    }
    video>>frame;
    ++frameNum;
    image =ASM::cvMatToQImage(frame);

//! [2] //! [3]
    iv.imageLabel->setPixmap(QPixmap::fromImage(image));
//! [3] //! [4]
    iv.scaleFactor = 1.0;

//    printAct->setEnabled(true);
    iv.fitToWindowAct->setEnabled(true);
    iv.updateActions();

    if (!iv.fitToWindowAct->isChecked())
        iv.imageLabel->adjustSize();

    setWindowFilePath(fileName);

    iv.show();
    while(1)
    {video>>frame;
        if(frame.empty())
        {
            cout<<"OVER!";
            break;
        }
        ++frameNum;
        image =ASM::cvMatToQImage(frame);

    //! [2] //! [3]
        iv.imageLabel->setPixmap(QPixmap::fromImage(image));
    //! [3] //! [4]
        iv.scaleFactor = 1.0;

    //    printAct->setEnabled(true);
        iv.fitToWindowAct->setEnabled(true);
        iv.updateActions();

        if (!iv.fitToWindowAct->isChecked())
            iv.imageLabel->adjustSize();

        setWindowFilePath(fileName);
        char c = (char)waitKey(20);

        iv.update();

    }
    return true;
}


bool MainWindow::OpenCamera()
{

    using namespace cv;
    using namespace std;
    cv::VideoCapture video;
    int frameNum = -1;

    if (!video.open(0)) {

        std::cout <<"open camera failed!"<< std::endl;
        return false;
    }
    video>>frame;
    ++frameNum;
    image =ASM::cvMatToQImage(frame);

//! [2] //! [3]
    iv.imageLabel->setPixmap(QPixmap::fromImage(image));
//! [3] //! [4]
    iv.scaleFactor = 1.0;

//    printAct->setEnabled(true);
    iv.fitToWindowAct->setEnabled(true);
    iv.updateActions();

    if (!iv.fitToWindowAct->isChecked())
        iv.imageLabel->adjustSize();

    //setWindowFilePath(fileName);

    iv.show();
    while(1)
    {video.read(frame);
       if(iv.isHidden())
       { video.release();
           break;
       }
        ++frameNum;
        image =ASM::cvMatToQImage(frame);

    //! [2] //! [3]
        iv.imageLabel->setPixmap(QPixmap::fromImage(image));
    //! [3] //! [4]
        iv.scaleFactor = 1.0;

    //    printAct->setEnabled(true);
        iv.fitToWindowAct->setEnabled(true);
        iv.updateActions();

        if (!iv.fitToWindowAct->isChecked())
            iv.imageLabel->adjustSize();

        //setWindowFilePath(fileName);
        char c = (char)waitKey(20);

        iv.update();

    }
    return true;
}





void MainWindow::on_pushButton_openimage_clicked()
{
    QStringList mimeTypeFilters;
    foreach (const QByteArray &mimeTypeName, QImageReader::supportedMimeTypes())
        mimeTypeFilters.append(mimeTypeName);
    mimeTypeFilters.sort();
    const QStringList picturesLocations = QStandardPaths::standardLocations(QStandardPaths::PicturesLocation);
    QFileDialog dialog(this, tr("Open File"),
                       picturesLocations.isEmpty() ? QDir::currentPath() : picturesLocations.last());
    dialog.setAcceptMode(QFileDialog::AcceptOpen);
    dialog.setMimeTypeFilters(mimeTypeFilters);
    dialog.selectMimeTypeFilter("image/jpeg");

    while (dialog.exec() == QDialog::Accepted && !loadFile(dialog.selectedFiles().first())) {}

}



void MainWindow::on_pushButton_openvideo_clicked()
{
    QStringList mimeTypeFilters;
//    foreach (const QByteArray &mimeTypeName, QImageReader::supportedMimeTypes())
        mimeTypeFilters.append("video/avi");
    mimeTypeFilters.sort();
    const QStringList picturesLocations = QStandardPaths::standardLocations(QStandardPaths::PicturesLocation);
    QFileDialog dialog(this, tr("Open File"),
                       picturesLocations.isEmpty() ? QDir::currentPath() : picturesLocations.last());
    dialog.setAcceptMode(QFileDialog::AcceptOpen);
    dialog.setMimeTypeFilters(mimeTypeFilters);
    dialog.selectMimeTypeFilter("video/avi");

    while (dialog.exec() == QDialog::Accepted && !loadVideo(dialog.selectedFiles().first())) {}

}




void MainWindow::on_pushButton_opencamera_clicked()
{
    OpenCamera();
}

//void MainWindow::on_pushButton_video_clicked()
//{
//    QStringList mimeTypeFilters;
////    foreach (const QByteArray &mimeTypeName, QImageReader::supportedMimeTypes())
//        mimeTypeFilters.append("video/avi");
//    mimeTypeFilters.sort();
//    const QStringList picturesLocations = QStandardPaths::standardLocations(QStandardPaths::PicturesLocation);
//    QFileDialog dialog(this, tr("Open File"),
//                       picturesLocations.isEmpty() ? QDir::currentPath() : picturesLocations.last());
//    dialog.setAcceptMode(QFileDialog::AcceptOpen);
//    dialog.setMimeTypeFilters(mimeTypeFilters);
//    dialog.selectMimeTypeFilter("video/avi");

//    while (dialog.exec() == QDialog::Accepted && !loadVideo(dialog.selectedFiles().first())) {}
//}

//void MainWindow::on_pushButton_camera_clicked()
//{
//    OpenCamera();
//}



void MainWindow::on_pushButton_exit_clicked()
{
    this->close();
}
