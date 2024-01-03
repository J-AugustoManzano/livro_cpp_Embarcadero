// C02EX07.CPP

#include <conio.h>
#include <iostream>
using namespace std;

int main(void)
{
  float HT, VH, PD, TD, SB, SL;

  clrscr();

  cout << "Entre a quantidade de horas .....: "; 
  cin >> HT;
  cin.ignore(80, '\n');

  cout << "Entre o valor da hora ...........: "; 
  cin >> VH;
  cin.ignore(80, '\n');

  cout << "Entre o percentual de desconto ..: "; 
  cin >> PD;
  cin.ignore(80, '\n');

  SB = HT * VH;
  TD = (PD / 100) * SB;
  SL = SB - TD;

  cout << "\n";
  cout << "Salario Bruto ....: " << SB << endl;
  cout << "Desconto .........: " << TD << endl;
  cout << "Salario Liquido ..: " << SL << endl;
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
