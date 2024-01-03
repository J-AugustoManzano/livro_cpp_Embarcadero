// C06EX15.CPP

#include <iostream>
#include <conio.h>
using namespace std;

void uplowcase(char MATRIZ[], int TIPO)
{
  char *PMATRIZ = MATRIZ;
  if (TIPO == 1)
    while (*PMATRIZ)
      cout << toupper(*PMATRIZ++);
  else
    while (*PMATRIZ)
      cout << tolower(*PMATRIZ++);
}

int main(void)
{
  char LETRA;
  char MENSAGEM[50];

  clrscr();
  cout << "Entre uma mensagem: ";
  cin.getline(MENSAGEM, sizeof(MENSAGEM));
  cout << endl;

  uplowcase(MENSAGEM, 1); 
  cout << endl;
  uplowcase(MENSAGEM, 2); 

  cout << endl << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
