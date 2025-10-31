#ifndef _STUDENTE_H
#define _STUDENTE_H
#include <string>
#include <vector>
#include "esame.h"

class studente{
    public:
        //costruttore di default
        studente();
        //costruttore che imposta i nomi dei 5 esami
        studente(std::string nome1, std::string nome2,std::string nome3, std::string nome4, std::string nome5);
        //leggere matricola
        std::string getMatricola() const ;
        //scrivere matricola
        void setMatricola(const std::string nuova_matricola);
        //leggere nome
        std::string getNome() const ;
        //scrivere nome
        void setNome(const std::string nuovo_nome);
        //leggere numero di esami
        int getNumEsami() const ;
        //scrivere voto dell'i-esimo esame
        void setEsame(const int voto,const int i);
        //leggere voto dell'i-esimo esame
        int getVotoEsame(const int i) const ;
        //leggere nome dell'i-esimo esame
        std::string getNomeEsame(const int i) const ;
        //leggere se l'i-esimo esame è stato sostenuto
        bool getSostenuto(const int i) const ;
        //calcola la media dei voti degli esami sostenuti
        double getMedia() const ;
        //visualizza tutte le informazioni dello studente compresi gli esami sostenuti e i rispettivi voti
        void printStudente() const ;
    private:
        std::string matricola;
        std::string nome;
        std::vector<esame> esami;
        const int numesami=5;
};

#endif