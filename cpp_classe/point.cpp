#include <iostream>

#include "point.hh"
using namespace ::std;


Point::Point(){
  _x=0 ;
  _y=0 ;
}
Point::Point(double x, double y){
  _x=x;
  _y=y;
}
Point::Point(const Point& pnd){
  _x=pnd._x  ;
  _y=pnd._y  ;
}
Point::double getX(){
  return _x;
}
Point:: double getY(){
  return _y;
}
Point:: setX(double x){
  _x=x;
}
Point:: setY(double y){
  _y=y;
}
distance(const Point& p1, const Point& p2){
  double dx = p1.getX() - p2.getX();
  double dy = p1.getY() - p2.getY();

  return std::sqrt(dx * dx + dy * dy);

}
