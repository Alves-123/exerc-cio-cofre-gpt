#include <iostream>

using namespace std;

int codigo, chave;
double abrir;


char modo [3] = {A, B, C}

int main()
{

setlocale(LC_ALL, "pt");
  
cout << "Será que consegues Abrir o cofre?" << endl;
cout << "" << end;

cout << "Regras:\n" << endl;

cout << "Modo A\n";
cout << "O valor de código é par, e\n";
cout << "O valor de chave é multiplo de 3\n\n";

cout << "Modo B\n";
cout << "A soma de código + chave é maior que 100, e\n";
cout << "código é diferente de chave\n\n";

cout << "Modo C\n";
cout << "código é divisivel por chave (resto da divisâo igual a 0)\n";

system("cls");
  
cout << "inserir o código" << endl;
cin >> codigo >> endl:
  
cout << "inserir a chave" << endl;
cin >> chave >> endl:

cout << "inserir o modo" << endl;
cin >> modo >> endl:  

Switch(abrir)
{
  case A:

  codigo % 2 == 0;
  chave % 3 == 0;
  break;
  
  case B:

  codigo + chave >= 100;
  codigo != chave;
  break;
    
  case C:

  codigo % chave == 0;
  break;

  default:
  cout << "Tenta outra vez" << endl;
} 

return 0;
  
}
