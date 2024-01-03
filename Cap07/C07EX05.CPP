// C07EX05.CPP

#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{

  float NOTA[10][4];
  int I, J;

  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);

  // Entrada das notas

  clrscr();
  cout << "Leitura das notas\n";

  for (I = 0; I <= 9; I++)
    {
      cout << "\nInforme as notas do " << setw(2);
      cout << I + 1 << "o. aluno:\n\n";
      for (J = 0; J <= 3; J++)
        {
          cout << "Nota: " << J + 1 << " = ";
          cin >> NOTA[I][J];
          cin.ignore(80, '\n');
        }
    }
  cout << endl;

  // Apresentacao das notas

  clrscr();
  cout << "Apresentacao das notas\n";

  cout << setw(6) << "Aluno";
  cout << setw(9) << "Nota1";
  cout << setw(9) << "Nota2";
  cout << setw(9) << "Nota3";
  cout << setw(9) << "Nota4";
  cout << endl;
  cout << endl;
  for (I = 0; I <= 9; I++)
    {
      cout << setw(6) << I + 1;
      for (J = 0; J <= 3; J++)
        cout << setw(9) << NOTA[I][J];
       cout << endl;
    }
  cout << endl;
  
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
