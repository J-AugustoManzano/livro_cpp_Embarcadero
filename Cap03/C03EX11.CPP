// C03EX11.CPP

#include <conio.h>
#include <iostream>
using namespace std;

int main(void)
{

  int MES;

  clrscr();

  cout << "Entre numero equivalente a um MES: "; 
  cin >> MES;
  cin.ignore(80, '\n');

  cout << endl;

  // uso de decisao seletiva

  switch (MES)
    {
      case  1: cout << "Janeiro";      break;
      case  2: cout << "Fevereiro";    break;
      case  3: cout << "Marco";        break;
      case  4: cout << "Abril";        break;
      case  5: cout << "Maio";         break;
      case  6: cout << "Junho";        break;
      case  7: cout << "Julho";        break;
      case  8: cout << "Agosto";       break;
      case  9: cout << "Setembro";     break;
      case 10: cout << "Outubro";      break;
      case 11: cout << "Novembro";     break;
      case 12: cout << "Dezembro";     break;
      default: cout << "Mes invalido"; break;
    }
  cout << endl << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;

}
