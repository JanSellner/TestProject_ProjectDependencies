#include "ImageFunctions.h"
#include <opencv2/core.hpp>

ImageFunctions::ImageFunctions()
{}

ImageFunctions::~ImageFunctions()
{}

int ImageFunctions::imageFunction(const std::vector<int>& data)
{
	cv::Mat m(200, 200, CV_8UC1);
	m.setTo(1);

	return cv::sum(m)[0];
}
