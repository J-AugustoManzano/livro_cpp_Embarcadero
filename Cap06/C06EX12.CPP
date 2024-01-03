// C06EX12.CPP

#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
  int A = 1;
  int B = 1;

  int *PA = 0;
  int *PB = 0;

  PA = &A;
  PB = &B;

  clrscr();
  cout << "Valor A = " << *PA << " no endereço " << &PA;
  cout << "." << endl;

  cout << "Valor B = " << *PB << " no endereço " << &PB;
  cout << "." << endl;

  cout << endl;

  if (PA > PB)
    cout << "PA esta a frente de PB.";
  else
    cout << "PA nao esta a frente de PB.";
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
