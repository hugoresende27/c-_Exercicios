/*
Implemente um programa em C que leia o nome, a idade e o endereço de uma
pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela
os dados da estrutura lida.
*/

#include <iostream>	
#include <string.h>
		
using namespace std;

struct exc1 {
    char nome[10];
    int idade;
    char endereco[100];
};

int main()								
{
    exc1 pessoa;

    cout << "Nome:: ";
    scanf ("%s", &pessoa.nome);
    cout << "Idade:: ";
    scanf ("%d", &pessoa.idade);
    cout << "Endereço:: ";
    scanf ("%s", &pessoa.endereco);

    printf ("\tNOME:: %s\n\tIDADE:: %d\n\tENDERECO::%s\n ", pessoa.nome,pessoa.idade,pessoa.endereco); 
    
    system("pause");				
	return 0;	
}