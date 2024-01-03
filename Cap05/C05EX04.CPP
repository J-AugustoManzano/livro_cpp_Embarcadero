// C05EX04.CPP
// Programa Fatorial

#include <iostream>
#include <conio.h>
using namespace std;

void fatorial(int N, long int &FAT)
{
  int I;
  FAT = 1;
  for (I = 1; I <= N; I++)
    FAT *= I;
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
  long int Y;

  clrscr();
  cout << "Calculo de fatorial\n";
  cout << "\nEntre um valor inteiro: "; cin >> X;
  cin.ignore(80, '\n');

  fatorial(X, Y);
  cout << "\nFatorial de " << X;
  cout << " = a: " << Y << endl;
  pausa();
  return 0;
}
