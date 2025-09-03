#include <iostream>
#include "rectangle.hh"
#include "rectangleUtils.hh"
using namespace std;
int main()
{
  Rectangle rect1 = Rectangle();
  Rectangle rect2 = Rectangle(4.0,5.0);

   cout<<"rect1 : ( "<<rect1.getWidth()<<","<<rect2.getHeight()<<")";
   cout<<"rect2 : ( "<<rect2.getWidth()<<","<<rect2.getHeight()<<")";
   cout<<"area of rect1 : ( "<<RectangleUtils::calculateArea(rect1)<<",and it's perimeter is "<<RectangleUtils::calculatePerimeter(rect1)<<")";
      cout<<"area of rect2 : ( "<<RectangleUtils::calculateArea(rect2)<<",and it's perimeter is "<<RectangleUtils::calculatePerimeter(rect2)<<")";
}

