// Ficha de Avaliação - EXE 2
#include <stdio.h>

#define max 5

int *maxmin(int *);
int main()
{
  	int  arr[max];
	int i, *p;

  	for(i=0;i<max;i++)
	{
	  	printf("Insira o valor %d: ", i+1);
    	fflush(stdin);
		scanf("%d",&arr[i]);
	}
  	p = maxmin(arr);
  	printf("\nMaximo: %d\n",*p);
	printf("\nMinimo: %d\n",*(p+1));
}

int * maxmin(int * arr1)
{
 	int i;
	int result_mm[2];
	int maior = 0, menor = arr1[0];

	for (i=0;i<max;i++)
	{
		if(arr1[i] > maior)
			maior = arr1[i];
		if(arr1[i] < menor)
			menor = arr1[i];
	}

	result_mm[0] = maior; // Maior na primeira posição
	result_mm[1] = menor; // Menor na segunda posição 
	
	return result_mm; // Retorna a referência para a primeira posição do vetor que contem o MAX e o MIN
}
