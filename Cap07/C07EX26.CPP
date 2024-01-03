// C07EX26.CPP  

#include <conio.h>
#include <iostream>
using namespace std;

typedef float   real;
typedef int     integer;
typedef integer inteiro;

int main(void)
{

  inteiro A;
  real B;

  clrscr();
  cout << "Entre um valor inteiro: ";
  cin >> A;
  cin.ignore(80, '\n');
  cout << "Foi informado o valor: " << A << endl;

  cout << endl;
  cout << "Entre um valor real: ";
  cin >> B;
  cin.ignore(80, '\n');
  cout << "Foi informado o valor: " << B << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();

  return 0;
}
