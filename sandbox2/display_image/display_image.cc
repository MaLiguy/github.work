#include <opencv2/opencv.hpp>
#include<iostream>
#include<string>

using namespace std;
using namespace cv;


int main(int argc, char*argv[])
{

   if(argc < 2) {

      cout << "Usage: print_image_attrib <image_filename >" << endl ;

      return 0;
  }


	string image_name(argv[1]);

	Mat image = imread(image_name,IMREAD_GRAYSCALE);

	int histsize = 256;

	float range[] = { 0,255 };

	const float*histRanges = { range };
	
	Mat hist;

	Mat result;

	cv::calcHist(&image, 1, 0, Mat(), hist, 1, &histsize, &histRanges, true, false);

	int hist_h = 400;

	int hist_w = 512;

	int bin_w = hist_w / histsize;

	Mat histImage(hist_w, hist_h, CV_8UC3, Scalar(0, 0, 0));

	normalize(hist, hist, 0, hist_h, NORM_MINMAX, -1, Mat());

for (int i = 1; i < histsize; i++)
	{
		
	line(histImage, Point((i - 1)*bin_w, hist_h - cvRound(hist.at<float>(i - 1))),

	Point((i)*bin_w, hist_h - cvRound(hist.at<float>(i))), Scalar(255, 255, 255), 2, CV_AA);
		
	}

	imshow("output", histImage);

	namedWindow("Display Window",WINDOW_NORMAL);

	imshow("Display Window",image);
	
	
	result = image.clone();

	threshold(image, result, 50, 220,CV_THRESH_BINARY);

	namedWindow("二值化图像");

	imshow("二值化图像", result);

	waitKey(0);

	return 0;

}
