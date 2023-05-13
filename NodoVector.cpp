//
// Created by gabriel on 13/05/23.
//

#include "NodoVector.h"


void NodoVector::cargarVector(int posicion, Dato dato) {
    string Local,Visita;
    int GLocal, GVisita;
    cout << "Ingrese pais local: ";
    cin >> Local;
    cout << "Ingrese pais viista: ";
    cin >> Visita;
    cout << "Ingrese goles local: ";
    cin >> GLocal;
    cout << "Ingrese goles: ";
    cin >> GVisita;

    resultados[posicion].paisLocal = Local;
    resultados[posicion].golLocal= GLocal;
    resultados[posicion].paisVisita = Visita;
    resultados[posicion].golVisita = GVisita;

    posicion ++;
}

NodoVector::NodoVector(Dato elemento) : nodo(elemento) {
    posicion = 0;
    almacenarPaisEquipo(elemento, pais, grupo);
}
