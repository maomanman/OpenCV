#include<opencv2/opencv.hpp>
#include<highgui/highgui.hpp>  //opencv highhui ģ��ͷ�ļ�
#include<imgproc/imgproc.hpp> // opencv ͼ����ͷ�ļ�

using namespace cv;

int main()
{
	Mat srcImage = imread("F:\\MmVsPro\\OpenCV_dev\\ImageLib\\puzzle.png");

	imshow("��ԭʼ����ʴ����", srcImage);

	//���и�ʴ����
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(srcImage, dstImage, element);

	//��ʾЧ��ͼ
	imshow("��Ч��ͼ��", dstImage);
	waitKey(0);
	return (0);
}
