#include<opencv2/opencv.hpp>
using namespace cv;//

int main()
{
	Mat srcImage = imread("../../ImageLib/puzzle.png");
	imshow("��ԭʼͼ��",srcImage);
	waitKey(0);
	return (0);
}

