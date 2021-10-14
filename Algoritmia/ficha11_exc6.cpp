/*
6.	Ler uma matriz 4x3 real. Depois, mostre qual é o elemento armazenado numa linha e coluna C fornecidos pelo utilizador;
algoritmo "Mostra elemento linha e coluna"
var
mat:vetor[1..4, 1..3] de real
i,j: inteiro
inicio
para i de 1 ate 4 faca
     para j de 1 ate 3 faca
          escreva("Insira elemento para a posicao[",i,"][",j,"]:: ")
          leia (mat[i,j])
     fimpara
fimpara
escreval("-----MATRIZ 4 X 3----")
para i de 1 ate 4 faca
     para j de 1 ate 3 faca
          escreva (mat[i,j])
     fimpara
     escreval("")
fimpara
escreval("Qual a linha do elemento? --> ")
leia (i)
escreval("Qual a coluna do elemento? --> ")
leia (j)
escreval("ELEMENTO :: ", mat[i,j])
fimalgoritmo
*/
#include <iostream>					
using namespace std;


int main()								
{

    float matrizA [4][3];
    int linha,coluna;
    for (int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
            {
                printf ("Insira o elemento [%d][%d]--> ", i,j);
                scanf("%f", &matrizA[i][j]);
            }
    }

    printf ("MATRIZ 4 X 3 ----------\n");
    for (int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << matrizA[i][j] << "    ";
        }
        cout << endl;
    }
   
  cout << "Linha--> ";
  cin >> linha;
  cout << "Coluna--> ";
  cin >> coluna;
 
    cout << "Elemento [" <<linha<<"]["<<coluna<<"] :::: "<<matrizA[linha-1][coluna-1] << endl;
    
    system("pause");				
	return 0;	
}