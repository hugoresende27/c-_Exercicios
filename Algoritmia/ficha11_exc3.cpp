/*
3.	Faça um algoritmo para ler uma matriz 2x3 real e depois gerar e imprimir sua transposta (matriz 3x2 equivalente);
algoritmo "matriz2x3 para 3x2"
var
matA:vetor[1..2, 1..3] de inteiro
matB:vetor[1..3, 1..2] de inteiro
i,j : inteiro
inicio
para i de 1 ate 2 faca
     para j de 1 ate 3 faca
          escreva("Insira elemento para a posicao[",i,"][",j,"]:: ")
          leia (matA[i,j])
     fimpara
fimpara
escreval("-----MATRIZ 2 X 3----")
para i de 1 ate 2 faca
     para j de 1 ate 3 faca
          escreva (matA[i,j])
     fimpara
     escreval("")
fimpara
para i de 1 ate 3 faca          //matB dimensões 3 por 2 i de 1 ate 3
     para j de 1 ate 2 faca    // e j de 1 ate 2  valores da matB
          matB[i,j]<- matA[j,i] //lugares em matB[i,j] recebe a [j,i] de matA
     fimpara
fimpara
escreval("-----MATRIZ 3 X 2----")
para j de 1 ate 3 faca           //mostrar a matB
     para i de 1 ate 2 faca
          Escreva (matB[j,i])    //escreve [j,i]
     fimpara
     escreval("")
fimpara
fimalgoritmo
*/
#include <iostream>					
using namespace std;


int main()								
{

    int matrizA [2][3];
    int matrizB [3][2];
    for (int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
            {
                printf ("Insira o elemento [%d][%d]--> ", i,j);
                scanf("%d", &matrizA[i][j]);
            }
    }

    printf ("MATRIZ 2 X 3 ----------\n");
    for (int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }
   
    for (int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            matrizB[i][j] = matrizA[j][i];
        }
    }

    printf ("MATRIZ 3 X 2 ----------\n");
    for (int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }

    system("pause");				
	return 0;	
}