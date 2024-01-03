// C02EX08.CPP

#include <conio.h>
#include <iomanip>
#include <iostream>
using namespace std;

int main(void)
{
  float HT, VH, PD, TD, SB, SL;

  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);

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
  cout << "Salario Bruto ....: " << setw(8) << SB << endl;
  cout << "Desconto .........: " << setw(8) << TD << endl;
  cout << "Salario Liquido ..: " << setw(8) << SL << endl;
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
