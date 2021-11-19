/*
Receba um ano a partir do teclado e verifique se o mesmo é bissexto.
Condições para um ano bissexto:
Divisível por 400 ou
Divisível por 4 e não divisível por 100
Imprima se é ou não bissexto.
*/
#include <iostream>					
using namespace std;


int main()								
{
    int ano;
    cout << "Qual o ano? -->";
    cin >> ano;
    if ( ( ano % 400 == 0) || ( (ano % 4 == 0) && (ano % 100 !=0) ) )
        cout << "BISSEXTO\n";
    else
        cout << "NÃO BISSEXTO\n";

    system("pause");				
	return 0;	
}