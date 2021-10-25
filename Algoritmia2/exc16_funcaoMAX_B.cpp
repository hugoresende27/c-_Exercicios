/*
Escreva um programa composto de uma função MAX e o programa principal como segue:
a) A função MAX recebe como parâmetros de entrada dois números inteiros e retorna o maior. Se forem iguais retorna
qualquer um deles;
b) O programa principal lê 4 séries de 4 números a,b,c e d. Para cada série lida imprime o maior dos quatro números
usando a função MAX.
*/
#include <iostream>	
		
using namespace std;

int maximo(int a, int b)
{
    int maior=a=b;
    if (a>b)
        maior=a;
    else 
        if (a<b)
            maior=b;
        else
            maior = a = b;
    return maior;
}

int main()								
{
    int numeros[4];
    for (int i=0;i<4;i++)
    {
        printf ("\n\tNUM %d--> ");
        scanf ("%d",&numeros[i]);
    }
    printf("maximo entre 0 e 1 :: %d",maximo(numeros[0],numeros[1]));
    printf("maximo entre 2 e 3 :: %d",maximo(numeros[2],numeros[3]));
  
 
    system("pause");				
	return 0;	
}