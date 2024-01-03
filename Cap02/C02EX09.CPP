// C02EX09.CPP

#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int QUOCIENTE, DIVIDENDO, DIVISOR, RESTO;

  clrscr();

  gotoxy(10, 5);
  cout << "Entre o valor do dividendo ...: ";
  cin >> DIVIDENDO;
  cin.ignore(80, '\n');

  gotoxy(10, 7);
  cout << "Entre o valor do divisor .....: "; 
  cin >> DIVISOR;
  cin.ignore(80, '\n');

  QUOCIENTE = DIVIDENDO / DIVISOR;
  RESTO = DIVIDENDO % DIVISOR;

  gotoxy(10, 9);
  cout << "Quociente = " << setw(8) << QUOCIENTE << endl;
  gotoxy(10, 10);
  cout << "Resto     = " << setw(8) << RESTO << endl;

  gotoxy(1, 24);
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
