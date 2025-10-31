#ifndef _ESAME_H
#define _ESAME_H
#include <string>

class esame{
    public:
        esame(); //costruttore di default
        esame(std::string nome_default); //imposta solo il nome dell'esame
        esame(std::string nome_default, int voto_default); //imposta nome e voto dell'esame
        std::string getEsame() const ; //restituisce il nome dell'esame
        void setEsame(const std::string nuovo_nome); //imposta il nome dell'esame
        int getVoto() const; //restituisce il voto dell'esame
        void setVoto(const int voto); //imposta il voto dell'esame
        bool isSostenuto() const; //restituisce true se l'esame è stato sostenuto
    private:
        std::string nome;
        bool sostenuto;
        int voto;
};

#endif
