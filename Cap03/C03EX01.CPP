// C03EX01.CPP

#include <conio.h>
#include <iostream>

int main(void)
{

  int A, B, R;

  clrscr();
  std::cout << "Entre o valor <A>: "; std::cin >> A;
  std::cin.ignore(80, '\n');

  std::cout << "Entre o valor <B>: "; std::cin >> B;
  std::cin.ignore(80, '\n');

  std::cout << "\n";
  R = A + B;

  if (R > 10)
    std::cout << "Resultado = " << R << std::endl;
  std::cout << std::endl;

  std::cout << "Tecle <Enter> para encerrar... ";
  std::cin.get();
  return 0;

}
