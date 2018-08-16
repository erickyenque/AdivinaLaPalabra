#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include "menu.h"
#include "dificultad.h"
#include "ubicacion.h"
#include "acertando.h"
using namespace std;

int main(int argc, char const *argv[]) {
  SetConsoleTitle("Adivina la Palabra");
  int opcion;
  bool salir = false;
  while(true){
    system("cls");
    menu();
    cout<<"Eliga opcion: ";
    cin>>opcion;
    switch (opcion) {
      case 1:
          system("cls");
          cargando();
          dificultad();
          break;
      case 2:
          about();
          break;
      case 3:
          exit(1);
          break;
    }
  }
  return 0;
}
