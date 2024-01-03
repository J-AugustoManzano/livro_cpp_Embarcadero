// C02EX03.CPP

#include <conio.h>
#include <iostream>

int main(void)
{
  char NOME[40], SOBRENOME[20];
  clrscr();
  std::cout << "Informe seu nome e sobrenome: ";
  std::cin >> NOME >> SOBRENOME;
  std::cin.ignore(80, '\n');
  std::cout << "Ola, " << NOME << " " << SOBRENOME;
  std::cout << std::endl;
  std::cout << "Tecle <Enter> para encerrar... ";
  std::cin.get();
  return 0;
}
