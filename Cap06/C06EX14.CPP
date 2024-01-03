// C06EX14.CPP

#include <iostream>
#include <conio.h>
using namespace std;

void uplowcase(char MATRIZ[], int TIPO)
{
  char *PMATRIZ = MATRIZ;
  if (TIPO == 1)
    while (*PMATRIZ)
      cout.put(toupper(*PMATRIZ++));
  else
    while (*PMATRIZ)
      cout.put(tolower(*PMATRIZ++));
}

int main(void)
{
  char LETRA;
  char MENSAGEM[50];

  clrscr();
  cout << "Entre uma mensagem: ";
  cin.getline(MENSAGEM, sizeof(MENSAGEM));

  cout << endl;
  uplowcase(MENSAGEM, 1); // Apresenta maiúsculo
  cout << endl;
  uplowcase(MENSAGEM, 2); // Apresenta minusculo

  cout << endl  << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
