//
// Created by gabriel on 13/05/23.
//

#ifndef TP_DOS_REBANARSTRINGS_H
#define TP_DOS_REBANARSTRINGS_H
#include <iostream>
#include <sstream>
#include "constantes.h"


using namespace std;

//PRE: string dato debe esta separado por espacio
//poS: registra el nombre del pais y el grupo
void almacenarPaisEquipo(string dato, string &pais, string &grupo );


//PRE:
//poS: si encuentra un _ lo reemplaza por un espacio
void reemplazarGuionBajo(string &dato);


#endif //TP_DOS_REBANARSTRINGS_H
