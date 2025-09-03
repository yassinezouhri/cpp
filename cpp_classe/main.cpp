#include <iostream>
#include "point.hh"
using namespace std;
int main()
{
   Point p1 = Point();
   Point p2 = Point(3.0, 4.0);
   
   cout<<"p1 : ( "<<p1.getX()<<","<<p1.getY()<<")";
   cout<<"p2 : ( "<<p2.getX()<<","<<p2.getY()<<")";
}

