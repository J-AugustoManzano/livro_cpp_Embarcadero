// C04EX09.CPP

#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{

  int N, I;
  long int FAT = 1;

  clrscr();
  cout << "Programa Fatorial" << endl << "\n";
  cout << "Fatorial de que valor: "; cin >> N;
  cin.ignore(80, '\n');

  for (I = 1; I <= N; I++)
    FAT *= I;

  cout << "\n";
  cout << "Fatorial de " << N << " = "<< FAT << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
