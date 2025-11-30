#ifndef _LIST_H
#define _LIST_H

#include <iostream>

/*////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
--------------------------------------------------DEFINIZIONE CLASSE---------------------------------------------------------------------
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

//definisco la struttura node
template <class T>
struct node{
    T value;
    node<T> *next;
    node<T> *prev;
};

//definisco position
template <class T>
using position=node<T>*;

template <class T>
class List{
    private:
        node<T> *sentinel;
    public:
        //costruttore di default (lista vuota)
        List();
        //ritorna la prima posizione valida
        node<T> *begin() const;
        //ritorna l'ultima posizione valida
        node<T> *end() const;
        //dice se la lista è vuota o no
        bool empty() const;
        //inserisce una cella
        void insert(const position<T> p, const T x);
        //rimuove una cella
        void remove(const position<T> p);
        //stampa la lista
        void print() const;
        //ritorna la quantità di cella presenti nella lista
        int length();
        //inverte le posizioni della lista (la prima cella diventa l'ultima e viceversa)
        void reverse();
        //dice se la lista è palindorma o no
        bool palindrome();
};

/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
--------------------------------------------DEFINIZIONE-METODI--------------------------------------------------------------------
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

//costruttore di lista vuota
template <class T>
List<T>::List(){
    sentinel=new node<T>;
    sentinel->next=sentinel;
    sentinel->prev=sentinel;
}

//indica la prima cella
template <class T>
node<T> *List<T>::begin() const {
    return sentinel->next;
}

//indica l'ultima cella
template <class T>
node<T> *List<T>::end() const {
    return sentinel;
}

//dice se la lista è vuota o no
template <class T>
bool List<T>::empty() const {
    return begin()==end();
}

//aggiunge una cella in posizione p
template <class T>
void List<T>::insert(const position<T> p, const T x){ //se nel parametro posizione passa begin() inserisce la cella in testa, se passa end() inserisce la cella in coda
    node<T> *newNode=new node<T>;
    newNode->value=x;
    newNode->next=p;
    newNode->prev=p->prev;
    p->prev->next=newNode;
    p->prev=newNode;
}

//rimuove una cella in posizione p
template <class T>
void List<T>::remove(const position<T> p){
    if(!empty() && p!=sentinel){
        p->next->prev=p->prev;
        p->prev->next=p->next;
        delete p;
    }
}

//stampa la lista
template <class T>
void List<T>::print() const {
    std::cout<<"[";
    for(position<T> p=begin();p!=end();p=p->next){
        if(p->next==end()){
            std::cout<<p->value<<"]";
        } else {
            std::cout<<p->value<<" ";
        }
    }
    std::cout<<std::endl;
}

//ritorna la quantità di celle presenti nella lista
template <class T>
int List<T>::length(){
    int n=0;
    for(position<T> p=begin();p!=end();p=p->next){
        n++;
    }
    return n;
}

//inverte le posizioni delle celle
template <class T>
void List<T>::reverse(){
    if(!empty() && begin()!=end()->next){ //se la cella non è vuota e non contiene una cella
        position<T> left=begin();
        position<T> right=end()->prev;
        while(left!=right && left->prev!=right){
            T tmp=left->value;
            left->value=right->value;
            right->value=tmp;
            left=left->next;
            right=right->prev;
        }
    }
}

//verifica se la lista è palindroma
template <class T>
bool List<T>::palindrome(){
    if(empty()){
        return true;  // lista vuota = palindroma
    }
    position<T> left=begin();
    position<T> right=end()->prev;
    while(left!=right && left->prev!=right){
        if (left->value!=right->value){
            return false;
        }
        left=left->next;
        right=right->prev;
    }
    return true;
}

#endif
