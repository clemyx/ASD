#include "studente.h"
#include <iostream>

//costruttore di default
studente::studente(){
    matricola="NESSUNA_MATRICOLA";
    nome="NESSUN_NOME";
    esami.resize(numesami); //imposta la dimensione del vettore
}

//costruttore che imposta il nome dei 5 esami
studente::studente(std::string nome1,std::string nome2,std::string nome3,std::string nome4,std::string nome5){
    matricola="NESSUNA_MATRICOLA";
    nome="NESSUN_NOME";
    esami.resize(numesami);
    esami[0].setEsame(nome1);
    esami[1].setEsame(nome2);
    esami[2].setEsame(nome3);
    esami[3].setEsame(nome4);
    esami[4].setEsame(nome5);
}

//leggere matricola
std::string studente::getMatricola() const {
    return matricola;
}

//scrivere matricola
void studente::setMatricola(const std::string nuova_matricola){
    matricola=nuova_matricola;
}

//leggere nome
std::string studente::getNome() const {
    return nome;
}

//scrivere nome
void studente::setNome(const std::string nuovo_nome){
    nome=nuovo_nome;
}

//leggere numero di esami
int studente::getNumEsami() const {
    return numesami;
}

//scrivere il voto dell'i-esimo esame
void studente::setEsame(const int voto,const int i){
    esami[i].setVoto(voto);
}

//leggere voto dell'i-esimo esame
int studente::getVotoEsame(const int i) const {
    return esami[i].getVoto();
}

//leggere nome dell'i-esimo esame
std::string studente::getNomeEsame(const int i) const {
    return esami[i].getEsame();
}

//leggere se l'i-esimo esame è stato sostenuto
bool studente::getSostenuto(const int i) const {
    return esami[i].isSostenuto();
}

//calcola la media dei voti degli esami sostenuti
double studente::getMedia() const {
    double sum=0;
    int k=0;
    for(int i=0;i<numesami;i++){
        sum+=getVotoEsame(i);
        if(getVotoEsame(i)!=0){
            k++;
        }
    }
    return sum/k;
}

//visualizza tutte le informazioni dello studente compresi gli esami sostenuti e i rispettivi voti
void studente::printStudente() const {
    std::cout<<"MATRICOLA STUDENTE: "<<matricola<<std::endl;
    std::cout<<"NOME STUDENTE: "<<nome<<std::endl;
    std::cout<<"NUMERO DI ESAMI DISPONIBILI: "<<numesami<<std::endl;
    for(int i=0;i<numesami;i++){
        std::cout<<"    ESAME "<<i+1<<": "<<std::endl<<
        "       NOME ESAME: "<<getNomeEsame(i)<<std::endl;
        if(getSostenuto(i)==true){
            std::cout<<"        SOSTENUTO: SI"<<std::endl;
            std::cout<<"        VOTO: "<<getVotoEsame(i)<<std::endl;
        } else {
            std::cout<<"        SOSTENUTO: NO"<<std::endl;
            std::cout<<"        VOTO INESISTENTE: ESAME NON SOSTENUTO"<<std::endl;
        }
    }
}
