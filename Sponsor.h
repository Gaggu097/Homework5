/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.h to edit this template
 */

/* 
 * File:   Sponsor.h
 * Author: gagandeepsuman
 *
 * Created on July 25, 2023, 10:06 PM
 */

#ifndef SPONSOR_H
#define SPONSOR_H

#include <string>
#include <iostream>

using std::string;
using std::ostream;

class Sponsor{
    friend ostream& operator<< (ostream &, const Sponsor&);
    
public:
    Sponsor (const string&, const string&);
    
    
private:
    string nome;
    string prodotto;
};

#endif /* SPONSOR_H */
