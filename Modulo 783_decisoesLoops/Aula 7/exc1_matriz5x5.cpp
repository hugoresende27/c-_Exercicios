/*Carregue uma matriz de 5 X 5, com 10 inteiros.*/

#include <iostream>	
		
using namespace std;
#define TAM 5

int main()								
{
    int matriz [TAM][TAM];
    for (int i=0;i<TAM;i++)
    {
        for (int j=0;j<TAM;j++)
        {
            printf ("Input elemento %d %d --> ", i , j);
            scanf ("%d", &matriz[i][j]);
        }
    }

    for (int i=0;i<TAM;i++)
    {
        for (int j=0;j<TAM;j++)
        {
            printf (" [%d] ", matriz[i][j]);
            
        }
        printf ("\n");
    }
    system("pause");				
	return 0;	
}