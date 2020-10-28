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
	Mat frame, srcMat, dstMat;
	cap.read(frame);
	//cvtColor(frame,srcMat,CV_RGB2GRAY);
	medianBlur(frame, dstMat, 15);

	imshow("原图", frame);

	imshow("滤波图", dstMat);
	waitKey(0);
}