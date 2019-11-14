#include<opencv2/opencv.hpp>
#include<highgui/highgui.hpp>  //opencv highhui 模块头文件
#include<imgproc/imgproc.hpp> // opencv 图像处理头文件

using namespace cv;

int main()
{
	Mat srcImage = imread("F:\\MmVsPro\\OpenCV_dev\\ImageLib\\puzzle.png");

	imshow("【原始】腐蚀操作", srcImage);

	//进行腐蚀操作
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(srcImage, dstImage, element);

	//显示效果图
	imshow("【效果图】", dstImage);
	waitKey(0);
	return (0);
}
