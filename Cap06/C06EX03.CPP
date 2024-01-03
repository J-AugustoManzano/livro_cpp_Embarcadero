// C06EX03.CPP

#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
  int IDADE = 25;
  int *PIDADE = &IDADE;

  clrscr();
  cout << "O valor idade " << *PIDADE << " esta no ";
  cout << "endereco de memoria " << PIDADE << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
