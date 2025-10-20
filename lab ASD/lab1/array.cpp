#include <iostream>

using namespace std;

void greaterThan(int A[],int n,int k,int B[]){
    int j=0;
    for(int i=0;i<n;i++){
        if(A[i]>k){
            B[j]=A[i];
            j++;
        }
    }
}

bool member(int A[],int n,int k){
    bool b=false;
    for(int i=0;i<n;i++){
        if(A[i]==k){
            b=true;
        }
    }
    return b;
}

void largest(int array[], int n, int *max, int *pos){
    for (int i=0; i<n; i++){
        if(array[i]>*max){
            *max=array[i];
            *pos=i;
        }
    }
}

void reverse(int a[], int n){
    int b[n];
    for(int i=0; i<n; i++){
        b[i]=a[i];
    }
    for(int j=n-1; j>=0; j--){
        a[n-1-j]=b[j];
    }
}

void stampa(int array[], int n){
    cout<<"[ ";
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    cout<<"]"<<endl;
}

int main() {

    int A[]={1,2,3,4,5,6};                      //array principale
    int n=sizeof(A)/sizeof(A[0]);               //lunghezza array
    int k;                                      //intero da confrontare in greaterThan()
    int B[]={0,0,0,0,0,0};                      //array che conterrà i valori di A maggiori di k
    bool b;
    int max=0;
    int pos=0;
    cout<<endl<<"Array preso in considerazione: ";
    stampa(A,n);
    //greaterThan
    cout<<endl<<"--------------------FUNZIONE GREATERTHAN--------------------"<<endl;
    cout<<"Inserire un numero intero: ";
    cin>>k;
    greaterThan(A,n,k,B);
    cout<<"I valori di A maggiori di "<<k<<" sono i seguenti: ";
    stampa(B,n);
    cout<<endl;
    //member
    cout<<endl<<"--------------------FUNZIONE MEMBER--------------------"<<endl;
    cout<<"Inserire un numero intero: ";
    cin>>k;
    b=member(A,n,k);
    if(b==true){
        cout<<k<<" presente nell'array"<<endl;
    } else {
        cout<<k<<" NON presente nell'array"<<endl;
    }
    //largest
    cout<<endl<<"--------------------FUNZIONE LARGEST--------------------"<<endl;
    largest(A,n,&max,&pos);
    cout<<"Ecco il valore massimo "<<max<<" in posizione "<<pos<<endl<<endl;
    //reverse
    cout<<"--------------------FUNZIONE REVERSE--------------------"<<endl;
    cout<<"array prima del reverse"<<endl;
    stampa(A,n);
    reverse(A,n);
    cout<<"array dopo il reverse"<<endl;
    stampa(A,n);
    getchar();
    getchar();
    return 0;
}