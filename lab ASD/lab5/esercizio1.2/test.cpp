#include <iostream>
#include <string>
#include "list.h"
#include "orderedList.h"

using namespace std;

int main(){
    /*------------------------------------------------ESEMPIO-CON-INTERI------------------------------------------------------*/
    cout<<"------------------------------------------------ESEMPIO-CON-INTERI------------------------------------------------"<<endl<<endl;
    //prima lista ordinata
    orderedList<int> L1int;
    L1int.insert(3);
    L1int.insert(5);
    L1int.insert(1);
    L1int.insert(10);
    
    //seconda lista ordinata
    orderedList<int> L2int;
    L2int.insert(4);
    L2int.insert(5);
    L2int.insert(1);
    L2int.insert(7);

    //stampa la prima lista ordinata
    cout<<"Ordered List 1: ";
    L1int.print();

    //stampa la seconda lista ordinata
    cout<<endl<<"Ordered List 2: ";
    L2int.print();

    //dichiarazione della fusione tra le due liste ordinate
    orderedList<int> mergedint;

    //fonde le due liste mantenendo eventuali duplicati
    mergedint=L1int.merge(L2int);

    //stampa la fusione delle due liste
    cout<<endl<<endl<<"Ordered List 1 and Ordered List 2 merged: ";
    mergedint.print();
    cout<<endl<<endl;
    /*------------------------------------------------ESEMPIO-CON-STRINGHE------------------------------------------------------*/
    cout<<"------------------------------------------------ESEMPIO-CON-STRINGHE------------------------------------------------"<<endl<<endl;
    //prima lista ordinata
    orderedList<string> L1str;
    L1str.insert("zaino");
    L1str.insert("focaccia");
    L1str.insert("anatra");
    L1str.insert("cipresso");
    
    //seconda lista ordinata
    orderedList<string> L2str;
    L2str.insert("rotolo");
    L2str.insert("zebra");
    L2str.insert("focaccia");
    L2str.insert("anatra");

    //stampa la prima lista ordinata
    cout<<"Ordered List 1: ";
    L1str.print();

    //stampa la seconda lista ordinata
    cout<<endl<<"Ordered List 2: ";
    L2str.print();

    //dichiarazione della fusione tra le due liste ordinate
    orderedList<string> mergedstr;

    //fonde le due liste mantenendo eventuali duplicati
    mergedstr=L1str.merge(L2str);

    //stampa la fusione delle due liste
    cout<<endl<<endl<<"Ordered List 1 and Ordered List 2 merged: ";
    mergedstr.print();

    getchar();
    return 0;
}