// C06EX04.CPP

#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{

  int A, *PA;

  PA = &A;

  clrscr();
  cout << "Entre um valor inteiro: ";
  cin >> *PA;
  cin.ignore(80, '\n');

  cout << "\nValor informado = " << A << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
