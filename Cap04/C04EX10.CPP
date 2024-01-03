// C04EX10.CPP

#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int I;

  clrscr();

  for (I = 10; I >= 1; I--)
    cout << "I = " << setw(2) << I << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
