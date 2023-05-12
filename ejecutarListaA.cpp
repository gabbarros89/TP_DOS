#include <iostream>
#include "Lista.h"
#include <cstdlib>
#include "nodo.h"
#include <chrono>

using namespace std;
int main() {
    auto start_time = std::chrono::high_resolution_clock::now();

    Lista l;

    cout << rand() <<endl;
    /*
    l.alta(5,1);
    l.alta(8,1);
    l.alta(3,2);
    l.alta(6,4);
*/
    int i = 1;
    while (i < 1000){
        l.alta(rand(), i);
        i++;
    }


    l.resetear();
    while (l.haySiguiente()){
        cout << l.siguiente() << endl;
    }


    l.baja(1);
    cout << endl;

    l.resetear();
    while (l.haySiguiente()){
        cout << l.siguiente() << endl;
    }
    //std::cout << "Hello, World!" << std::endl;



    auto end_time = std::chrono::high_resolution_clock::now();
    auto time_span = std::chrono::duration_cast<std::chrono::duration<double>>(end_time - start_time);
    double elapsed_time = time_span.count();

    std::cout << "El programa tardo:  " << elapsed_time << " segundos en ejecutarse." << std::endl;
    cout << l.obtenerCantidad() << endl;

    return 0;


}
