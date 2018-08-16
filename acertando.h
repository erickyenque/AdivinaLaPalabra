#ifndef ACERTANDO_H_INCLUDED
#define ACERTANDO_H_INCLUDED
#include "dificultad.h"
#include "ubicacion.h"
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <ctype.h>
using namespace std;

void dificultad();

void acertando(string palabra, string categoria){
  system("cls");
  char letra[0], auxiliar[palabra.length()], auxiliar2[palabra.length()];
  int i = 0, posx, num_vida = 5, cont, opcion, intentos = 0;
  bool salir = false, disminuye;
  //Llenando auxiliar de _ _ _ _ _
  for (int i = 0; i < palabra.length(); i++) {
    auxiliar[i] = '_';
    auxiliar2[i] = palabra[i];
  }
  while(salir == false){
    system("cls");
    posx = 0; cont = 0;
    gotoxy(68,6); cout<<"Intentos: "<<endl;
    gotoxy(72,8); cout<<intentos;
    for (int i = 0; i < palabra.length(); i++) {
      gotoxy(6+i+posx,8);
      cout<<i+1<<endl;
      gotoxy(6+i+posx,10);
      cout<<auxiliar[i];
      posx+= 2;
    }

    posx = 0;
    vida(num_vida);
    gotoxy(1,1);
    cout<<"\n\t.:ADIVINANDO "<<categoria<<":.\n\n";
    cout<<"Ingrese letra >>> ";
    cin>>letra[0];
    letra[0] =  toupper(letra[0]);
    for (int i = 0; i < palabra.length(); i++) {
      gotoxy(6+i+posx,8);
      cout<<i+1<<endl;
      posx+= 2;
    }

    posx = 0;
    for (int i = 0; i < palabra.length(); i++) {
      gotoxy(6+i+posx,10);
      if(palabra[i] == letra[0]){
        if(auxiliar[i] == '_'){
          auxiliar[i] = palabra[i];
          cont++;
        }
      }
      cout<<auxiliar[i];
      posx+= 2;
    }
    if(cont == 0){
      cout<<"\a\a";
      num_vida--;
    }
    intentos++;
    if(strncmp(auxiliar,auxiliar2, palabra.length()) == 0){
      salir = true;
      system("cls");
      cout<<"\a\n\n\t\t\tFELICIDADES GANASTE!\n\n\a";
      cout<<"\t\t"<<categoria<<": "<<palabra<<"\n\n";
      cout<<"\t\tNumero de Vidas: "<<num_vida<<"\n\n";
      cout<<"\t\tNumero de intentos: "<<intentos<<"\n\n";
    }
    if (num_vida == 0) {
      salir = true;
      system("cls");
      cout<<"\a\n\n\t\t\tLO SIENTO, PERDISTE!\n\n\a";
      cout<<"\t\t"<<categoria<<": "<<palabra<<"\n\n";
    }
    cout<<"\n\n";
    system("pause");
  }
  cout<<"\n\n\t\tDesea intentar nuevamente? SI(1), NO(0):  ";
  cin>>opcion;
  if (opcion == 1) {
    dificultad();
  }else{
    exit(1);
    system("start adivina.exe");
  }
}


#endif //ACERTANDO_H_INCLUDED
