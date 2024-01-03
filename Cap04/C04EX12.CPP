// C04EX12.CPP

#include <conio.h>
#include <iostream>
using namespace std;

int main(void)
{

  float N;
  clrscr();
  do
    {
      cout << "Entre valor numerico: ";
      cin >> N;
      if (cin.fail())
        {
          cout << "Erro - entre apenas valor numerico!";
          cout << endl;
          cin.clear();
          cin.ignore(10000,'\n');
        }
      else
        {
          break;
        }
    }
  while (true);
  cin.ignore(80, '\n');

  cout << "Resultado = " << N + 5 << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
