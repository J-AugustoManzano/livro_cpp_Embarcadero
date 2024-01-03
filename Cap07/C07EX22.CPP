// C07EX22.CPP

#include <conio.h>
#include <iostream>
using namespace std;

  // Definicao da matriz (vetor) de caracteres

  char EXTENSO[][10] =
    {
      "janeiro",
      "fevereiro",
      "marco",
      "abril",
      "maio",
      "junho",
      "julho",
      "agosto",
      "setembro",
      "outubro",
      "novembro",
      "dezembro"
    };

int main(void) 
{

  int MES;

  clrscr();
  cout << "Teste de acesso\n\n";
  cout << "Entre um mes valido (1 ate 12): ";
  cin >> MES;
  cin.ignore(80, '\n');
  cout << endl;
  
  cout << "Mes definido = " << MES;
  cout << ", o qual em extenso equivale a ";
  cout << EXTENSO[MES-1];

  cout << endl << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();

  return 0;
}
