#include "studenti.h"

//costruttore di default
studenti::studenti(){
    elenco_studenti.resize(numStudenti);
}

//leggere i-esimo studente
studente studenti::getStudente(const int i) const {
    return elenco_studenti[i];
}

//scrivere i-esimo studente
void studenti::setStudente(const studente &s, const int i){
    elenco_studenti[i]=s;
}

//stampa l'i-esimo studente
void studenti::printStudente(const int i) const {
    elenco_studenti[i].printStudente();
}