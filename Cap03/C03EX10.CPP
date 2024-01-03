// C03EX10.CPP

#include <conio.h>
#include <iostream>
using namespace std;

int main(void)
{

  int A, B, R;

  clrscr();

  cout << "Entre o valor <A>: "; cin >> A;
  cin.ignore(80, '\n');

  cout << "Entre o valor <B>: "; cin >> B;
  cin.ignore(80, '\n');

  R = (A > B) ? A : B;

  cout << "\nMaior valor informado e: " << R << ".\n";
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;

}
