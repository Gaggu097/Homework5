/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.cc to edit this template
 */

/* 
 * File:   Sponsor.cpp
 * Author: gagandeepsuman
 * 
 * Created on July 25, 2023, 10:06 PM
 */

#include "Sponsor.h"

Sponsor::Sponsor (const string& Nome, const string& Prodotto)
:nome(Nome), prodotto(Prodotto)
{
    // implementato in lista di inizializzazione
    // corpo vuoto
}


ostream& operator<< (ostream &output, const Sponsor& S){
    output << "Sponsor: " << S.nome << " " << S.prodotto ;
    return output;
}