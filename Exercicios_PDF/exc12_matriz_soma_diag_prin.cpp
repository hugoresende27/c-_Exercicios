/*
Faça um programa que:
a) Leia uma número N inteiro entre 3 e 10.
b) Leia uma matriz de números reais de tamanho N x N. Obs.: Caso exista algum número
menor que zero nesta matriz, atribua a este termo o valor zero automaticamente.
c) Calcule e imprima a soma da diagonal principal da matriz lida, e a mesma no formato
matricial.
*/
#include <iostream>	
		
using namespace std;

int n;

// int diagonalPrincipal (int m[][])
// {
//     int soma=0;
//     for(int i=0;i<n;i++)
//     {
//         for (int j=0;j<n;j++)
//         {
//             if (i==j)
//             {
//                 soma+=m[i][j];
//             }
//         }
//     }
//     return soma;
// }


int main()								
{
    int aux;
    do
    {
        printf ("Qual o valor de n? (3-10) --> ");
        scanf ("%d", &n);
    }while (n<3 || n>10);

    int matriz [n][n];
    for (int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            printf ("[%d] [%d] --> ",i,j);
            scanf("%d",&aux);
            if (aux>0)
            {
                matriz[i][j]=aux;
            }
            else
            {
                matriz[i][j]=0;
            }
        }
cout<<"*****************************************\n";
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf ("[%d]",matriz[i][j]);
        }
        printf ("\n");
    }

    int soma=0;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j)
            {
                soma+=matriz[i][j];
            }
        }     
    }      
    printf ("Soma matriz principal :: %d \n", soma);



    system("pause");				
	return 0;	
}