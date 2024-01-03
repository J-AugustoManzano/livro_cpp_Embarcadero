// C07EX07.CPP
 
#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{

  int A[5], I, J, X;

  clrscr();
  cout << "Apresentacao ordenada de valores\n\n";

  // Entrada dos valores

  for (I = 0; I <= 4; I++)
    {
      cout << "Entre " << setw(2) << I + 1;
      cout << "o. valor = ";
      cin >> A[I];
      cin.ignore(80, '\n');
    }
  cout << endl;

  // Classificacao dos valores

  for (I = 0; I <= 3; I++)
    for (J = I + 1; J <= 4; J++)
      if (A[I] > A[J])
        {
          X = A[I];
          A[I] = A[J];
          A[J] = X;
        }

  // Apresentacao dos valores

  for (I = 0; I <= 4; I++)
    {
      cout << setw(2) << I + 1 << "o. valor = " << A[I];
      cout << endl;
    }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;  
}
