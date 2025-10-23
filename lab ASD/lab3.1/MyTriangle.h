#include <string>
#include "MyPoint.h"

class MyTriangle{
  public:
    //costruttore
    MyTriangle(MyPoint p1, MyPoint p2, MyPoint p3);
    // visualizza le informazioni sul triangolo tipo "MyTriangle(v1=(x,y),v2=(x,y),v3=(x,y))"
    std::string toString() const ;
    //calcolo area
    double getArea() const ;
    //calcolo perimetro
    double getPerimeter() const ;
    // restituisce "Equilatero", "Isoscele" o "Scaleno"
    std::string getType() const ;
  private:
    MyPoint v1;
    MyPoint v2;
    MyPoint v3;
};