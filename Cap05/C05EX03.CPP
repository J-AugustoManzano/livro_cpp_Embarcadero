// C05EX03.CPP
// Programa Fatorial

#include <iostream>
#include <conio.h>
using namespace std;

void fatorial(int N)
{
  int I;
  long int FAT = 1;
  for (I = 1; I <= N; I++)
    FAT *= I;
  cout << "\nFatorial de " << N;
  cout << " = a: " << FAT << endl;
}

void pausa(void)
{
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}

int main(void)
{

  int X, Y;

  clrscr();
  cout << "Calculo de fatorial\n";
  cout << "\nEntre um valor inteiro: "; 
  cin >> X;
  cin.ignore(80, '\n');

  fatorial(X);

  cout << "\nEntre um valor inteiro: "; 
  cin >> Y;
  cin.ignore(80, '\n');

  fatorial(Y);

  fatorial(9);

  fatorial(6);

  pausa();

  return 0;
}
