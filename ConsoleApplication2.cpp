// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main() {
	Mat image;

	image = imread("C:\\Users\\Utkarsh\\Downloads\\OIP (2).jpg", IMREAD_GRAYSCALE);
	cout << "The dimension of image is :" << image.rows << "x" << image.cols << endl;
	if (image.empty()) {
		cout << "Error image not loaded" << endl;
	}
	namedWindow("displayit", WINDOW_AUTOSIZE);


	imshow("displayit", image);
	waitKey(0);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
