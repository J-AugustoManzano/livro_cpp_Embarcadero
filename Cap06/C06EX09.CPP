// C05EX09.CPP

#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
  int A = 1;
  int *PA = 0;

  PA = &A;

  clrscr();
  cout << "Endereco atual ......: " << PA << endl;

  (PA += 10);
  cout << "Proximo endereco ....: " << PA << endl;

  (PA += 10);
  cout << "Proximo endereço ....: " << PA << endl;

  (PA -= 10);
  cout << "Endereco anterior ...: " << PA << endl;

  (PA -= 10);
  cout << "Endereco anterior ...: " << PA << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
