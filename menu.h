#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <iostream>
using namespace std;

void menu() {
  int opcion;
  cout<<"\n\n";
  //MENSAJE DE AHORCADO
  cout<<"\t\t  ****  *****  ******  **   ** ****** ***  *  **** \n"
      <<"\t\t **  ** **  **   **    **   **   **   ***  * **  **\n"
      <<"\t\t ****** **  **   **    **   **   **   ** * * ******\n"
      <<"\t\t **  ** **  **   **     ** **    **   **  ** **  **\n"
      <<"\t\t **  ** *****  ******    ***   ****** **  ** **  **\n";
  cout<<"\n\n";
  cout<<"\t\t\t\t1. INICIAR.\n"
      <<"\t\t\t\t  2. ACERCA DE.\n"
      <<"\t\t\t\t    3. SALIR.\n";
}


void about(){
  system("cls");
  cout<<"\n\n";
  cout<<"Creado por Erick Steven Yenque Medina.\n"
      <<"Estudiante de la Universidad Nacional de Trujillo.\n\n"
      <<"Todos los Derechos Reservados®.\n\n"
      <<"Cualquier informacion:\n"
      <<"Facebook: Erick Yenque.\n"
      <<"FansPage: Programando Facil - ESYM\n"
      <<"Celular: 959409697\n\n";
  system("pause");
}
#endif //MENU_H_INCLUDED
