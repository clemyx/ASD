#ifndef MATRICE_H
#define MATRICE_H

typedef double tipoelem;
template <class T>

class matrice{
    public:
        //costruttore
        matrice(int r, int c);
        //lettura matrice
        T leggimatrice(const int r, const int c) const ;
        //scrittura matrice
        void scrivimatrice(const int r,const int c, const T elemento);
        //distruttore
        ~matrice();
        //prodotto scalare (per matrici di tipo numeriche)
        matrice<T> prodottoScalare(const tipoelem scalare);
        //trasposta
        matrice<T> trasposta();
        //prodotto matrici
        matrice<T> prodotto(const matrice<T> &M);
    private:
        int righe;
        int colonne;
        T **elementi;
};

//Include del file con le definizioni dei template
#include "matrice.cpp"

#endif
