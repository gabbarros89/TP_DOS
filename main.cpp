#include <iostream>
#include "Nodo.h"
#include "Lista.h"
#include "constantes.h"
#include "LecturaArchivos.h"


using namespace std;

int main() {

    //Lista *clasificados;

    Lista *lista = new Lista;

    cargaDatosEnMemoria(lista, "/home/gabriel/Escritorio/TP_DOS/paises.txt");


    delete lista;
    return 0;
}
