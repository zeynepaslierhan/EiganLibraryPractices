#include <Eigen>
#include <opencv2/opencv.hpp>
#include <opencv2/core/eigen.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {

	Mat img_map = imread("C:/Users/zerha/Documents/GitHub/EiganLibraryPractices/EigenLibraryPractices1/files/yeni_dunya.pgm", IMREAD_GRAYSCALE);

	Eigen::MatrixXi img_eigen;

	cv2eigen(img_map, img_eigen);

	cout << "map: \n" << img_eigen.topRightCorner(25, 25) << endl;

}