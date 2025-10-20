#include "studente.h"
#include <iostream>

void studente::set_matricola(const std::string &nuova_matricola){
    matricola=nuova_matricola;
}

void studente::set_nome(const std::string &nuovo_nome){
    nome=nuovo_nome;
}

void studente::set_cognome(const std::string &nuovo_cognome){
    cognome=nuovo_cognome;
}

void studente::set_eta(const int &nuova_eta){
    eta=nuova_eta;
}

std::string studente::get_matricola() const {
    return matricola;
}

std::string studente::get_nome() const {
    return nome;
}

std::string studente::get_cognome() const {
    return cognome;
}

int studente::get_eta() const {
    return eta;
}

void studente::print_matricola(){
    std::cout<<matricola<<std::endl;
}

void studente::print_nome(){
    std::cout<<nome<<std::endl;
}

void studente::print_cognome(){
    std::cout<<cognome<<std::endl;
}
 
void studente::print_eta(){
    std::cout<<eta<<std::endl;
}