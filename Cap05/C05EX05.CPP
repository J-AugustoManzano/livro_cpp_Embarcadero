// C05EX05.CPP
// Programa Fatorial

#include <iostream>
#include <conio.h>
using namespace std;

int fatorial(int N)
{
  int I, FAT = 1;
  for (I = 1; I <= N; I++)
    FAT *= I;
  return FAT;
}

void pausa(void)
{
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}

int main(void)
{

  int X;

  clrscr();
  cout << "Calculo de fatorial\n";
  cout << "\nEntre um valor inteiro: "; cin >> X;
  cin.ignore(80, '\n');
  
  cout << "\nFatorial de " << X << " = a: ";
  cout << fatorial(X) << endl;

  pausa();
  return 0;
}
