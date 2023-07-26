/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.h to edit this template
 */

/* 
 * File:   Societa.h
 * Author: gagandeepsuman
 *
 * Created on July 25, 2023, 10:05 PM
 */

#ifndef SOCIETA_H
#define SOCIETA_H

#define C_MAX 25
#include "Calciatore.h"



struct Rosa{
    Calciatore *C;
    Rosa *pross;
};

class Societa{
public:
    Societa (const string & = "", const string & = "");
    void setDenominazione (const string &);
    string getDenominazione () const;
    
    void setPresidente (const string &);
    string getPresidente () const;
    
    bool acquisici (Calciatore &);
    bool cessione (Calciatore &);
    
    
    
private:
    char *denominazione;                // nome società
    char presidente[C_MAX];             //  nome presidente
    Rosa *vettoreRosa = 0x0;      //  0x0 = NULL
    
};

#endif /* SOCIETA_H */
