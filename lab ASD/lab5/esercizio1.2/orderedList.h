#ifndef _ORDEREDLIST_H
#define _ORDEREDLIST_H

#include "list.h"

/*////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
--------------------------------------------------DEFINIZIONE CLASSE---------------------------------------------------------------------
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

template <class T>
class orderedList{
    public:
        //costruttore
        orderedList();
        //ritorna la prima posizione valida
        node<T> *begin() const;
        //ritorna l'ultima posizione valida
        node<T> *end() const;
        //dice se la lista è vuota o no
        bool empty() const;
        //restituisce la lunghezza della lista
        int length() const;
        //inserisce in maniera ordinata l'elemento
        void insert(const T element);
        //trova la posizione in cui è presente un elemento
        position<T> search(const T element);
        //rimuove il nodo in cui è presente l'elemento
        void remove(const T element);
        //stampa la lista ordinata
        void print() const;
        //metodo che fonde due ordered list
        orderedList<T> merge(const orderedList<T>& other);
    private:
        List<T> L;
};

/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
--------------------------------------------DEFINIZIONE-METODI--------------------------------------------------------------------
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

//costruttore
template <class T>
orderedList<T>::orderedList() : L(){
    //non fa nulla, richiama il metodo costruttore della classe List
}

//ritorna la prima posizione valida
template <class T>
node<T> *orderedList<T>::begin() const {
    return L.begin();
}

//ritorna l'ultima posizione valida
template <class T>
node<T> *orderedList<T>::end() const {
    return L.end();
}

//dice se la lista ordinata è vuota o no
template <class T>
bool orderedList<T>::empty() const {
    return L.empty();
}

//restituisce la lunghezza della lista
template <class T>
int orderedList<T>::length() const {
    return L.length();
}

//inserisce valore in maniera ordinata
template <class T>
void orderedList<T>::insert(const T e){
    position<T> p=L.begin();
    while(p!=L.end() && e>p->value){
        p=p->next;
    }
    L.insert(p,e);
}

//cerca la posizione dell'elemento indicato
template <class T>
position<T> orderedList<T>::search(const T e){
    position<T> p=L.begin();
    while(p!=L.end() && e>=p->value){
        if(e==p->value){
            return p;
        }
        p=p->next;
    }
    return nullptr;
}

//rimuove il nodo in cui è presente l'elemento indicato
template <class T>
void orderedList<T>::remove(const T e){
    position<T> p=search(e);
    if(p!=nullptr){
        L.remove(p);
    }
}

//stampa la lista ordinata
template <class T>
void orderedList<T>::print() const {
    L.print();
}

//fonde due liste ordinate mantenendo eventuali duplicati
template <class T>
orderedList<T> orderedList<T>::merge(const orderedList<T> &other){
    orderedList<T> finalList;
    for(position<T> p=L.begin();p!=L.end();p=p->next){
        finalList.insert(p->value);
    }
    for(position<T> p=other.begin();p!=other.end();p=p->next){
        finalList.insert(p->value);
    }
    return finalList;
}

#endif