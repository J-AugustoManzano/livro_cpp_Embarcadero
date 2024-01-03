// C06EX10.CPP

#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
  int A = 1;
  float B = 2.5;
  void *PG = 0;

  clrscr();

  PG = &A;
  cout << "Valor inteiro ...: " << *(int *)PG << endl;

  PG = &B;
  cout << "Valor real ......: " << *(float *)PG << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
