#include"iostream"
#include"math.h"
#include"cstdlib"

using namespace std;
char sexo;      string msg;
int main()  
{ setlocale(LC_ALL, "Portuguese");
Repetir: // Ponto de repeti��o
system("cls");
cout << "\nDigite o sexo (F/M):";  cin >> sexo;
if (sexo == 'F') 
{  msg = "Voc� � uma mulher!"; } 
else  
{  msg = "Voc� � um Homem!"; }
 cout << msg << endl << endl; 
 system("pause");  
 goto Repetir; // Busca o ponto de repeti��oo
 return 0; }