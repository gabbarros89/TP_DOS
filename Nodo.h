//
// Created by gabriel on 11/05/23.
//

#ifndef TP_DOS_NODO_H
#define TP_DOS_NODO_H

#include <iostream>
using namespace std;

typedef string Dato;

class Nodo {
private:
    Nodo * siguiente;
protected:
    Dato paisGrupo;

public:
    //METODOS:

    //Constructor
    //PRE:
    //POS: inicializada el nodo con la lectura de datos
    Nodo(Dato lineaPaises);

    //PRE:
    //POS: Retorna el dato PaisGrupo
    Dato  obtenerClasificados();

    //PRE:
    //POS: retorna el puntero a siguiente.
    Nodo *obtenerSiguiente();

    //PRE:
    //POS: Apunta el puntero hacia un nuevo Nodo
    void cambiarSiguiente(Nodo * puntero);


};



#endif //TP_DOS_NODO_H
