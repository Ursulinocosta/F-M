#include"iostream"
#include"math.h"
#include"cstdlib"

using namespace std;
char sexo;      string msg;
int main()  
{ setlocale(LC_ALL, "Portuguese");
Repetir: // Ponto de repetição
system("cls");
cout << "\nDigite o sexo (F/M):";  cin >> sexo;
if (sexo == 'F') 
{  msg = "Você é uma mulher!"; } 
else  
{  msg = "Você é um Homem!"; }
 cout << msg << endl << endl; 
 system("pause");  
 goto Repetir; // Busca o ponto de repetiçãoo
 return 0; }