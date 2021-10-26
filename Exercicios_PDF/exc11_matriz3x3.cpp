/*
Faça um programa que:
a) Leia uma matriz 3x3 de números inteiros.
b) Imprima-a em formato matricial.
c) Leia um número inteiro k.
d) Atualize a matriz com seu valor multiplicado por k, e imprima-a no formato matricial.
*/
#include <iostream>	
		
using namespace std;


int main()								
{
    int matrix [3][3],valor;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf ("[%d] [%d] --> ",i,j);
            scanf ("%d",&matrix[i][j]);
        }
    }
cout<<"*****************************************\n";
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf ("[%d]",matrix[i][j]);
        }
        printf ("\n");
    }
    printf ("Valor--> ");
    scanf ("%d",&valor);
cout<<"*****************************************\n";
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf ("[%d]",matrix[i][j]*valor);
        }
        printf ("\n");
    }
    system("pause");				
	return 0;	
}