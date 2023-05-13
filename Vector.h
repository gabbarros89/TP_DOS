//
// Created by gabriel on 12/05/23.
//

#ifndef TP_DOS_VECTOR_H
#define TP_DOS_VECTOR_H

template <typename generico> class Vector {
private:
    int tamanio, cantidad;
    generico * elementos;

public:

    //PRE:
    //POS: crea un vector vacio
    Vector();

    //PRE:
    //POS:
    void pushback(generico algo);

    //PRE:
    //POS:
    void expandirVector();

    //PRE:
    //POS:
    void reducirVector()


    //PRE:
    //POS:
    generico popBack();

    //PRE:
    //POS:
    generico &elemento(int indice);


    //Destructor
    //PRE:
    //POS:
    ~Vector();
};


#endif //TP_DOS_VECTOR_H
