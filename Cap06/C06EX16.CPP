// C06EX16.CPP

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
  char MES_EXT[][10] = {
         "janeiro",
         "fevereiro",
         "marco",
         "abril",
         "maio",
         "junho",
         "julho",
         "agosto",
         "setembro",
         "outubro",
         "novembro",
         "dezembro"
       };
  int DIA, MES, ANO;

  if (argc == 4)
    {
      DIA = atoi(argv[1]);
      MES = atoi(argv[2]);
      ANO = atoi(argv[3]);
      if (DIA < 1 || DIA > 31)
        cout << "\nForneca dia entre 1 e 31.";
      else if (MES < 1 || MES > 12)
        cout << "\nForneca mes entre 1 e 12.";
      else if (ANO < 1000 || ANO > 9999)
        cout << "\nForneca ano entre 1000 e 9999.";
      else
      {
        cout << endl;
        cout << argv[1] << " de " << MES_EXT[MES-1];
        cout << " de "  << argv[3] << endl;
      }
    }
  else
    cout << "\nIncorreto: data DD MM AAAA.";

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
