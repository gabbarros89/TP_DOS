//
// Created by agabr on 4/5/2023.
//

#include "Nodo.h"



//constructor:
Nodo::Nodo(Dato elemento) {
    dato = elemento;
    siguiente = 0;
}

Dato Nodo::obtenerElemento() {
    return dato;
}

Nodo * Nodo::obtenerSiguiente() {
    return siguiente;
}

void Nodo::cambiarSiguiente (Nodo * p){
    siguiente = p; //p es un puntero al nodo
}
