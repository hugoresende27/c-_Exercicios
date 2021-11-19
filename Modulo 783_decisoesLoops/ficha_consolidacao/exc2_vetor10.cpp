/*
Crie um programa que preencha um vetor com 10 números inteiros e solicitando um número do teclado para pesquisar no vetor. Se o mesmo for encontrado, escreva "Encontrado" e a posição do vetor onde encontrou, caso contrário, escreva "Não encontrado".
*/

#include <iostream>	
#define TAM 10		
using namespace std;


int main()								
{
    int vetor[TAM];
    int ele;
    bool existe;

    for (int i=0; i<TAM; i++)
    {
        printf ("[%d] --> ",i+1);
        scanf("%d",&vetor[i]);
    }
    printf ("Qual o elemento a procurar?--> ");
    scanf ("%d",&ele);

    for (int i=0; i<TAM; i++)
    {
        if (vetor[i] == ele)
        {
            existe=true;
            break; 
        }
    }
    if (!existe)
    {
        printf ("\tNÂO ENCONTRADO\n");
    }
    else
    {
        printf ("O elemento %d ENCONTRADO\n", ele);
    }
    cout << "**** VETOR ****\n";
    for (int i=0; i<TAM; i++)
    {
        printf ("[%d] ",vetor[i]);
    }  
    system("pause");				
	return 0;	
}