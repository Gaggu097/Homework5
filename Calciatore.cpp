/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.cc to edit this template
 */

/* 
 * File:   Calciatore.cpp
 * Author: gagandeepsuman
 * 
 * Created on July 25, 2023, 9:37 PM
 */

#include "Calciatore.h"

Calciatore::Calciatore ( const string &nome, const string &Cognome, 
        const size_t &numeroMaglia, const bool&titolarita)
: cognome (Cognome), numero(numeroMaglia)
{
    setNome(nome);
    setTitolarita(titolarita);
}


string Calciatore::getNome() const{
    return nome;
}
bool Calciatore::getTitolarita() const{
    return titolare;
}

void Calciatore::setNome(const string &n){
    nome = n;
}
void Calciatore::setTitolarita (const bool &titolare){
    this->titolare = titolare;
}

bool Calciatore::operator== (const Calciatore& c1) const {
    
    if (this == &c1)
        return true;
    else
        return false;
    
}

bool Calciatore::operator !=(const Calciatore& c1) const {
    return (!(this==&c1));
}


ostream& operator<< (ostream &output, const Calciatore &C){
    output << "Calciatore :" << C.nome << " " << C.cognome
            << " N#" <<C.numero << " "
            << ( C.titolare == true ? "titolare" : "non titolare");
    return output;
}