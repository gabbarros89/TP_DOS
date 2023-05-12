//
// Created by agabr on 4/5/2023.
//

#ifndef LISTA_NODO_H
#define LISTA_NODO_H

#include "Nodo.h"
#include <iostream>
using namespace std;

typedef string Dato;


class Nodo{
private:
    Dato dato;
    Nodo * siguiente;

public:
    //constructor:
    Nodo(Dato elemento);

    Dato obtenerElemento();

    Nodo * obtenerSiguiente();

    void cambiarSiguiente (Nodo * p);

};

#endif //LISTA_NODO_H
