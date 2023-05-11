#include <iostream>
#include "Nodo.h"
#include "Lista.h"
#include "constantes.h"
#include "LecturaArchivos.h"


using namespace std;

int main() {

    Lista *clasificados;


    cargaDatosEnMemoria(clasificados, RUTA_PAISES);

    //std::cout << "Hello, World!" << std::endl;
    //std:: cout << "Es hora de trabajar gabriel " << std::endl;
    return 0;
}
