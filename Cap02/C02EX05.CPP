// C02EX05.CPP

#include <iostream>

int main(void)
{
  char NOME[40];
  std::cout << "Informe seu nome ....: ";
  std::cin.getline(NOME, sizeof(NOME));
  std::cout << "Ola,\n" << NOME << "\n";
  std::cout << std::endl;
  std::cout << "Tecle <Enter> para encerrar... ";
  std::cin.get();
  return 0;
}
