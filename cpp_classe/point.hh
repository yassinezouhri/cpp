#ifndef __POINT_HH__
#define __POINT_HH__

class Point{
  private:
    double _x;
    double _y;
  public:
    Point();
    Point(double x, double y);
    Point(const Point&);
    double getX() ;
    double getY();
    void setX(double x);
    void setY(double y);
    double distance(const Point&, const Point&);

};





#endif
