#include <iostream>
#include "MyPoint.h"
#include "MyCircle.h"
#include "MyTriangle.h"

using namespace std;

int main(){
    cout<<"==================================================LAB 3.1=================================================="<<endl<<endl;
    //circonferenza
    cout<<"===============================================CIRCONFERENZA==============================================="<<endl;
    MyCircle c1,c2;
    MyPoint p;
    double x,y,r;
    cout<<"Inserisci la coordinata X: ";
    cin>>x;
    p.setX(x);
    cout<<"Inserisci la coordinata Y: ";
    cin>>y;
    p.setY(y);
    c1.setCenter(p);
    cout<<"Inserisci il raggio: ";
    cin>>r;
    c1.setRadius(r);
    cout<<"Area: "<<c1.getArea()<<endl;
    cout<<"Lunghezza circonferenza: "<<c1.getCircumference()<<endl;
    cout<<"Distanza tra il centro della tua circonferenza "<<c1.toString()<<" e il centro di una circonferenza in origine "<<c2.toString()<<": "<<c1.distance(c2)<<endl<<endl;
    //triangolo
    cout<<"=================================================TRINAGOLO================================================="<<endl;
    MyPoint p1,p2,p3;
    x=0; y=0;
    cout<<"Inserisci la coordinata X del primo vertice: ";
    cin>>x;
    p1.setX(x);
    cout<<"Inserisci la coordinata Y del primo vertice: ";
    cin>>y;
    p1.setY(y);
    cout<<"Inserisci la coordinata X del secondo vertice: ";
    cin>>x;
    p2.setX(x);
    cout<<"Inserisci la coordinata Y del secondo vertice: ";
    cin>>y;
    p2.setY(y);
    cout<<"Inserisci la coordinata X del terzo vertice: ";
    cin>>x;
    p3.setX(x);
    cout<<"Inserisci la coordinata Y del terzo vertice: ";
    cin>>y;
    p3.setY(y);
    MyTriangle t(p1,p2,p3);
    cout<<"Informazioni sul triangolo appena creato: "<<t.toString()<<endl;
    cout<<"Area del triangolo: "<<t.getArea()<<endl;
    cout<<"Perimetro del triangolo: "<<t.getPerimeter()<<endl;
    cout<<"Tipo di triangolo: "<<t.getType()<<endl;
    getchar();
    getchar();
    return 0;
}