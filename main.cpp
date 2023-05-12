#include <iostream>
#include "Nodo.h"
#include "Lista.h"
#include "constantes.h"
#include "LecturaArchivos.h"


using namespace std;

int main() {

    //Lista *clasificados;

    Lista *lista = new Lista;
    cargaDatosEnMemoria(lista, RUTA_PAISES);

    Lista *resultados = new Lista;
    cargaDatosEnMemoria(resultados, RUTA_RESULTADOS);

    //cargaDatosEnMemoria(lista, "/home/gabriel/Escritorio/TP_DOS/paises.txt");

    lista->ordenarNombre();

    delete lista;
    delete resultados;
    return 0;
}
