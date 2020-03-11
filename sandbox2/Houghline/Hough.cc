#include <opencv2/opencv.hpp>
#include<iostream>
#include<string>

using namespace std;
using namespace cv;


int main()
{



	Mat image = imread("QQ.jpg");

	namedWindow("img",WINDOW_NORMAL);

	imshow("img", image);

	Mat src_gray;

    	cvtColor(image, src_gray, CV_WINDOW_AUTOSIZE);

    	Mat src_canny;

    	Canny(src_gray, src_canny, 120, 180,3); //边缘检测

	namedWindow("edge img",WINDOW_NORMAL);

    	imshow("edge img", src_canny);
    
	 //霍夫直线检测
    
	vector<Vec4f> line_data;

    	HoughLinesP(src_canny, line_data, 3, CV_PI/180.0, 300, 500 ,20);

    	//把得到的直线显示在图中
    	Scalar color = Scalar(255, 255, 0);

    	for (size_t i = 0; i < line_data.size(); i++){

        Vec4f temp = line_data[i];

        line(image, Point(temp[0], temp[1]), Point(temp[2], temp[3]), color,3,CV_AA);}

	namedWindow("霍夫检测",WINDOW_NORMAL);

	imshow("霍夫检测", image);

	waitKey(0);

	return 0;

}
