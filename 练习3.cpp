#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main() {
	VideoCapture cap;
	cap.open(0);
	if (!cap.isOpened()) {
		cout << "不能打开视频" << endl;
		return -1;
	}
	Mat frame, dstMat_x, dstMat_y, dstMat_xy;
	cap.read(frame);
	GaussianBlur(frame, dstMat_x, Size(9, 9), 15, 0);
	GaussianBlur(frame, dstMat_y, Size(9, 9), 0, 15);
	GaussianBlur(frame, dstMat_xy, Size(9, 9), 10, 10);
	imshow("原图", frame);
	imshow("x方向均值", dstMat_x);
	imshow("y方向均值", dstMat_y);
	imshow("xy方向均值", dstMat_xy);
	waitKey(0);
}