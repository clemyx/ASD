#ifndef _MULTIPLESTACK_H
#define _MULTIPLE_H

#include "Lista.h"
#include "Stack.h"

class MultipleStack{
    private:
        Lista L;
    public:
        //costruttore
        MultipleStack(unsigned int m);
        //inserisce un valore in uno specifico stack
        void Push(const object value, const unsigned int m);
        //elimina un valore da uno specifico stack
        void Pop(const unsigned int m);
        //numero di stack
        bool empty();
        //stampa tutti gli stack della lista
        void print();
};

#endif