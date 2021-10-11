#include <iostream>					
using namespace std;


int main()								
{
    int idade;
    cout << "Qual a sua idade? --> ";
    cin >> idade;
    if (idade>=18)
        cout << "Adulto\n";
    else
        cout << "Menor de Idade\n";
    system("pause");				
	return 0;	
}