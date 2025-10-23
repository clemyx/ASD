#ifndef MYPOINT_H
#define MYPOINT_H

#include <cmath>
#include <string>

class MyPoint {
  public:
    //costruttori
    MyPoint();
    MyPoint(double x, double y);
    //lettura
    double getX() const;
    double getY() const;
    //scrittura
    void setX(double new_x);
    void setY(double new_y);
    //calcolo distanza
    double distance(const MyPoint &p) const;
    //lettura coordinate
    std::string toString() const;
  private:
    double x;
    double y;
};

#endif