// CALCULO_PESSOAL.CPP  
// Exemplo de biblioteca

#include <iostream>

int fatorial(int N)
{
  int I, FAT = 1;
  for (I = 1; I <= N; I++)
    FAT *= I;
  return FAT;
}

int somatorio(int N)
{
  int I, SOMA = 0;
  for (I = 1; I <= N; I++)
    SOMA += I;
  return SOMA;
}

void pausa(void)
{
  std::cout << std::endl;
  std::cout << "Tecle <Enter> para encerrar... ";
  std::cin.get();
}
