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
    int num1,num2;
    int m;
    
    printf ("\n\tNUM1--> ");
    scanf ("%d",&num1);
    printf ("\n\tNUM2--> ");
    scanf ("%d",&num2);
    printf ("\n:::%d:::\n",maximo(num1,num2));
    m = maximo(num1,num2);
    printf ("O maior é o %d",m);

    
    
    system("pause");				
	return 0;	
}