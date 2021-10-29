/*
Crie um programa que preencha um vetor com 10 números inteiros e solicitando um número do teclado para pesquisar no vetor. Se o mesmo for encontrado, escreva "Encontrado" e a posição do vetor onde encontrou, caso contrário, escreva "Não encontrado".
*/

#include <iostream>	
#define TAM 10		
using namespace std;


int main()								
{
    int vetor[TAM];
    for (int i=0; i<TAM; i++)
    {
        printf ("[%d] --> ");
        scanf("%d",vetor[i]);
    }
    system("pause");				
	return 0;	
}