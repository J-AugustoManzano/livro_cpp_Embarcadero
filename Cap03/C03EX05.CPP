// C03EX05.CPP

#include <conio.h>
#include <iostream>
using namespace std;

int main(void)
{

  int CODIGO;

  clrscr();
  cout << "Entre o codigo de acesso: "; cin >> CODIGO;
  cin.ignore(80, '\n');
  cout << "\n";

  if (CODIGO == 1 or CODIGO == 2 or CODIGO == 3)
    {
      if (CODIGO == 1)
        cout << "Foi acionado o codigo: um.\n";
      if (CODIGO == 2)
        cout << "Foi acionado o codigo: dois.\n"; 
      if (CODIGO == 3)
        cout << "Foi acionado o codigo: tres.\n";
    }
  else
    cout << "Codigo invalido.\n";
  cout << "\n";

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;

}
