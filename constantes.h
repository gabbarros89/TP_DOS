//
// Created by gabriel on 11/05/23.
//

#ifndef TP_DOS_CONSTANTES_H
#define TP_DOS_CONSTANTES_H

#include <iostream>

using namespace std;

//ARCHIVOS:
const::string RUTA_PAISES = "/home/gabriel/Escritorio/TP_DOS/paises.txt/home/gabriel/Escritorio/TP_DOS/paises.txt";
const::string RUTA_RESULTADOS = "/home/gabriel/Escritorio/TP_DOS/resultados.csv";

//NUMEROS:
const int MENOS_DOS = -2;
const int MENOS_UNO = -1;
const int CERO = 0;
const int UNO = 1;
const int DOS = 2;
const int TRES = 3;
const int CUATRO = 4;
const int CINCO = 5;


// PUNTAJES:
const int PUNTOS_POR_GANAR = 3;
const int PUNTOS_POR_EMPATAR =1;
const int PUNTOS_POR_PERDER_EN_ELIMINATORIAS = 0; //
const int PUNTOS_POR_GANAR_PENALES = 2;
const int PUNTOS_POR_PERDER_PENALES = 1;

// MENU:
const int LISTAR_EQUIPOS = 1;
const int MOSTRAR_PODIO = 2;
const int MOSTRAR_EQUIPO_POR_NOMBRE = 3;
const int ORDENAR_POR_FASE_Y_PUNTOS = 4;
const int SALIR = 5;
const int OPCIONES_VALIDAS = 5;

//MANEJO DE STRINGS:
const char FIN_DE_LINEA = '\0';
const char GUION_BAJO = '_';
const char ESPACIO = ' ';
const char COMA = ',';
const char RETORNO_CARRO = '\r';
const char TABULADOR = '\t';


// LINEAS DE CONTROL:

const string GRUPOS = "grupos";
const string OCTAVOS = "octavos";
const string CUARTOS = "cuartos";
const string TERCER_PUESTO = "tercer puesto";
const string SEMIFINALES = "semifinales";
const string FINAL = "final";


// ARGUMENTOS PARA IMPRIMIR:
const string EL_ARCHIVO = "El documento no sé encuentra disponible \n RUTA: ";



#endif //TP_DOS_CONSTANTES_H
