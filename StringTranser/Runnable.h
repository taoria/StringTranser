#pragma once
#include <QRunnable>
#include <QTextBrowser>
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
#include <opencv2/imgproc/imgproc.hpp>  
using namespace cv;
class Runnable :public QRunnable

{
	char RGBToChar(QRgb qrgb);
	QTextBrowser *qtb;
	std::string str;
	void colorReduce9(cv::Mat& image, int nums, int div = 64);

	Mat getFrame(std::string avipath, int maxNum);


	QString path;
public:
	std::stringstream ss;
	Runnable(QString path, QTextBrowser *qtb);

	~Runnable();



	void run() override;

protected:

private:

};