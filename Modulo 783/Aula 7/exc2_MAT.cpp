/*
Faça um algoritmo que construa uma matriz de nome MAT de 10 linhas e 15 colunas contendo números inteiros. Em seguida escreva a soma dos elementos de cada linha e se a soma dos elementos é par ou impar. Por fim escreva a soma dos elementos de cada coluna e se a soma dos elementos é par ou impar.
*/
#include <iostream>	
		
using namespace std;
#define LIN 2//10
#define COL 3//15

int main()								
{
    int matriz [LIN][COL];
    int somaL,somaC;

    for (int i=0;i<LIN;i++)
    {
        for (int j=0;j<COL;j++)
        {
            printf ("Input elemento %d %d --> ", i , j);
            scanf ("%d", &matriz[i][j]);
        }
    }

////////////////////////////////////////////////////////////////

    for (int i=0;i<LIN;i++)
    {
        for (int j=0;j<COL;j++)
        {
            printf (" [%d] ", matriz[i][j]);
            somaL += matriz [i][j]; 
        }
        printf (" --> A soma da LINHA vai ser %d", somaL); 
        if (somaL % 2 == 0)
        {
            printf (" e É PAR!\n");
        }
        else
        {
            printf (" e É IMPAR!\n");
        }
        somaL=0;
    }
/////////////////////MATRIZ TRANSPOSTA COLUNAS PASSAM A LINHAS E LINHAS A COLUNAS ////////////////////////

    for (int i=0;i<COL;i++)     //invertido tbm aqui
    {
        for (int j=0;j<LIN;j++)
        {
            somaC += matriz [j][i];     //para somar coluna inverter os indices // matriz transposta
        }
        printf (" --> A soma da COLUNA %d vai ser %d",i, somaC); 
        if (somaC % 2 == 0)
        {
            printf (" e É PAR!\n");
        }
        else
        {
            printf (" e É IMPAR!\n");
        }
        somaC=0;
    }

    system("pause");				
	return 0;	
}