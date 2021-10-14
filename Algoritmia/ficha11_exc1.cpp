/*
1.	Faça um algoritmo para ler uma matriz de 3x4 de números reais e depois mostrar o elemento do canto superior esquerdo e do canto inferior direito
algoritmo "matriz3x4"
var
mat:vetor[1..3, 1..4] de inteiro
i,j : inteiro
inicio
para i de 1 ate 3 faca
     para j de 1 ate 4 faca
          escreva("Insira elemento para a posicao[",i,"][",j,"]:: ")
          leia (mat[i,j])
     fimpara
fimpara
escreva ("Canto superior esquerdo:: ", mat[1,1])
escreva("")
escreva ("Canto inferior direito:: ", mat[3,4])
fimalgoritmo
*/

#include <iostream>					
using namespace std;


int main()								
{
    int matriz [3][4];
    for (int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
            {
                printf ("Insira o elemento [%d][%d]--> ", i,j);
                scanf("%d", &matriz[i][j]);
            }
    }

    printf ("MATRIZ 3 X 4 ----------\n");
    for (int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Canto superior esquerdo:: " << matriz[0][0] <<endl;
    cout << "Canto inferior direito:: " << matriz[2][3] <<endl;


    system("pause");				
	return 0;	
}