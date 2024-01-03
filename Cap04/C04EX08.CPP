// C04EX08.CPP

#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int N, I, R;

  clrscr();
  cout << "Programa Tabuada\n\n";
  cout << "Entre o valor da tabuada: "; cin >> N;
  cin.ignore(80, '\n');
  cout << endl;

  for (I = 1; I <= 10; I++)
    {
      R = N * I;
      cout << setw(2) << N << " X ";
      cout << setw(2) << I << " = ";
      cout << setw(3) << R << endl;
    }
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
