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
	Mat frame, srcMat, dstMat;
	cap.read(frame);
	blur(frame, dstMat, Size(7, 7));
	imshow("ԭͼ", frame);
	imshow("�˲�ͼ", dstMat);
	waitKey(0);
}