//
// Created by gabriel on 11/05/23.
//

#ifndef TP_DOS_LISTA_H
#define TP_DOS_LISTA_H



#include "Nodo.h"


class Lista {

private:
    //Atributos:
    Nodo *primero; // puntero al primer nodo
    int cantidad;
    Nodo *actual; // puntero al segundo nodo

public:
    // Metodos:
    //Constructor
    //PRE:
    //POS: construye una cola vacia
    Lista();


    //PRE: pos > 0 && pos <= cantidad + 1
    //POS: Inserta el elemento en la posicion pos, la primera es 1
    void alta(Dato elemento, int pos);

    //PRE: 0 < pos <= cantidad
    //POS: Elimina el elemento en la posicion pos
    void baja(int pos);


    //PRE: -
    //POS: devuelve el puntero actual al principio
    void resetear();

    //PRE: haySiguiente debe dar true antes de llamar a esta funcion
    //POS: Devuelve el dato apuntado por actual y adelanta actual al siguiente
    Dato siguiente();


    //PRE:
    //POS: devuelve true si actual apunta a un nodo, false sino
    bool haySiguiente();

    //PRE:
    //POS: devuelve true si no hay elementos en la lista, false si no.
    bool vacia();

    //PRE: 0 < pos <= cantidad
    //POS: devuelve e elemento en la posición pos, la primera es 1
    Dato consulta(int pos);

    //PRE: 0 < pos <= cantidad
    //POS: devuelve el elemento en la posicion pos, la primera es la 1
    int obtenerCantidad();


    //PRE:
    //POS: Libera la memoria din
    ~Lista();

private:
    //PRE:
    //POS:
    Nodo *obtener_nodo(int pos);

};
#endif //TP_DOS_LISTA_H
