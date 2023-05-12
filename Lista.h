//
// Created by agabr on 4/5/2023.
//

#ifndef LISTA_LISTA_H
#define LISTA_LISTA_H

#include "Nodo.h"
#include "constantes.h"

class Lista{
private:
    //Atributos:
    Nodo *primero;
    int cantidad;
    Nodo *actual;

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

    //PRE:
    //POS: Ordena alfabeticamente los nodos.
    void ordenarNombre();
private:
    //PRE:
    //POS:
    Nodo *obtener_nodo(int pos);

};

#endif //LISTA_LISTA_H
