#include "studente.h"
#include <iostream>

using namespace std;

int main(){
    studente s1;
    studente s2("Statistica","Psicologia Clinica","Psicometria","Psicologia delle comunicazioni sociali","Criminologia");
    s2.setMatricola("761173");
    s2.setNome("Maria");
    s2.setEsame(29,1);
    s2.setEsame(22,2);
    s2.setEsame(30,3);
    s2.setEsame(30,4);
    cout<<endl<<endl;
    s2.printStudente();
    cout<<endl;
    cout<<"MEDIA VOTI: "<<s2.getMedia();
    return 0;
}