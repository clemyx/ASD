#include "MyPoint.h"

//costruttore: crea un punto con coordinate di default (0,0)          MyPoint p1; crea un punto p1
MyPoint::MyPoint(){
        x=0;
        y=0;
}

//costruttore: crea un punto con coordinate date (x,y)               MyPoint p2(3,5); crea un punto p2 con coordinate date    
MyPoint::MyPoint(double def_x, double def_y){
        x=def_x;
        y=def_y;
}

//legge la coordinata x del punto
double MyPoint::getX() const {
    return x;
}

//legge la coordinata y del punto
double MyPoint::getY() const {
    return y;
}

//modifica la coordinata x del punto
void MyPoint::setX(double new_x) {
    x=new_x;
}

//modifica la coordinata y del punto
void MyPoint::setY(double new_y) {
    y=new_y;
}

// restituisce la distanza con un altro punto
double MyPoint::distance(const MyPoint &p) const {
    return sqrt( (pow(x - p.getX() ,2)) + (pow(y - p.getY() ,2)));
}

// visualizza le coordinate del punto del tipo "MyPoint(x,y)"
std::string MyPoint::toString() const {
    return "("+std::to_string(x)+","+std::to_string(y)+")";
}