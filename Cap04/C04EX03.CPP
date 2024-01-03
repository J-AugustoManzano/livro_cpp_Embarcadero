// C04EX03.CPP

#include <conio.h>
#include <iomanip>
#include <iostream>
using namespace std;

int main(void)
{

  int N, I, R;
  char RESP = 'S';

  while (RESP == 'S' or RESP == 's')
    {

      clrscr();
      gotoxy( 1, 1);
      cout << "Entre o valor da tabuada: "; cin >> N;
      cin.ignore(80, '\n');

      gotoxy( 1, 3);
      I = 1;
      while (I <= 10)
        {
          R = N * I;
          cout << setw(2) << N << " X ";
          cout << setw(2) << I << " = ";
          cout << setw(3) << R << endl;
          I = I + 1;
        }

      gotoxy( 1,14);
      cout << "Deseja continuar?" << endl;
      cout << "Tecle [S] p/ SIM, outra letra p/ NAO: ";
      cin.get(RESP);
      cin.ignore();
    }

  gotoxy( 1,17);
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
