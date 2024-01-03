// C04EX04.CPP

#include <conio.h>
#include <iostream>
using namespace std;

int main(void)
{

  int N, I = 1;
  long int FAT = 1;

  clrscr();
  cout << "Programa Fatorial\n";
  cout << "\nFatorial de que valor: "; cin >> N;
  cin.ignore(80, '\n');

  while (I <= N)
    {
       FAT *= I;
       I++;
    }

  cout << "\n";
  cout << "Fatorial de " << N << " = "<< FAT << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
