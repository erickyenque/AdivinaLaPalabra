#ifndef UBICACION_H_INCLUDED
#define UBICACION_H_INCLUDED
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }

void vida(int vida){
  char corazon;
  gotoxy(70,1);
  cout<<"VIDAS "<<endl;
  gotoxy(68,3);
  for (int i = 0; i < vida; i++) {
    corazon = 3;
    cout<<corazon<<" ";
  }
  cout<<"\n";
}


void cargando(){
  int i = 0;
  while(i < 4){
    system("cls");
    cout<<"Cargando"<<".";
    Sleep(500);
    cout<<".";
    Sleep(500);
    cout<<".";
    i++;
  }
  system("cls");
}

#endif //UBICACION_H_INCLUDED
