#ifndef _LISTA_H
#define _LISTA_H

//definisco il tipo di elementi che avrà la lista
#define tipoelem char

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
        //inverte le posizioni della lista (la prima cella diventa l'ultima e viceversa)
        void inverti();
        //dice se la lista è palindorma o no
        bool palindroma();
};

#endif