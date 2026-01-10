#ifndef _STACK_H
#define _STACK_H

#include <iostream>

#define object int

struct node{
    node *next;
    node *prev;
    object value;
};

class Stack{
    private:
        node *top;
        node *bottom;
    public:
        //costruttore stack inizialmente vuoto
        Stack();
        //costruttore stack con il primo valore
        Stack(const object value);
        //controlla se lo stack è vuoto
        bool empty() const;
        //inserisce un nuovo valore nello stack
        void push(const object value);
        //elimina il primo valore dello stack
        void pop();
        //distruttore stack
        ~Stack();
        //stampa a schermo lo stack
        void print();
};

#endif