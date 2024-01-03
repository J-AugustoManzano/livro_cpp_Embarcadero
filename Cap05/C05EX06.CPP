// C05EX06.CPP  
// Uso de biblioteca customizada

#include <iostream>
#include <conio.h>
#include "pescalc.h"
using namespace std;

int main(void)
{

  int X;

  clrscr();
  cout << "Teste Biblioteca Customizada" << endl;
  cout << endl << "Entre um valor inteiro: "; 
  cin >> X;
  cin.ignore(80, '\n');

  cout << endl << "Fatorial de " << X;
  cout << " = a: " << fatorial(X) << endl;
  
  cout << endl << "Somatorio de " << X;
  cout << " = a: " << somatorio(X) << endl;  
  
  pausa();
  return 0;
}
