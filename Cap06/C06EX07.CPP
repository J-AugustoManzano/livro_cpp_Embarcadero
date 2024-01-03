// C06EX07.CPP

#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
  int A = 1;
  int *PA = 0;

  PA = &A;

  clrscr();
  cout << "Endereco atual ........: " << PA << endl;

  PA++;
  cout << "Proximo endereco ......: " << PA << endl;

  PA++;
  cout << "Proximo endereco ......: " << PA << endl;

  PA--;
  cout << "Endereco anterior .....: " << PA << endl;

  PA--;
  cout << "Endereco anterior .....: " << PA << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
