/*
Copiar os dados de um VET1 (5 posições) para as primeiras 5 posições de COPIA e VET2 (5 posições)  para as outras 5 e imprima o vetor resultante (COPIA).
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX 5

int main()
{
	int VET1[MAX],VET2[MAX],COPIA[MAX*2];

    printf("\tVET1 \n");
	for (int i = 0; i < MAX; i++)
	{	
		printf("Insira o elemento:[%d]VET1--> ",i);
		scanf("%d",&VET1[i]);
	}
    printf("\tVET2 \n");
	for (int i = 0; i < MAX; i++)
	{	
		printf("Insira o elemento:[%d]VET2--> ",i);
		scanf("%d",&VET2[i]);
	}

	for (int i = 0; i < 5; i++)
	{	
         COPIA[i]=VET1[i];
         COPIA[i+5]=VET2[i];

    }

    printf("\tCOPIA\n");
	for (int i = 0; i < MAX*2; i++)
	{	
		printf("\t%d --> %d\n", i , COPIA[i]);
	}
    system("pause");				
	return 0;	
}