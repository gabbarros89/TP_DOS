//
// Created by gabriel on 11/05/23.
//

#include "LecturaArchivos.h"

#include "Impresiones.h"
#include "constantes.h"
#include <iostream>
#include <fstream>

void cargaDatosEnMemoria(Lista * lista, const string RUTA){

    ifstream archivo(RUTA);
    if (!archivo)
        imprimirDosArgumentos(EL_ARCHIVO, RUTA);
    int posicion = 1;
    string linea;
    while (getline(archivo, linea)){
        lista->alta(linea, posicion);
        posicion ++;
    }
    lista->resetear();

    while (lista->haySiguiente()){
        cout << lista->siguiente() << endl;
    }
}