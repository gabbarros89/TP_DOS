//
// Created by gabriel on 13/05/23.
//

#ifndef TP_DOS_NODOVECTOR_H
#define TP_DOS_NODOVECTOR_H
#include "nodo.h"
#include <vector>
#include "rebanarStrings.h"

using namespace std;
typedef string Dato;

struct Resultados{
    Dato paisLocal, paisVisita;
    int golLocal, golVisita;
};

class NodoVector: public nodo{
private:
    int posicion;
    Dato pais, grupo;
    Resultados resultados[3];

public:
    //PRE:
    //POS:
    NodoVector(Dato elemento);

    //PRE: string datos debe almacenar los datos del partido
    //POS: cargar en la posicion pasada, los elementos del partido.
    void cargarVector(int posicion, Dato dato);

    void modificarVector();

    //PRE:
    //POS: destructor
    ~NodoVector();


};


#endif //TP_DOS_NODOVECTOR_H
