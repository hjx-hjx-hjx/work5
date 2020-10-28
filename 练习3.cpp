#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main() {
	VideoCapture cap;
	cap.open(0);
	if (!cap.isOpened()) {
		cout << "���ܴ���Ƶ" << endl;
		return -1;
	}
	Mat frame, dstMat_x, dstMat_y, dstMat_xy;
	cap.read(frame);
	GaussianBlur(frame, dstMat_x, Size(9, 9), 15, 0);
	GaussianBlur(frame, dstMat_y, Size(9, 9), 0, 15);
	GaussianBlur(frame, dstMat_xy, Size(9, 9), 10, 10);
	imshow("ԭͼ", frame);
	imshow("x�����ֵ", dstMat_x);
	imshow("y�����ֵ", dstMat_y);
	imshow("xy�����ֵ", dstMat_xy);
	waitKey(0);
}