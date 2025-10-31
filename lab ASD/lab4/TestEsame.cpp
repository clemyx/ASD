#include <iostream>
#include "esame.h"

using namespace std;

int main(){
    esame e1;
    esame e2("Algoritmi e Strutture Dati");
    esame e3("Algoritmi e Strutture Dati",30);
    cout<<"e1: "<<e1.getEsame()<<endl;
    cout<<"e1: "<<e1.getVoto()<<endl;
    cout<<"e1: "<<e1.isSostenuto()<<endl;
    cout<<"e2: "<<e2.getEsame()<<endl;
    cout<<"e2: "<<e2.getVoto()<<endl;
    cout<<"e2: "<<e2.isSostenuto()<<endl;
    cout<<"e3: "<<e3.getEsame()<<endl;
    cout<<"e3: "<<e3.getVoto()<<endl;
    cout<<"e3: "<<e3.isSostenuto()<<endl;

    return 0;
}