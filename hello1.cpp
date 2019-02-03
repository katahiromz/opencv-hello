#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

int main(void)
{
    cv::Mat img = cv::imread("image.png");

    printf("width: %d\n", img.cols);
    printf("height: %d\n", img.rows);

    cv::imshow("image.png", img);
    cv::waitKey();

    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);
    cv::imwrite("gray.jpg", gray);

    cv::Mat binary;
    cv::threshold(gray, binary, 30, 255, cv::THRESH_OTSU);
    cv::imwrite("binary.jpg", binary);

    cv::Mat blur;
    cv::GaussianBlur(img, blur, cv::Size(5, 5), 0);
    cv::imwrite("blur.tif", blur);

    return 0;
}
