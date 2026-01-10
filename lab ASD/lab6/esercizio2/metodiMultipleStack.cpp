#include "multipleStack.h"

//costruttore
MultipleStack::MultipleStack(unsigned int m){
    for(int i=0;i<m;i++){
        Stack *S=new Stack();
        L.insert(L.end(),S);
    }
}

//inserisce un valore in uno specifico stack
void MultipleStack::Push(const object value, const unsigned int m){
    L.selezione(m)->elemento->push(value);
}

//elimina un valore da uno specifico stack
void MultipleStack::Pop(const unsigned int m){
    L.selezione(m)->elemento->pop();
}

//conta gli stack nella lista
bool MultipleStack::empty(){
    return L.empty();
}

//stampa gli stack presenti nella lista
void MultipleStack::print(){
    if(empty()){
        std::cout<<"Multiple stack is empty."<<std::endl;
    } else {
        std::cout<<"MULTIPLE STACK"<<std::endl;
        L.print();
    }
}