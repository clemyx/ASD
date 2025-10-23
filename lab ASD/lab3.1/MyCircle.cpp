#include "MyCircle.h"
#include "MyPoint.h"

//definizione pi greco
const double PI=3.14159;

//costruttore di default
MyCircle::MyCircle(){
    radius=0;
    center={0,0};
}

//costruttore con valori definiti
MyCircle::MyCircle(MyPoint p, double r){
    center=p;
    radius=r;
}

//legge le coordinate del centro della circonferenza
MyPoint MyCircle::getCenter() const {
    return center;
}

//legge il raggio della circonferenza
double MyCircle::getRadius() const {
    return radius;
}

//scrive le coordinate della circonferenza
void MyCircle::setCenter(const MyPoint &new_center){
    center=new_center;
}

//scrive il raggio della circonferenza
void MyCircle::setRadius(const double new_radius){
    radius=new_radius;
}

// visualizza le informazioni sul cerchio tipo "MyCircle(radius=r,center=(x,y))"
std::string MyCircle::toString() const {
    return "(radius="+std::to_string(radius)+",center="+center.toString()+")";
}

//calocla l'area della circonferenza
double MyCircle::getArea() const {
    return PI*radius*radius;
}

//calcola la lunghezza della circonferenza
double MyCircle::getCircumference() const {
    return 2*PI*radius;
}

// restituisce la distanza dal centro al centro di un altro cerchio
double MyCircle::distance(const MyCircle &c) const {
    return center.distance(c.center);
} 