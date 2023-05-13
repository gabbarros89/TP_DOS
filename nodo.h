//
// Created by agabr on 4/5/2023.
//

#ifndef LISTA_NODO_H
#define LISTA_NODO_H

#include "nodo.h"
#include <iostream>
using namespace std;

typedef string Dato;


class nodo{
private:
    Dato dato;

protected:
    nodo * siguiente;

public:
    //constructor:
    nodo(Dato elemento);

    Dato obtenerElemento();

    nodo * obtenerSiguiente();

    void cambiarSiguiente (nodo * p);

};

#endif //LISTA_NODO_H
