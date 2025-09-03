#ifndef __RECTANGLE_HH__
#define __RECTANGLE_HH__


class RectangleUtils;

class Rectangle{
  private:
    double _width;
    double _height;
  public:
    Rectangle();
    Rectangle(double width, double height);
    
    double getWidth() const;
    double getHeight() const;
    void setWidth(double width);
    void setHeight(double height);
    friend class RectangleUtils;

};
#endif
