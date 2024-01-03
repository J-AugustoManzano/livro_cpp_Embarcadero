// C05EX13.CPP  

#include <iostream>
#include <conio.h>

namespace soma
{
  int RESULTADO;
}

namespace quociente
{
  float RESULTADO;
}

namespace produto
{
  long int RESULTADO;
}

namespace diferenca
{
  double RESULTADO;
}

int main(void)
{

  using namespace produto;

  clrscr();

  RESULTADO = 5 + 3;
  std::cout << RESULTADO << std::endl;

  RESULTADO = 5 / 3;
  std::cout << RESULTADO << std::endl;

  RESULTADO = 5 * 3;
  std::cout << RESULTADO << std::endl;

  RESULTADO = 5 - 3;
  std::cout << RESULTADO << std::endl;

  std::cout << std::endl;
  std::cout << "Tecle <Enter> para encerrar... ";
  std::cin.get();
  return 0;
}
