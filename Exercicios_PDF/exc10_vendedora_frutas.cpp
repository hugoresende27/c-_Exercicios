/*
) Uma vendedora de frutas quer analisar como foi sua venda no dia. Supondo que ela venda
por gramas, faça um programa em C que:
a) Leia um número N correspondente ao número de vendas do dia (10 <= N <= 1.000).
b) Leia um vetor de números reais chamado Peso, correspondente ao peso de uma
das vendas.
Calcule e imprima:
a) O peso médio das vendas.
b) O maior e o menor peso vendidos.
c) Supondo que 1 kg custe R$ 4.35, imprima quando foi arrecadado no dia
*/
#include <iostream>	
		
using namespace std;


int main()								
{
    int vendas_dia=0;
    printf ("Programa PESOS FRUTAS\n");
    do
    {
        printf ("Número de vendas do dia (entre 10 e 1000)--> ");
        scanf ("%d",&vendas_dia);
    }while (vendas_dia<=10 || vendas_dia>=1000);

    printf ("VENDAS DO DIA:: %d \n",vendas_dia);
    float pesos[vendas_dia];
    for (int i=0;i<vendas_dia;i++)
    {
        printf ("Insira o peso da venda %d",i);
        scanf ("%f",&pesos[i]);
    }
    system("pause");				
	return 0;	
}