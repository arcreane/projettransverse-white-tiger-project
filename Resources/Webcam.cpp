#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

//importer image

void main() {
     
    string path = "Ressources/test.png";
    Mat img = imread(path);
    imshow("image", img); 
    waitKey(0);
}