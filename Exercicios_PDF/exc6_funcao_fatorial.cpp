/*
Faça um programa em C que:
a. Crie a função FAT que recebe um número inteiro e retorna o fatorial do número.
b. Lê do teclado um número inteiro N. Se N < 0, exiba uma mensagem de erro e peça
novamente. O programa só prossegue se for digitado N ≥ 0.c. Imprime na tela o fatorial de N e o fatorial de N+4.
OBS. Definição matemática de fatorial: fat(0) = 1 e fat(n) = n * fat(n-1).
Exemplo. fat(5) = 5 * 4 * 3 * 2 * 1
*/
#include <iostream>	
		
using namespace std;


int fatorialz(int n)
{
    int fat=1,i=1;
    if ( n == 0)
    {
        fat = 1;
    }
    else
    {
        while (i<=n)
        {
            fat *= i;
            i++;
        }
    }
    return fat;
}

int main()								
{
    int valor;
    do
    {
        printf ("Qual o valor para calcular o fatorial? ---> ");
        scanf ("%d",&valor);
    } while (valor<0);
    
  

    printf ("O fatorial de !%d é %d \n", valor, fatorialz(valor));
    printf ("O fatorial de !%d + 4 é %d \n", valor, fatorialz(valor+4));
    system("pause");				
	return 0;	
}