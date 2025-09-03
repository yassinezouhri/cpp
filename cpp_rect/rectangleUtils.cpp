#include <iostream>
#include <cmath>
#include "rectangleUtils.hh"
using namespace ::std;
 
double RectangleUtils::calculateArea(const Rectangle& rect){
  return rect._width*rect._height;
}   
double RectangleUtils::calculatePerimeter(const Rectangle& rect){
  return 2*(rect._width+rect._height);
}
