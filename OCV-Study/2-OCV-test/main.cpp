#include<opencv2/opencv.hpp>
using namespace cv;//

int main()
{
	Mat srcImage = imread("F:\\MmVsPro\\OpenCV_dev\\ImageLib\\puzzle.png");
	imshow("��ԭʼͼ��",srcImage);
	waitKey(0);
	return (0);
}

