// C03EX07.CPP

#include <conio.h>
#include <iostream>
using namespace std;

int main(void)
{

  short P1, P2;

  clrscr();
  
  gotoxy(23, 1); 
  cout << "VALIDACAO DO PLANO DE COMPETICAO";
  gotoxy(23, 2); 
  cout << "================================";

  gotoxy( 5, 5); cout << "Informe os codigos abaixo:";

  gotoxy( 5, 7); cout << "[1] - classificado";
  gotoxy( 5, 8); cout << "[0] - nao classificadoo";
  
  gotoxy( 5,10); cout << "Prova 1: "; 
  cin >> P1;
  cin.ignore(80, '\n');
  
  gotoxy( 5,11); cout << "Prova 2: "; 
  cin >> P2;
  cin.ignore(80, '\n');

  gotoxy( 5,13);
  if (P1 == 1 xor P2 == 1)
    cout << "Atleta participa da terceira prova.";
  else
    {
      cout << "Atleta nao participa da terceira prova,";
      if (P1 == 1 and P2 == 1)
        cout << " classificado para a final.";
      else
        cout << " desclassificado da competicao.";
    }

  gotoxy( 5,24); 
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;

}
