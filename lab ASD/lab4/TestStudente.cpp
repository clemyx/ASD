#include "studente.h"
#include <iostream>

using namespace std;

int main(){
    studente s1;
    studente s2("Algoritmi e Strutture Dati","Programmazione","Analisi Matematica","Ingegneria del Software","Linguaggi di Programmazione");
    s2.setMatricola("863945");
    s2.setNome("Clemyx");
    s2.setEsame(27,1);
    s2.setEsame(20,2);
    s2.setEsame(18,4);
    cout<<endl<<endl;
    s2.printStudente();
    cout<<endl;
    cout<<"MEDIA VOTI: "<<s2.getMedia();
    return 0;
}
