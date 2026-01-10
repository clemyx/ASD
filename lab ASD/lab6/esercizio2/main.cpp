#include <iostream>
#include "MultipleStack.h"

using namespace std;

int main(){
    MultipleStack M(5);
    M.Push(3,1);
    M.Push(6,2);
    M.Push(18,0);
    M.Push(32,3);
    M.Push(1,4);
    M.Push(5,1);
    M.Push(7,2);
    M.Push(8,3);
    M.Push(9,4);
    cout<<"Multiple Stack dopo la costruzione e i push"<<endl;
    M.print();
    M.Pop(0);
    M.Pop(1);
    M.Pop(2);
    M.Pop(3);
    M.Pop(4);
    cout<<endl<<"Multiple Stack dopo i pop"<<endl;
    M.print();
    getchar();
    return 0;
}