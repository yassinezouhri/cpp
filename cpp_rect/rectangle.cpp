#include <iostream>
#include <cmath>
#include "rectangle.hh"
using namespace ::std;
 
Rectangle::Rectangle(){
  _width=0; _height=0;
}
Rectangle::Rectangle(double width, double height){
  _width=width; _height=height;
}
double Rectangle::getWidth() const{
  return _width;
}
double Rectangle::getHeight() const{
  return _height;
}
void Rectangle::setWidth(double width){
  _width=width;
}
void Rectangle::setHeight(double height){
  _height=height;
}
