/*
Write a C++ program to find the max of an integral data set. The program will ask the user to input the number of data values in the set and each value. The program prints on screen a pointer that points to the max value.
*/
#include <iostream>	
		
using namespace std;


int main()								
{
    int tam,max=0;
    printf ("Dimensão do vetor?--> ");
    scanf ("%d",&tam);

    int vet[tam];
    for (int i=0; i<tam; i++)
    {
        printf ("[%d] ELE :: ", i+1);
        scanf("%d",&vet[i]);
    }

    for (int i=0; i<tam; i++)
    {
        printf ("%d |",vet[i]);
        if (vet[i]>max)
        {
            max=vet[i];
        }
    }
    printf ("\nO ELEMENTO máximo do vetor vai ser o %d\n", max);
    int *pointer = &max;
    printf ("O ELEMENTO máximo do vetor vai ser o %d\n", *pointer);
    system("pause");				
	return 0;	
}