#include <iostream>
#include "studente.h"

using namespace std;

int main(){
    //dichiarazione dati
    studente s;
    string matricola, nome, cognome;
    int eta;
    //interfaccia
    cout<<"========================================ASSEGNAZIONE DATI STUDENTE========================================"<<endl<<endl;
    //richiesta all'utente di assegnare valori di uno studente
    //assegnazione matricola
    cout<<"                         ASSEGNA MATRICOLA: MATRICOLE VALIDE DA '255312' A '499999"<<endl;
    while(true){
        cout<<"Inserire la matricola: ";
        cin>>matricola;
        if(stoi(matricola)<255312 || stoi(matricola)>499999){
            cout<<"Valore di matricola invalido: deve essere compreso tra '255312' e '499999'."<<endl;
        } else {
            break;
        }
    }
    s.set_matricola(matricola);
    //assegnazione nome
    cout<<"                              ASSEGNA NOME: SONO AMMESSI MASSIMO 30 CARATTERI"<<endl;
    while(true){
        cout<<"Inserire il nome: ";
        cin>>nome;
        if(nome.size()>30){
            cout<<"Nome invalido: lunghezza massima di 30 caratteri."<<endl;
        } else {
            break;
        }
    }
    s.set_nome(nome);
    //assegnazione cognome
    cout<<"                            ASSEGNA COGNOME: SONO AMMESSI MASSIMO 30 CARATTERI"<<endl;
    while(true){
        cout<<"Inserire il congome: ";
        cin>>cognome;
        if(cognome.size()>30){
            cout<<"Cognome invalido: lunghezza massima di 30 caratteri."<<endl;
        } else {
            break;
        }
    }
    s.set_cognome(cognome);
    //assegnazione eta
    cout<<"                                ASSEGNA ETA: ETA VALIDA DA 12 A 105 ANNI"<<endl;
    while(true){
        cout<<"Inserire l'eta: ";
        cin>>eta;
        if(eta<12 || eta>105){
            cout<<"Eta non ammessa: l'eta ammessa va dai 12 ai 105 anni."<<endl;
        } else {
            break;
        }
    }
    s.set_eta(eta);
    cout<<"===================================================================================================="<<endl<<endl;
    //stampa dei valori assegnati dall'utente
    cout<<"Dati studente:"<<endl<<"MATRICOLA: ";
    s.print_matricola();
    cout<<"NOME: ";
    s.print_nome();
    cout<<"COGNOME: ";
    s.print_cognome();
    cout<<"ETA: ";
    s.print_eta();
    getchar();
    getchar();
    return 0;
}