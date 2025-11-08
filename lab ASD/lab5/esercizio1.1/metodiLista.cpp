#include <iostream>
#include "classeLista.h"

//costruttore di lista vuota
Lista::Lista(){
    sentinella=new cella;
    sentinella->successiva=sentinella;
    sentinella->precedente=sentinella;
}

//indica la prima cella
cella *Lista::begin(){
    return sentinella->successiva;
}

//indica l'ultima cella
cella *Lista::end(){
    return sentinella;
}

//dice se la lista è vuota o no
bool Lista::empty(){
    if(begin()==end()){
        return true;
    } else {
        return false;
    }
}

//aggiunge una cella in posizione p
void Lista::insert(posizione p, tipoelem x){ //se nel parametro posizione passa begin() inserisce la cella in testa, se passa end() inserisce la cella in coda
    cella* nuova=new cella;
    nuova->elemento=x;
    nuova->successiva=p;
    nuova->precedente=p->precedente;
    p->precedente->successiva=nuova;
    p->precedente=nuova;
}

//rimuove una cella in posizione p
void Lista::remove(posizione p){
    if(!empty()){
        p->successiva->precedente=p->precedente;
        p->precedente->successiva=p->successiva;
        delete p;
    }
}

//stampa la lista
void Lista::print(){
    std::cout<<"Lista: [";
    for(posizione p=begin();p!=end();p=p->successiva){
        if(p->successiva==end()){
            std::cout<<p->elemento<<"]";
        } else {
            std::cout<<p->elemento<<" ";
        }
    }
    std::cout<<std::endl;
}

//ritorna la quantità di celle presenti nella lista
int Lista::lunghezza(){
    int n=0;
    for(posizione p=begin();p!=end();p=p->successiva){
        n++;
    }
    return n;
}

//inverte le posizioni delle celle
void Lista::inverti(){
    if(!empty() && begin()!=end()->precedente){ //se la cella non è vuota e non contiene una cella
        posizione pi=begin();
        posizione pf=end()->precedente;
        while(pi!=pf && pi->precedente!=pf){
            tipoelem tmp=pi->elemento;
            pi->elemento=pf->elemento;
            pf->elemento=tmp;
            pi=pi->successiva;
            pf=pf->precedente;
        }
    }
}

//verifica se la lista è palindroma
bool Lista::palindroma() {
    if(empty()){
        return true;  // lista vuota = palindroma
    }
    posizione pi=begin();
    posizione pf=end()->precedente;
    while(pi!=pf && pi->precedente!=pf){
        if (pi->elemento!=pf->elemento){
            return false;
        }
        pi = pi->successiva;
        pf = pf->precedente;
    }
    return true;
}