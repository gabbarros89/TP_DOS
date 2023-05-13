//
// Created by agabr on 4/5/2023.
//

#include "nodo.h"



//constructor:
nodo::nodo(Dato elemento) {
    dato = elemento;
    siguiente = 0;
}

Dato nodo::obtenerElemento() {
    return dato;
}

nodo * nodo::obtenerSiguiente() {
    return siguiente;
}

void nodo::cambiarSiguiente (nodo * p){
    siguiente = p; //p es un puntero al nodo
}
