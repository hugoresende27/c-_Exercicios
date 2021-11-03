#include <iostream>					
using namespace std;
#define MAX 4

int main()								
{
    int vetor[MAX],soma=0;
    printf("Introduza o primeiro valor::");
    scanf("%d",&vetor[0]);
    printf("Introduza o segundo valor::");
    scanf("%d",&vetor[1]);
    printf("Introduza o terceiro valor::");
    scanf("%d",&vetor[2]);
    printf("Introduza o quarto valor::");
    scanf("%d",&vetor[3]);
    soma=vetor[0]+vetor[1]+vetor[2]+vetor[3];
    printf ("A soma vai ser %d\n", soma);
    system("pause");				
	return 0;	
}