// C03EX02.CPP

#include <conio.h>
#include <iostream>
using namespace std;

int main(void)
{

  int A, B, X;

  clrscr();
  cout << "Entre o valor <A>: "; cin >> A;
  cin.ignore(80, '\n');

  cout << "Entre o valor <B>: "; cin >> B;
  cin.ignore(80, '\n');
  cout << "\n";

  if (A > B)
    {
       X = A;
       A = B;
       B = X;
    }

  cout << "Os valores ordenados sao: " << A;
  cout << " e " << B << "." << endl << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
