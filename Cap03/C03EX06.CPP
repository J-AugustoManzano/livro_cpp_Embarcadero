// C03EX06.CPP

#include <conio.h>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{

  double VALOR;

  clrscr();
  cout << "Entre valor numerico nao maior que 5: "; 
  cin >> VALOR;
  cin.ignore(80, '\n');
  cout << "\n";

  if (not (VALOR > 5))
    cout << "Valor informado: " << VALOR << endl;
  else
    cout << "Valor informado invalido." << endl; 
  cout << "\n";

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;

}
