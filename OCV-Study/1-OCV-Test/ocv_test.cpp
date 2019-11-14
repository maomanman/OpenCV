
#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main(int argc, char** argv) {
	Mat image = imread("F:/MmVsPro/OpenCV_dev/ImageLib/one_way_train_0001.jpg");
	if (image.empty()) {
		printf("could not load image...\n");
		return -1;
	}
	namedWindow("test_opencv_setup", 0);
	imshow("test_opencv_srtup", image);
	waitKey(0);
	return 0;
}