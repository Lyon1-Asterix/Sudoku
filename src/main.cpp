#include <opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
#include <iostream>


using std::cout;
using std::cerr;
using std::endl;

using namespace cv;

int main(int argc, char* argv[])
{
  if(argc != 2)
    {
      cout << "gimme a file" << endl;
      return -1;
    }

  Mat image = imread(argv[1], CV_LOAD_IMAGE_COLOR);
  if(!image.data)
    {
      cerr << "srsly, gimme a picture br0" << endl;
      return -1;
    }
  imshow("coucou", image);
  waitKey(0);
  
  
  return 0;
}
