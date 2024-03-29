// C07EX13.CPP

#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{

  int I, J, LINHAS, COLUNAS;	

  int **PMATRIZ;

  clrscr();
  cout << "Entre a quantidade de linhas ...: ";
  cin >> LINHAS;
  cin.ignore(80, '\n');

  cout << "Entre a quantidade de colunas ..: ";
  cin >> COLUNAS;
  cin.ignore(80, '\n');

  PMATRIZ = new int*[LINHAS];

  for (I = 0; I <= LINHAS - 1; I++)
    PMATRIZ[I] = new int[COLUNAS];

  clrscr();
  for (I = 0; I <= LINHAS - 1; I++)
    {
      for (J = 0; J <= COLUNAS - 1; J++)
        {
          cout << "Entre valor para a variavel MATRIZ[";
          cout << I + 1 << "," << J + 1 << "] = ";
          cin >> PMATRIZ[I][J];
          cin.ignore(80, '\n');
        }
    }

  cout << endl;
  cout << "Os valores informados sao:\n" << endl;
  for (I = 0; I <= LINHAS - 1; I++)
    {
      for (J = 0; J <= COLUNAS - 1; J++)
        {
          cout << "MATRIZ[" << I+1 << ",";
          cout << J + 1 << "] = ";
          cout << setw(4) << PMATRIZ[I][J] << endl;
        } 
    }

  for (I = 0; I <= LINHAS - 1; I++)
    delete [] PMATRIZ[I]; 
  delete [] PMATRIZ;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;

}
