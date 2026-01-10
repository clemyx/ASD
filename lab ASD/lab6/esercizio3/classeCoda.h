#ifndef _QUEUE_H
#define _QUEUE_H

#include <iostream>

//struttura nodo
struct node{
  node *next;
  node *prev;
  int value;
};

/*definisco position
using position=node*;*/

//classe coda
class queue{
  public:
    //costruttore coda senza valore
    queue();
    //costruttore coda con valore
    queue(const int value);
    //inserisce un nuovo elemento in coda
    void enqueue(const int value);
    //espelle un elemento
    void dequeue();
    //distruttore coda
    ~queue();
    //controlla se la coda è vuota
    bool empty() const;
    //crea una coda di numeri interi considerando solo i positivi della coda iniziale
    void naturali(queue &codaNaturali);
    //stampa la coda
    void print();
  private:
  node *back;
  node *front;
};

#endif