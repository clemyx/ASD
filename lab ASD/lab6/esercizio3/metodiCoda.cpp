#include <iostream>
#include "classeCoda.h"

//costruttore coda senza valore
queue::queue(){
    back=new node;
    front=new node;
    back->prev=nullptr;
    back->next=front;
    front->prev=back;
    front->next=nullptr;
}

//costruttore coda con un valore
queue::queue(const int value){
    back=new node;
    front=new node;
    node *nuovo=new node;
    back->prev=nullptr;
    back->next=nuovo;
    nuovo->prev=back;
    nuovo->value=value;
    nuovo->next=front;
    front->prev=nuovo;
    front->next=nullptr;
}

//controlla che la coda si vuota
bool queue::empty() const {
    return back->next==front;
}

//inserimento nuovo elemento in coda
void queue::enqueue(const int value){
    node *nuovo=new node;
    nuovo->next=back->next;
    back->next->prev=nuovo;
    nuovo->prev=back;
    back->next=nuovo;
    nuovo->value=value;
}

//espulsione elemento dalla coda
void queue::dequeue(){
    if(!empty()){
        node *daEliminare=front->prev;
        node *nuovoUltimo=daEliminare->prev;
        nuovoUltimo->next=front;
        front->prev=nuovoUltimo;
        delete daEliminare;
    }
}

//distruttore coda
queue::~queue(){
    while(!empty()){
        dequeue();
    }
    delete back;
    delete front;
}

//crea una nuova coda con numeri interi solo positivi dalla coda iniziale
void queue::naturali(queue &codaNaturali){
    for(node *p=front->prev;p!=back;p=p->prev){
        if(p->value>=0){
            codaNaturali.enqueue(p->value);
        }
    }
}

//stampa la coda
void queue::print(){
    if(empty()){
        std::cout<<"Queue is void."<<std::endl;
    } else {
        std::cout<<"back -> ";
        for(node *p=back->next;p!=front;p=p->next){
            std::cout<<"["<<p->value<<"] -> ";
        }
        std::cout<<"front"<<std::endl;
    }
}