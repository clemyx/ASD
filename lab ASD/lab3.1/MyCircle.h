#include <string>
#include "MyPoint.h"

class MyCircle{
  public:
  //costruttori
    MyCircle();
    MyCircle(MyPoint p, double r);
    //lettura
    double getRadius() const ;
    MyPoint getCenter() const ;
    //scrittura
    void setCenter(const MyPoint &p);
    void setRadius(const double new_radius);
    //lettura dati circonferenza
    std::string toString() const ;
    //calcolo area
    double getArea() const ;
    //calcolo circonferenza
    double getCircumference() const ;
    //calcolo distanza tra centri di due circonferenze
    double distance(const MyCircle &c) const ;
  private:
    MyPoint center;
    double radius;
};