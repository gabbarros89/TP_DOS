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
    for (int i = 1; i <= cantidad; i++){
        Nodo * aux = obtener_nodo(i);
        Dato pais = aux->obtenerElemento();

        int j = i-1;
        cout << "Iteracion i: " << i << endl;
        while (j >= 1 && obtener_nodo(j)->obtenerElemento() > pais ){
            Nodo * nodo_j = obtener_nodo(j);
            if (j == 1){
                Nodo * nodo_j_mas_dos = obtener_nodo(j+2);
                Nodo * nodo_j_mas_uno = obtener_nodo(j+1);
                primero = nodo_j_mas_uno;
                nodo_j_mas_uno->cambiarSiguiente(nodo_j);
                nodo_j->cambiarSiguiente(nodo_j_mas_dos);
            }
            else if(j == cantidad-1){
                    //cout << "Ultima iteracion valor de i: " << i << "Valor de j: " << j  << endl;
                    Nodo * nodo_j_mas_uno = obtener_nodo(j+1);
                    Nodo * nodo_j_menos_uno = obtener_nodo(j-1);
                    nodo_j_menos_uno->cambiarSiguiente(nodo_j_mas_uno);
                    nodo_j_mas_uno->cambiarSiguiente(nodo_j);
                    nodo_j->cambiarSiguiente(0);
            }
            else{
                Nodo * nodo_j_mas_uno = obtener_nodo(j+1);
                Nodo * nodo_j_mas_dos = obtener_nodo(j+2); // apunto a dónde de
                Nodo * nodo_j_menos_uno = obtener_nodo(j-1);
                nodo_j_menos_uno->cambiarSiguiente(nodo_j_mas_uno); // cambie a donde apuntaba j menos uno.
                nodo_j_mas_uno->cambiarSiguiente(nodo_j);
                nodo_j->cambiarSiguiente(nodo_j_mas_dos);
            }

            j--;
        }

        //std::cout << "nodo: " << aux << std::endl;
        //std::cout << aux->obtenerElemento() << std::endl;
        //std::cout << "nodo siguiente:  " << aux->obtenerSiguiente() << std::endl;

    }

}