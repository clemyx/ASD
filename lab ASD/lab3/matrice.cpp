#include "matrice.h"

// costruttore
template <class T>
matrice<T>::matrice(int r, int c){
  righe=r;
  colonne=c;
  // allocazione dinamica della matrice
  elementi=new T*[righe]; //alloca un array di puntatori a T (uno per ogni riga)
  for (int i=0;i<righe;i++){            //new serve per allocare
    elementi[i]=new T[colonne](); //per ogni riga, alloca un array di T (una riga della matrice)
  }
}

//legge un elemento della matrice in posizione r,c
template <class T>
T matrice<T>::leggimatrice(const int r, const int c) const {
  return elementi[r][c];
}

//scrive un elemento e nella matrice in posizione r,c
template <class T>
void matrice<T>::scrivimatrice(const int r,const int c, const T elemento){
  elementi[r][c]=elemento;
}

//distruttore
template <class T>
matrice<T>::~matrice(){
  for (int i=0;i<righe;i++){
    delete[] elementi[i]; //dealloca ogni riga della matrice
  }                                    //delete[] serve per deallocare
  delete[] elementi; //dealloca l’array dei puntatori alle righe
}

//prodotto scalare (per matrici numeriche)
template <class T>
matrice<T> matrice<T>::prodottoScalare(const tipoelem scalare){
  matrice<T> prodottoScalareMatrice(righe,colonne);
  for(int i=0;i<righe;i++){
    for(int j=0;j<colonne;j++){
      prodottoScalareMatrice.scrivimatrice(i,j,elementi[i][j]*scalare);
    }
  }
  return prodottoScalareMatrice;
}

//trasposta
template <class T>
matrice<T> matrice<T>::trasposta(){
  matrice<T> matriceTrasposta(colonne,righe);
  for(int i=0;i<righe;i++){
    for(int j=0;j<colonne;j++){
      matriceTrasposta.scrivimatrice(j,i,elementi[i][j]);
    }
  }
  return matriceTrasposta;
}

//prodotto di matrici
template <class T>
matrice<T> matrice<T>::prodotto(const matrice<T> &M){
  matrice<T> risultato(righe,M.colonne);
  for(int i=0; i<righe; i++){
    for(int j=0; j<M.colonne; j++){
      risultato.scrivimatrice(i,j,0);
      for(int k=0; k<colonne; k++){
        risultato.scrivimatrice(i,j,risultato.leggimatrice(i,j)+elementi[i][k]*M.leggimatrice(k,j));
      }
    }
  }
  return risultato;
}