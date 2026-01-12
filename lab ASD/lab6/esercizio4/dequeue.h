#ifndef _DEQUEUE_H
#define _DEQUEUE_H

//definisco il tipo di dato che la struttura dati conterrà
#define type int

//definisco i tipi di dati che possiede il nodo
struct node{
    node *next;
    node *prev;
    type value;
};

//il tipo posizione indica un puntatore di un nodo
using position=node*;

class dequeue{
    private:
        position front;
        position back;
    public:
        //costruttore
        dequeue();
        //costruttore con un dato in ingresso
        dequeue(type value);
        //indica se la coda è vuota o no
        bool empty();
        //inserimento nuovo dato
        void insert(const type value, const bool isFront); //il dato bool front indica da quale parte della coda inserire il dato (true=dalla testa, false=dal fondo)
        //rimozione dato
        void remove(const bool isFront);
        //distruttore
        ~dequeue();
        //stampa la coda
        void print();
};

#endif