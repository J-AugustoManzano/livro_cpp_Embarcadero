// C08EX06.CPP

#include <iostream>
using namespace std;

template <typename MeuTipo>

  MeuTipo soma(MeuTipo A, MeuTipo B) 
  {
    return A + B;
  }

int main(void) 
{

  int    RI = soma(5, 10);
  double RD = soma(3.5, 2.7);

  cout << "Soma de inteiros ..: " << RI << endl;
  cout << "Soma de reais .....: " << RD << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();

  return 0;
}  
