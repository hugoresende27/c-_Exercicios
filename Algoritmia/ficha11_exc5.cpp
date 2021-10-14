/*
5.	Ler uma matriz 4x3 real e imprimir a soma dos elementos de uma linha L fornecida  pelo utilizador;
algoritmo "Soma da linha da matriz"
var
mat:vetor[1..4, 1..3] de real
i,j,linha: inteiro
soma:real
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
escreval("Qual a linha que quer somar? --> ")
leia (linha)

para j de 1 ate 3 faca
    soma <- soma + mat[linha,j]
fimpara
escreval("A soma da linha ",linha," = ", soma)
fimalgoritmo
*/
#include <iostream>					
using namespace std;


int main()								
{

    float matrizA [4][3];
    float soma=0;
    int linha;
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
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }
   
  cout << "Linha--> ";
  cin >> linha;
  linha--;
  for (int i=0; i<3;i++ )
  {
      soma+=matrizA[linha][i];
  }
    cout << "A soma da linha " <<++linha<<" = "<<soma<<endl;

    system("pause");				
	return 0;	
}