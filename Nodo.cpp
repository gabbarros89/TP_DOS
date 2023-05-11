//
// Created by gabriel on 11/05/23.
//

#include "Nodo.h"


Nodo::Nodo(Dato lineaPaises) {
    paisGrupo = lineaPaises;
}

Dato Nodo::obtenerClasificados() {
    return paisGrupo;
}

Nodo *Nodo::obtenerSiguiente() {
    return siguiente;
}

void Nodo::cambiarSiguiente(Nodo *puntero) {
    siguiente = puntero;
}
