// C07EX12.CPP

#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;	

int main(void)
{

  int TAMANHO, I;
  int *PMAT = 0;

  clrscr();
  TAMANHO = 0;
  do
    {


      TAMANHO++;

      PMAT = (int*) realloc(PMAT,TAMANHO * sizeof(int));

      if (PMAT == NULL)
        {
          cout << "*** Memoria insuficiente ***";
          cout << endl;
          delete [] PMAT;
          exit(1);
        }
      else
        {
          cout << "MATRIZ[" << setw(2);
          cout << TAMANHO << "] ";
          cout << "(0 para encerrar) = ";
          cin >> PMAT[TAMANHO - 1];
          cin.ignore(80, '\n');
        }

    } 
  while (PMAT[TAMANHO - 1] != 0);

  clrscr();
  cout << "Os valores informados sao:" << endl << endl;
  for (I = 0; I < TAMANHO - 1; I++)
    {
       cout << "MATRIZ[" << setw(2) << I + 1 << "] = ";
       cout << setw(3) << PMAT[I] << endl;
    }

  delete [] PMAT;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;

}
