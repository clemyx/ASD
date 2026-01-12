#include <iostream>
#include "dequeue.h"

//costruttore
dequeue::dequeue(){
    back=new node;
    front=new node;
    front->next=nullptr;
    back->prev=nullptr;
    front->prev=back;
    back->next=front;
}

//costruttore con dato in ingresso
dequeue::dequeue(type value){
    back=new node;
    front=new node;
    position nuovo=new node;
    nuovo->value=value;
    front->next=nullptr;
    back->prev=nullptr;
    front->prev=nuovo;
    back->next=nuovo;
    nuovo->prev=back;
    nuovo->next=front;
}

//metodo che indica se la coda è vuota o no
bool dequeue::empty(){
    return front->prev==back;
}

//inserisce un nuovo valore dalla testa o dal fondo
void dequeue::insert(const type value,const bool isFront){
    position nuovo=new node;
    nuovo->value=value;
    if(isFront){
        nuovo->prev=front->prev;
        front->prev->next=nuovo;
        nuovo->next=front;
        front->prev=nuovo;
    } else {
        nuovo->next=back->next;
        back->next->prev=nuovo;
        nuovo->prev=back;
        back->next=nuovo;
    }
}

//rimuove un valore dalla testa o dal fondo
void dequeue::remove(const bool isFront){
    if(isFront){
        position daEliminare=front->prev;
        position nuovoUltimo=daEliminare->prev;
        nuovoUltimo->next=front;
        front->prev=nuovoUltimo;
        delete daEliminare;
    } else {
        position daEliminare=back->next;
        position nuovoPrimo=daEliminare->next;
        nuovoPrimo->prev=back;
        back->next=nuovoPrimo;
        delete daEliminare;
    }
}

//distruttore della struttura dati
dequeue::~dequeue(){
    while(!empty()){
        remove(true);
    }
    delete back;
    delete front;
}

//stampa la coda
void dequeue::print(){
    std::cout<<"[back]-[";
    for(position p=back->next;p!=front;p=p->next){
        std::cout<<p->value<<"]-[";
    }
    std::cout<<"front]"<<std::endl;
}