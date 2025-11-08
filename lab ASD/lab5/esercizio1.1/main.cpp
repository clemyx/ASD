#include <iostream>
#include "classeLista.h"

using namespace std;

int main(){
    Lista L1,L2;
    //lista 1
    L1.insert(L1.end(),'A');
    L1.insert(L1.end(),'N');
    L1.insert(L1.end(),'N');
    L1.insert(L1.end(),'A');
    //lista 2
    L2.insert(L2.end(),'Z');
    L2.insert(L2.end(),'Y');
    L2.insert(L2.end(),'X');
    L2.insert(L2.end(),'W');
    L2.insert(L2.end(),'V');
    //mostro le liste
    cout<<"Lista 1"<<endl;
    L1.print();
    cout<<endl<<"Lista 2"<<endl;
    L2.print();
    //inverto le liste
    L1.inverti();
    L2.inverti();
    //mostre le liste invertite
    cout<<endl<<"Lista 1 invertita"<<endl;
    L1.print();
    cout<<endl<<"Lista 2 invertita"<<endl;
    L2.print();
    //numero celle
    cout<<"La lista L1 contiene: "<<L1.lunghezza()<<" celle."<<endl;
    cout<<"La lista L2 contiene: "<<L2.lunghezza()<<" celle."<<endl;
    //palindroma
    if(L1.palindroma()){
        cout<<"Lista L1 palindroma";
    } else {
        cout<<"Lita L1 non palindroma";
    }

    if(L2.palindroma()){
        cout<<endl<<"Lista L2 palindroma";
    } else {
        cout<<endl<<"Lita L2 non palindroma";
    }
    return 0;
}
