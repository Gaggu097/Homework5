/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: gagandeepsuman
 *
 * Created on July 25, 2023, 9:35 PM
 */

#include <cstdlib>
#include "Calciatore.h"
#include <iostream>
#include "Societa.h"
using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
    // creo un calciatore
    Calciatore C1("mario", "droghi", 69, true);
    // creo punatotre all'indirizzo di c1
    Calciatore *C2 = &C1;
    // provo la funzione overloaded operator ==(sui oggetti) della classe Calciatore
    cout << boolalpha << (C1 == *C2) << endl;
    // provo la funzione overloaded operator << (sui oggetti) della classe Calciatore
    // ostream& operator << (ostream &, Calciatore)
    cout << "\n" << C1 << endl;
    
    // crea una società
    Societa Roma("Roma", "salvini");
    // acquisisco un giocatore (quello creato prima) nella società Roma, 
    // assegno valore dell'operazione alla variabile bool <acquisito>
    bool acquisito = Roma.acquisici(C1);
    // l'operazione è andata a buon fine?
    cout << boolalpha << acquisito << endl;
    
    
    Calciatore C3("filipp", "mattarella", 42, false);
    // acquisisco un giocatore (quello creato prima) nella società Roma, 
    //assegno valore dell'operazione alla variabile bool <acquisito1>
    bool acquisito1 = Roma.acquisici(C3);
    // l'operazione è andata a buon fine?
    cout << boolalpha << acquisito1 << endl;
    
    // acquisisco un giocatore (puntatore creato prima all'indirizzo di C1) nella società Roma, 
    // assegno valore dell'operazione alla variabile bool <acquisito>
    bool acquisito2 = Roma.acquisici(*C2);
    // l'operazione è andata a buon fine?
    cout << boolalpha << acquisito2 << endl;
    
    // provo la funzione overloaded operator ==(sui oggetti) della classe Calciatore
    cout << boolalpha << (C1 == C3) << endl;
    return 0;
}

