/*
4.Crie uma função que verifique se um ano é bissexto;
*/

#include <iostream>					
using namespace std;

bool bissexto(int a)
{
    if ( ( a % 400 == 0) || ( (a % 4 == 0) && (a % 100 !=0) ) )
        return true;
    else
        return false;
}


int main()								
{
    int ano;
    cout << "Qual o ano? -->";
    cin >> ano;
    if (!(bissexto(ano))) cout << ano << " não é bissexto\n";
    else cout << ano <<" bissexto\n";
 

    system("pause");				
	return 0;	
}