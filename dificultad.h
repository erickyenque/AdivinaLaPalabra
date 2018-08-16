#ifndef DIFICULTAD_H_INCLUDED
#define DIFICULTAD_H_INCLUDED
#include "acertando.h"
#include "menu.h"
#include <iostream>
#include <fstream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

void dificultad();
void acertando(string palabra);

void fraseABuscar(int opcion) {
  const int num_de_palabras = 31;
  string nombre_archivo, categoria;
  int numero, rango, i=0;
  bool salir = false;
  string linea;
  ifstream archivo;
  srand(time(NULL));
  rango = 1 + rand()% (num_de_palabras - 0);
  while (salir == false) {
    switch (opcion) {
      case 1:
          nombre_archivo = "frutas.txt";
          categoria = "FRUTA";
          break;
      case 2:
          nombre_archivo = "verduras.txt";
          categoria = "VERDURA";
          break;
      case 3:
          nombre_archivo = "paises.txt";
          categoria = "PAIS";
          break;
      case 4:
          system("cls");
          salir = true;
          system("pause");
          break;
      default:
          system("cls");
          dificultad();
          break;
    }
    archivo.open(nombre_archivo.c_str());
    while(getline(archivo,linea)){
      if (i == rango) {
        acertando(linea,categoria);
        break;
      }
      i++;
    }
    archivo.close();
  }
}

void dificultad(){
  int opcion;
  system("cls");
  cout<<"\n\n\t\t\t\tADIVINA LA PALABRA\n\n"
      <<"Eliga la dificultad: \n\n"
      <<"1. FRUTAS.\n"
      <<"2. VERDURAS.\n"
      <<"3. PAISES. \n"
      <<"4. MENU PRINCIPAL\n\n"
      <<"Ingrese opcion: ";
  cin>>opcion;
  fraseABuscar(opcion);
}
#endif //DIFICULTAD_H_INCLUDED
