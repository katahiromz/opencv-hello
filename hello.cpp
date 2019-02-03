#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

int main(void)
{
    cv::Mat img = cv::imread("image.png");

    printf("width: %d\n", img.cols);
    printf("height: %d\n", img.rows);

    cv::imshow("image.png", img);
    cv::waitKey();

    cv::imwrite("image.jpg", img);
    return 0;
}
