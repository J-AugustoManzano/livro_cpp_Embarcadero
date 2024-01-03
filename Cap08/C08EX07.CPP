// C08EX07.CPP

#include <iostream>
using namespace std;

int soma(int A, int B) 
{
  return A + B;
}

double soma(double A, double B) 
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
