#ifndef _LISTA_H
#define _LISTA_H

#include "Stack.h"

//definisco il tipo di elementi che avrà la lista
#define tipoelem Stack*

//definisco la struttura cella
struct cella{
    tipoelem elemento;
    cella *successiva;
    cella *precedente;
};

//definisco posizione
typedef cella *posizione;

class Lista{
    private:
        cella *sentinella;
    public:
        //costruttore di default (lista vuota)
        Lista();
        //ritorna la prima posizione valida
        cella *begin();
        //ritorna l'ultima posizione valida
        cella *end();
        //dice se la lista è vuota o no
        bool empty();
        //inserisce una cella
        void insert(posizione p, tipoelem x);
        //rimuove una cella
        void remove(posizione p);
        //stampa la lista
        void print();
        //ritorna la quantità di cella presenti nella lista
        int lunghezza();
        //seleziona la cella
        posizione selezione(const int n);
};

#endif