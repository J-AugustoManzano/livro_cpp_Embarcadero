// C06EX02.CPP

#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
  int IDADE = 25;
  int *PIDADE = 0;

  PIDADE = &IDADE;

  clrscr();
  cout << "IDADE  = " << IDADE;
  cout << " | End: = " << &IDADE;
  cout << endl;
  cout << "PIDADE = " << *PIDADE;
  cout << " | End: = " << &PIDADE;
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
