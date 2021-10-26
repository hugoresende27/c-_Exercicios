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
    float media,soma=0,maior=0,menor=0;

    for (int i=0;i<vendas_dia;i++)
    {
       
        maior=menor=pesos[0];
        printf ("Insira o peso da venda %d --> ",i);
        scanf ("%f",&pesos[i]);
        soma+=pesos[i];
        if (pesos[i]>maior)
        {
            maior = pesos[i];
        }
        if (pesos[i]<menor)
        {
            menor = pesos[i];
        }
    }
    
    for (int i=0;i<vendas_dia;i++)
    {
        printf (":%.2f:\n",pesos[i]);
    }

    media = soma/vendas_dia;
    printf ("A media vai ser %.2f o maior foi %.2f e o menor %.2f\n", media, maior, menor);
    printf ("Total do dia %.2f Euros", soma*4.35);
    system("pause");				
	return 0;	
}