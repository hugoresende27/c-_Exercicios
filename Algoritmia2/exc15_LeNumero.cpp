/*
Escreva um programa que lê um valor inteiro (maior do que 1 e menor ou igual a 10) e exibe a tabuada (até 10) de
multiplicação do número lido.
Funcao LeNumero(n1, n2:inteiro):inteiro;
Lê um número inteiro no intervalo especificado (n1, n2) e o devolve. Cada vez que for digitado um número inválido (fora do
intervalo especificado) a função deve exibir a mensagem "Número inválido. Digite novamente!"
O Procedimento Tabuada (n :inteiro); Recebe como parâmetro um número inteiro e exibe na tela a tabuada de multiplicação
de 10 do número lido. Exemplo: número lido 5
*/
#include <iostream>	
		
using namespace std;

int LeNumero (int n1, int n2)
{
    return n1*n2;
}

int main()								
{
    int num;
    do
    {
        printf ("Funcao tabuada\nqual o nr? --> ");
        scanf ("%d",&num);
        if (num>1 && num<=10)
        {
            for (int i=1;i<=10;i++)
            {
                printf ("%d X %d = %d\n", i , num , LeNumero(i,num) );
            }
        }
        else
        {
            printf ("NUMERO INVALIDO\n");
        }
    } while (num>10 || num < 1);
    
  
    system("pause");				
	return 0;	
}