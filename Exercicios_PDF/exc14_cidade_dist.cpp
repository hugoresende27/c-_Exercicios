/*
Faça uma tabela que enumere as distâncias entre várias cidades, ou seja, uma matriz
simétrica: os termos em relação à diagonal principal desta matriz são iguais (Mat[i,j] = Mat[j,i]).
Obviamente a digitação de uma matriz com esta propriedade pode ser simplificada, devendo-se
digitar apenas os termos que estão acima da diagonal principal. Pede-se um programa em C
para:
a) Ler um vetor com o nome de 5 cidades.
b) Preencher uma matriz simétrica com a distância entre as cidades.
c) Exibir na tela o conteúdo desta matriz.
*/
#include <iostream>	
#include <stdio.h>
using namespace std;


int main()								
{
    char cidades [5][100];
    float distancias[5][5];
    for (int i=0; i < 5; i++)
    {
        printf ("Qual o nome da cidade? %d--> ",i+1);
        gets(cidades[i]);
    }

    for (int i=0; i<5; i++)
    {
        for (int j=0;j<5;j++)
        {
            if (i==j)           //matriz principal preenchida com 0.00
                distancias[i][j]=0;
            if (j>i)
            {
                printf ("Distancia de ");
                puts(cidades[i]);
                printf (" até ");
                puts(cidades[j]);
                printf ("--> ");
                scanf ("%f", &distancias[i][j]);
                distancias[j][i]=distancias[i][j];
            }
        }
    }
    for (int i=0; i < 5; i++)
    {
        puts(cidades[i]);
        for (int j=0;j<5;j++)
        {
            printf ("%.2f | ", distancias[i][j]);
        }
        printf ("\n");
    }
    system("pause");				
	return 0;	
}