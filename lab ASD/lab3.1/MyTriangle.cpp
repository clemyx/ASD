#include "MyPoint.h"
#include "MyTriangle.h"
#include <cmath>

//costruttore
MyTriangle::MyTriangle(MyPoint p1, MyPoint p2, MyPoint p3){
    v1=p1; v2=p2; v3=p3;
}

 // visualizza le informazioni sul triangolo tipo "MyTriangle(v1=(x,y),v2=(x,y),v3=(x,y))"
std::string MyTriangle::toString() const {
    return "(v1="+v1.toString()+",v2="+v2.toString()+",v3="+v3.toString()+")";
}

//calcolo area del triangolo
double MyTriangle::getArea() const {
    return (std::abs( v1.getX()*( v2.getY()-v3.getY() ) + v2.getX()*( v3.getY()-v1.getY() ) + v3.getX()*( v1.getY()-v2.getY() ) ))/2;
}

//calcolo perimetro del triangolo
double MyTriangle::getPerimeter() const {
    return v1.distance(v2) + v2.distance(v3) + v3.distance(v1);
}

 // restituisce "Equilatero", "Isoscele" o "Scaleno"
std::string MyTriangle::getType() const {
    if(v1.distance(v2)==v2.distance(v3) && v1.distance(v3)==v3.distance(v2)){
        return "Equilatero";
    } else if(v1.distance(v2)!=v2.distance(v3) && v1.distance(v3)!=v3.distance(v2)){
        return "Scaleno";
    } else {
        return "Isoscele";
    }
}