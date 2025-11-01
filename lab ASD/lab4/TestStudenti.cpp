#include <iostream>
#include "studenti.h"

using namespace std;

int main(){
    //costrutisco un oggetto studenti
    studenti ss;

    //costruisco tre oggetti studente
    studente s1("Algoritmi e Strutture Dati","Programmazione","Analisi Matematica","Ingegneria del Software","Linguaggi di Programmazione");
    s1.setMatricola("863945");
    s1.setNome("Clemyx");
    s1.setEsame(27,1);
    s1.setEsame(20,2);
    s1.setEsame(18,4);

    studente s2("Algoritmi e Strutture Dati","Programmazione","Analisi Matematica","Ingegneria del Software","Linguaggi di Programmazione");
    s2.setNome("Gianfilippo");
    s2.setEsame(22,0);
    s2.setEsame(20,1);
    s2.setEsame(18,3);
    s2.setEsame(29,4);

    studente s3("Algoritmi e Strutture Dati","Programmazione","Analisi Matematica","Ingegneria del Software","Linguaggi di Programmazione");
    s3.setMatricola("947474");
    s3.setEsame(23,2);

    ss.setStudente(s1,0);
    ss.setStudente(s2,1);
    ss.setStudente(s3,2);

    cout<<"----------------------------STUDENTE 1----------------------------"<<endl;
    ss.printStudente(0);

    cout<<endl<<endl<<"----------------------------STUDENTE 2----------------------------"<<endl;
    ss.printStudente(1);

    cout<<endl<<endl<<"----------------------------STUDENTE 3----------------------------"<<endl;
    ss.printStudente(2);

    return 0;
}