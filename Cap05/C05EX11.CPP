// C05EX11.CPP  

#include <iostream>
using namespace std;

void incremento(void)
{
  static int R = 1;
  cout << R << endl;
  R++;
}

int main(void)
{
  for(int I = 1; I <= 10; I++)
    incremento();
  cout << "\nTecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
