/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.cc to edit this template
 */

/* 
 * File:   Societa.cpp
 * Author: Gaggu097
 * 
 * Created on July 25, 2023, 10:05 PM
 */

#include "Societa.h"
#include <string>

Societa::Societa (const string &, const string &){
    
}


void Societa::setDenominazione (const string &TheNominimazione){
    delete [] denominazione;
    int s = TheNominimazione.length();
    denominazione = new char [(TheNominimazione.length())+1];
    TheNominimazione.copy(denominazione, s);
}

string Societa::getDenominazione () const{
    return denominazione;
}



void Societa::setPresidente (const string &nome){
    nome.copy(presidente, C_MAX-2);
    presidente[C_MAX-1] = '\0';
}
string Societa::getPresidente () const{
    return presidente;
}



bool Societa::acquisici (Calciatore &C){
    Rosa *temp = vettoreRosa;
    std::cout << "è qui0" << std::endl;
    while (temp != NULL) {
        std::cout << "è qui1" << std::endl;
        // se il calciatore è presente in rosa
        if ( *(temp->C) == C ){    // derefenzia e confronta gli oggetti calciatore nella rosa e quello da acquisire
            std::cout << "Calciatore già presente in Rosa" <<std::endl;
            return false;
        }
        temp = vettoreRosa->pross;
    }
    
  
    // std::cout << "è qui2" << std::endl;
    
    {
        // calciatore non presente in rosa
    //std::cout << "è qui3" << std::endl;
    temp = new Rosa;
    temp->C = &C;
    temp->pross = vettoreRosa;
    vettoreRosa = temp;
    //std::cout << "è qui4" << std::endl;
    return true;
    }
    // temp(C);        // costruttore copia di default
}

bool Societa::cessione (Calciatore &){
    
}