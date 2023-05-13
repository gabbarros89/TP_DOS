//
// Created by gabriel on 13/05/23.
//

#include "rebanarStrings.h"


void almacenarPaisEquipo(string dato, string &pais, string &grupo) {
    stringstream ss(dato);
    ss >> pais >> grupo;
    reemplazarGuionBajo(pais);
}

void reemplazarGuionBajo(string &dato){
    int i = 0;
    while (dato[i] != FIN_DE_LINEA){
        if (dato[i] == GUION_BAJO){
            dato[i] = ESPACIO;
        }
        i++;
    }
}
