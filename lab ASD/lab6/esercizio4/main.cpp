#include <iostream>
#include "dequeue.h"

using namespace std;

int main(){
    dequeue d1;
    dequeue d2(2);
    d1.insert(1,true);
    d1.insert(3,false);
    d2.insert(6,false);
    d2.insert(8,true);
    d1.print();
    d2.print();
    d1.remove(false);
    d2.remove(true);
    d1.print();
    d2.print();
    return 0;
}