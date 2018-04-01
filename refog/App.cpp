#include"defog.h"
using namespace cv;
int main()
{
	Mat src = imread("fog18.jpg");
	if (src.empty()) return -1;
	Mat gray;
	cvtColor(src, gray, CV_BGR2GRAY);
	DeFog deforg;
	//Mat deForg = deforg.darkChannelDefog(src);
	Mat resultImg = deforg.enhanceImage(src);

	devView(src);
	devView(resultImg);
	waitKey(0);
	return 0;
}