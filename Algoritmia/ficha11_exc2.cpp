/*
2.	Ler uma matriz 5x5 e gerar outra em que cada elemento é o cubo do elemento respectivo na matriz original. Imprima depois o elemento do meio desta nova matriz;
algoritmo "matriz5x5"
var
mat:vetor[1..5, 1..5] de real
matcubo:vetor[1..5, 1..5] de real
i,j : inteiro
inicio
para i de 1 ate 5 faca
     para j de 1 ate 5 faca
          escreva("Insira elemento para a posicao[",i,"][",j,"]:: ")
          leia (mat[i,j])
     fimpara
fimpara
para i de 1 ate 5 faca
     para j de 1 ate 5 faca
          matcubo[i,j]<- (mat[i,j]^3) //exp(mat[i,j],3)
     fimpara
fimpara
para i de 1 ate 5 faca
     para j de 1 ate 5 faca
          Escreva (matcubo[i,j])
     fimpara
     escreval("")
fimpara
fimalgoritmo
*/
#include <iostream>		
#include <math.h>			
using namespace std;


int main()								
{

 int matriz [5][5];
    for (int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
            {
                printf ("Insira o elemento [%d][%d]--> ", i,j);
                scanf("%d", &matriz[i][j]);
            }
    }

    printf ("MATRIZ 5 X 5 ----------\n");
    for (int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    printf ("MATRIZ 5 X 5 ----ao cubo **3------\n");
    for (int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout << pow(matriz[i][j],3) << " ";
        }
        cout << endl;
    }
    system("pause");				
	return 0;	
}