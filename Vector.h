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

template<typename generico>
void Vector<generico>::expandirVector() {
    tamanio += 2;
    generico *auxiliar = new generico[tamanio];
    for (int i = 0; i < tamanio; i++){
        auxiliar[i] = elementos[i];
        tamanio++;
    }
    delete [] elementos;
    elementos = auxiliar;
}


#endif //TP_DOS_VECTOR_H
