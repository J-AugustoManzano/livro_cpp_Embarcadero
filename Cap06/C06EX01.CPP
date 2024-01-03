// C06EX01.CPP

#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{

  int IDADE = 25;
  int *PIDADE = 0;

  PIDADE = &IDADE;

  clrscr();
  cout << "A idade " << IDADE << " esta armazenada";
  cout << " no endereco de memoria " << PIDADE << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;

}
