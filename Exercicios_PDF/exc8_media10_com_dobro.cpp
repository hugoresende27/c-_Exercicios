/*
Faça um programa em C para ler um vetor de 10 números inteiros, calcule e imprima a
média aritmética de seus elementos., em seguida atualize seu valor com o dobro do valor
anterior, e imprima o vetor atualizado.
*/
#include <iostream>	
		
using namespace std;


int main()								
{
    int vet [10],soma=0;
    float media;
    for (int i=0;i<10;i++)
    {
        printf ("[%d] ELEMENTO --> ",i+1);
        scanf ("%d",&vet[i]);
        soma+=vet[i];
    }

    for (int i=0;i<10;i++)
    {
        vet[i]=vet[i]*2;
        printf ("\n[%d] ELEMENTO --> %d",i+1,vet[i]);
    }

    media = soma /10;
    printf ("\nMEDIA :: %.2f",media);
    system("pause");				
	return 0;	
}