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
	while (1) {
		Mat frame, dstMat_x, dstMat_y, dstMat_xy;
		cap.read(frame);
		Sobel(frame, dstMat_x, CV_8U, 1, 0, 3);
		Sobel(frame, dstMat_y, CV_8U, 0, 1, 3);
		imshow("原图", frame);
		imshow("x方向边缘提取", dstMat_x);
		imshow("y方向边缘提取", dstMat_y);
		waitKey(30);
	}
}