/*
 Receba do teclado um nome até 10 caracteres em minúsculas e imprima-o por ordem
inversa, integralmente em maiúsculas;
*/
#include <iostream>	
		
using namespace std;

int main()								
{
    char nome[10];
    cout << "******* EXERCICIO 1 *******\n";
    cout << "Qual o nome? -->";
    scanf ("%s",nome);
    for (int i=10; i>=0;i--)
    {
        nome[i]=toupper(nome[i]);
        cout << (nome[i]);
    }
    cout<<"\nEncerrando...\n";
    system("pause");				
	return 0;	
}