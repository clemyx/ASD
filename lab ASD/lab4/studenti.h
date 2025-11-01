#ifndef _STUDENTI_H
#define _STUDENTI_H
#include "studente.h"

class studenti{
    public:
        //costruttore di default
        studenti();
        //leggere i-esimo studente
        studente getStudente(const int i) const ;
        //scrivere i-esimo studente
        void setStudente(const studente &s, const int i);
        //stampa i-esimo studente
        void printStudente(const int i) const ;
    private:
        std::vector<studente> elenco_studenti;
        const int numStudenti=3;
};

#endif