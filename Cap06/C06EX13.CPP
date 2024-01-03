// C06EX13.CPP

#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
  char PALAVRA[] = "Paralelepipedo";
  char *P = 0;

  P = PALAVRA;

  clrscr();
  while (*P != '\0')
  {
    cout << *P << endl;
    P++;
  }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
