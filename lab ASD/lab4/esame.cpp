#include "esame.h"

//costruttore di default
esame::esame(){
    nome="NESSUN_NOME";
    voto=0;
    sostenuto=false;
}

//costruttore che imposta solo il nome
esame::esame(std::string nome_default){
    nome=nome_default;
    voto=0;
    sostenuto=false;
}

//costruttore che imposta nome e voto ottenuto all'esame
esame::esame(std::string nome_default, int voto_default){
    nome=nome_default;
    voto=voto_default;
    sostenuto=true;
}

//leggere nome esame
std::string esame::getEsame() const {
    return nome;
}

//scrivere nome esame
void esame::setEsame(const std::string nuovo_nome){
    nome=nuovo_nome;
}

//leggere voto esame
int esame::getVoto() const {
    return voto;
}

//scrivere voto esame
void esame::setVoto(const int nuovo_voto){
    voto=nuovo_voto;
    sostenuto=true;
}

//leggere se l'esame è stato sostenuto
bool esame::isSostenuto() const {
    return sostenuto;
}