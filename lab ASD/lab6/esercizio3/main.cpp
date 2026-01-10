#include <iostream>
#include "classeCoda.h"

using namespace std;

int main(){
    queue CodaInteri;
    queue CodaNaturali;
    CodaInteri.enqueue(3);
    CodaInteri.enqueue(4);
    CodaInteri.enqueue(-6);
    CodaInteri.enqueue(-2);
    CodaInteri.enqueue(1);
    CodaInteri.enqueue(8);
    CodaInteri.print();
    CodaInteri.naturali(CodaNaturali);
    CodaNaturali.print();
    getchar();
    return 0;
}