#include <iostream>
#include <stdlib.h>
using namespace std;

#define MAX 5

int main()
{
	int num[MAX];
    int soma=0,j=0;
	for (int i = 0; i < MAX; i++)
	{	
		printf("Insira o elemento: ");
		scanf("%d",&num[i]);
        soma+=num[i];
	}

	for (int i = 0; i < MAX; i++)
	{	
		printf("%d -> %d\n",i, num[i]);
	}
    printf ("SOMA :: %d", soma);
    j=0;
    
    while (j<MAX)
    {
        printf("%d -> %d\n",j, num[j]);
        j++;
    }
}
