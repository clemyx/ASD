#include "Stack.h"

//costruttore stack vuoto
Stack::Stack(){
    top=new node;
    bottom=new node;
    bottom->next=top;
    top->prev=bottom;
    bottom->prev=nullptr;
    top->next=nullptr;
}

//costruttore stack con un valore
Stack::Stack(const object value){
    top=new node;
    bottom=new node;
    node *nuovo=new node;
    bottom->prev=nullptr;
    top->next=nullptr;
    nuovo->value=value;
    bottom->next=nuovo;
    nuovo->prev=bottom;
    nuovo->next=top;
    top->prev=nuovo;
}

//controlla se lo stack è vuoto
bool Stack::empty() const {
    return bottom->next==top;
}

//inserisce in cima il nuovo valore
void Stack::push(const object value){
    node *nuovo=new node;
    nuovo->value=value;
    nuovo->prev=top->prev;
    top->prev->next=nuovo;
    nuovo->next=top;
    top->prev=nuovo;
}

//elimina l'elemento in cima
void Stack::pop(){
    if(!empty()){
        node *daEliminare=top->prev;
        node *nuovoPrimo=top->prev->prev;
        nuovoPrimo->next=top;
        top->prev=nuovoPrimo;
        delete daEliminare;
    }
}

//distruttore stack
Stack::~Stack(){
    for(node *p=top->prev;p!=bottom;p=p->prev){
        pop();
    }
    delete top;
    delete bottom;
}

//stampa a schermo lo stack
void Stack::print(){
    if(empty()){
        std::cout<<"Stack is void."<<std::endl;
    } else {
        std::cout<<"[top]"<<std::endl;
        for(node *p=top->prev;p!=bottom;p=p->prev){
            std::cout<<"["<<p->value<<"]"<<std::endl;
        }
        std::cout<<"[bottom]"<<std::endl;
    }
}