/*
7.	Crie uma matriz 7x8 onde cada elemento é a soma dos índices da sua posição dentro da matriz;
Algoritmo "matriz 7x8 soma"
var
mat:vetor[1..7, 1..8] de inteiro
i,j: inteiro
soma:inteiro
inicio
para i de 1 ate 7 faca
     para j de 1 ate 8 faca
        mat[i,j] <- i+j
     fimpara
fimpara
escreval("-----MATRIZ 7 X 8----")
para i de 1 ate 7 faca
     para j de 1 ate 8 faca
          escreva (mat[i,j]:7)
     fimpara
     escreval("")
fimpara
fimalgoritmo
*/
#include <iostream>					
using namespace std;

int main()								
{
    float matrizA [7][8];
  
    for (int i=0; i<7; i++)
    {
        for(int j=0; j<8; j++)
            {
              matrizA[i][j]=i+j;
            }
    }

    printf ("MATRIZ 7 X 8 ----Soma dos indices------\n");
    for (int i=0; i<7; i++)
    {
        for(int j=0; j<8; j++)
        {
            cout << matrizA[i][j] << "    ";
        }
        cout << endl;
    }
   

    
    system("pause");				
	return 0;	
}