#include <iostream>
#include "matrice.h"

using namespace std;

int main(){
    
    matrice<double> m1(3,2);        //il numero di colonne della prima matrice deve
    matrice<double> m2(2,3);        //essere uguale al numero di righe della seconda
    matrice<double> m3(3,3);
    double scalare;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            double n=0;
            cout<<"Inserisci i valori da salvare nella prima matrice: ";
            cin>>n;
            m1.scrivimatrice(i,j,n);
        } 
    }

    cout<<endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            double n=0;
            cout<<"Inserisci i valori da salvare nella seconda matrice: ";
            cin>>n;
            m2.scrivimatrice(i,j,n);
        }
    }

    //lettura matrice
    //m1
    cout<<"Matrice m1:"<<endl;
    for(int i=0;i<3;i++) {
        cout<<"[ ";
        for(int j=0;j<2;j++) {
            cout<<m1.leggimatrice(i,j)<<" ";
        }
        cout<<"]"<<endl;
    }

    //m2
    cout<<"Matrice m2:"<<endl;
    for(int i=0;i<2;i++) {
        cout<<"[ ";
        for(int j=0;j<3;j++) {
            cout<<m2.leggimatrice(i,j)<<" ";
        }
        cout<<"]"<<endl;
    }

    cout<<endl<<endl;

    //prodotto scalare
    cout<<"Inserisci un valore per calcolare il prodotto scalare di una matrice: ";
    cin>>scalare;
    matrice<double> m1_scalare = m1.prodottoScalare(scalare);
    cout<<"Matrice m1 moltiplicata per scalare: "<<scalare<<endl;
    for(int i=0;i<2;i++) {
        cout<<"[ ";
        for(int j=0;j<3;j++) {
            cout<<m1_scalare.leggimatrice(i,j)<<" ";
        }
        cout<<"]"<<endl;
    }

    cout<<endl<<endl;

    //trasposta
    matrice<double> m2_trasposta=m2.trasposta();
    cout<<"Trasposta di m2:"<<endl;
    for(int i=0;i<2;i++){
        cout<<"[ ";
        for(int j=0;j<3;j++){
            cout<<m2_trasposta.leggimatrice(i,j)<<" ";
        }
        cout << "]"<<endl;
    }

    cout<<endl<<endl;

    //prodotto matriciale
    m3=m1.prodotto(m2);
    for(int i=0;i<3;i++){
        cout<<"[";
        for(int j=0;j<3;j++){
            cout<<"["<<m3.leggimatrice(i,j)<<" ";
        }
        cout<<"]"<<endl;
    }
    cout<<"]"<<endl;

    return 0;
}