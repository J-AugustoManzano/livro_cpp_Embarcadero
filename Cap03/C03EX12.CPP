// C03EX12.CPP – Exemplo 1

#include <conio.h>
#include <iostream>
using namespace std;

int main(void)
{

  int N, R4, R5;

  clrscr();
  cout << "Entre um valor numerico natural: "; cin >> N;
  cin.ignore(80, '\n');
  cout << endl;

  R4 = N - 4 * (N / 4); 
  R5 = N - 5 * (N / 5);

  if (R4 == 0 and R5 == 0)
    cout << N << endl;
  else
    cout << "Valor nao divisivel por 4 e 5." << endl;

  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;

}
