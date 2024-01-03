// C04EX07.CPP

#include <conio.h>
#include <iostream>
using namespace std;

int main(void)
{

  int N, I = 1;
  long int FAT = 1;

  clrscr();
  cout << "Programa Fatorial" << endl << endl;
  cout << "Fatorial de que valor: "; cin >> N;
  cin.ignore(80, '\n');

  do
    {
       FAT *= I;
       I++;
    }
  while (I <= N);
  cout << "\n";
  cout << "Fatorial de " << N << " = "<< FAT << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
