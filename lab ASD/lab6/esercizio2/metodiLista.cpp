#include <iostream>
#include "Lista.h"

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
    int n=1;
    for(posizione p=begin();p!=end();p=p->successiva){
        std::cout<<"Stack n."<<n<<std::endl;
        n++;
        if(p->successiva==end()){
            p->elemento->print();
        } else {
            p->elemento->print();
            std::cout<<std::endl;
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

//seleziona cella
posizione Lista::selezione(const int n){
    int k=0;
    posizione p=begin();
    while(k!=n){
        p=p->successiva;
        k++;
    }
    return p;
}