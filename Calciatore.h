/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.h to edit this template
 */

/* 
 * File:   Calciatore.h
 * Author: gagandeepsuman
 *
 * Created on July 25, 2023, 9:37 PM
 */

#ifndef CALCIATORE_H
#define CALCIATORE_H

#include <string>
#include <iostream>
using std::string;
using std::ostream;
using std::boolalpha;

class Calciatore{
    friend ostream& operator<< (ostream &, const Calciatore &);
public:
    Calciatore ( const string &, const string &, const size_t &, const bool&);
    string getNome() const;
    bool getTitolarita() const;
    
    void setNome(const string &);
    void setTitolarita (const bool &);
    
    
    bool operator== (const Calciatore&) const;
    bool operator !=(const Calciatore&) const;
    
    
private:
    string nome;        // nome del calciatore
    string cognome;     // cognome del calciatore
    size_t numero;      // numero della maglia
    bool titolare;      // un calciatore può essere titolare o meno.
};

#endif /* CALCIATORE_H */
