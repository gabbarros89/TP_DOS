//
// Created by agabr on 4/5/2023.
//

#include <iostream>
#include "Lista.h"

Lista::Lista() {
    primero = 0;
    cantidad = 0;
    actual = 0;
}


bool Lista::vacia() {
    return (cantidad == 0);
}

int Lista::obtenerCantidad() {
    return (cantidad);
}

Dato Lista::consulta(int pos) {
    Nodo * aux = obtener_nodo(pos);
    return aux->obtenerElemento();
}

void Lista::resetear() {
    actual = primero;
}

Dato Lista::siguiente() {
    Dato dato = actual->obtenerElemento();
    actual = actual->obtenerSiguiente();
    return (dato);
}

bool Lista::haySiguiente() {
    return (actual != 0);
}

void Lista::alta(Dato elemento, int pos) {
    Nodo *aux = new Nodo(elemento);
    //std::cout << "doy de alta un nodo en: " << aux << std::endl;
    if (pos == 1){
        aux->cambiarSiguiente(primero);
        primero = aux;
    }
    else{
        Nodo * ant= obtener_nodo(pos-1);
        aux->cambiarSiguiente(ant->obtenerSiguiente());
        ant->cambiarSiguiente(aux);
    }
    cantidad++;
}

void Lista::baja(int pos) {
    Nodo * aux = primero;
    if (pos == 1) {
        primero = primero->obtenerSiguiente();
    }
    else{
        Nodo * ant = obtener_nodo(pos - 1 );
        aux = ant->obtenerSiguiente();
        ant->cambiarSiguiente(aux->obtenerSiguiente());
    }
    //std::cout << "doy de BAJA un nodo en: " << aux << std::endl;
    delete aux;
    cantidad--;
}

Nodo *Lista::obtener_nodo(int pos) {
    Nodo * aux = primero;
    for (int i = 1; i < pos; i++){
        aux = aux->obtenerSiguiente();
    }
    return aux;
}

Lista::~Lista() {

    while (!vacia()){
        baja(1);
    }
}

void Lista::ordenarNombre() {

    for (int i = UNO; i < cantidad; i++) {

        Nodo * aux = obtener_nodo(i);
        cout << aux->obtenerElemento() << endl;
        cout << "Direccion del nodo: " << obtener_nodo(i) << endl;
        cout << "Direccion del siguiente (dentro del nodo): " <<obtener_nodo(i)->obtenerSiguiente() << ": " ;
        //cout << obtener_nodo(i) << endl; ;
    }

}
