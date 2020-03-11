#include <opencv2/opencv.hpp>
#include <iostream>
#include <math.h>

using namespace cv;
using namespace std;


int main(int argc, char** argv)
{
    Mat src, src_gray;
    src = imread("QQ.jpg");
    char INPUT_TITLE[] = "input image";
    imshow(INPUT_TITLE, src);
    cvtColor(src, src_gray, COLOR_BGR2GRAY);
    GaussianBlur(src_gray, src_gray, Size(9, 9), 2, 2);

    vector<Vec3f> circles;
    HoughCircles(src_gray, circles, HOUGH_GRADIENT, 1.5, 10, 200, 100, 0, 0);

    for (size_t i = 0; i < circles.size(); i++)
    {
        Point center(cvRound(circles[i][0]), cvRound(circles[i][1]));
        int radius = cvRound(circles[i][2]);
        circle(src, center, 3, Scalar(0, 255, 0), -1, 8, 0);
        circle(src, center, radius, Scalar(155, 50, 255), 3, 8, 0);
    }
    imshow("效果图", src);
    
    waitKey(0);
    return 0;

}
