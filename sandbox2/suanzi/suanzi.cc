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

	Mat can1,sob1,laps1,pre1,abslaps1;

/*canny*/
	
	Canny(image, can1, 150, 100,3 ); 

	namedWindow("canny",WINDOW_NORMAL);

	imshow("canny",can1);

/* sobel*/

	Mat grad_x, grad_y;  

    	Mat abs_grad_x, abs_grad_y;

	Sobel(image, grad_x, CV_16S, 1, 0, 3, 1, 1, BORDER_DEFAULT ); 

	convertScaleAbs( grad_x, abs_grad_x );

	Sobel(image, grad_y, CV_16S, 0, 1, 3, 1, 1, BORDER_DEFAULT ); 
 
    	convertScaleAbs( grad_y, abs_grad_y );  

	addWeighted( abs_grad_x, 0.5, abs_grad_y, 0.5, 0, sob1 );  
    
	namedWindow("sobel",WINDOW_NORMAL);

	imshow("sobel", sob1);

/*Laplacian*/

	
	Laplacian(image, laps1, CV_16S, 3, 1, 0, BORDER_DEFAULT);
	
	convertScaleAbs(laps1, abslaps1);

	namedWindow("Laplacian",WINDOW_NORMAL);

	imshow("Laplacian", abslaps1);

/*pretitt*/

	
	Mat imgx,imgy;

	Mat kernel_x = (Mat_<int>(3, 3) << -1, -1, -1, 0, 0, 0, 1, 1, 1);

	filter2D(image, imgx, -1, kernel_x, Point(-1, -1), 0, 0);

	Mat kernel_y = (Mat_<int>(3, 3) << -1, 0, 1, -1, 0, 1, -1, 0, 1);

	filter2D(image, imgy, -1, kernel_y, Point(-1, -1), 0, 0);

	addWeighted( imgx, 0.5, imgy, 0.5, 0, pre1 );

	namedWindow("pretitt",WINDOW_NORMAL);

	imshow("pretitt", pre1);

	waitKey(0);

	return 0;

}
