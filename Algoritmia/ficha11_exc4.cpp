/*
4.	Faça um algoritmo para ler uma matriz 3x3 real e imprimir a soma dos elementos da Diagonal principal.  Generaliza para uma matriz NxN;
algoritmo "Soma diagonal principal 3x3"
var
mat:vetor[1..3, 1..3] de inteiro
i,j ,soma: inteiro
inicio
para i de 1 ate 3 faca
     para j de 1 ate 3 faca
          escreva("Insira elemento para a posicao[",i,"][",j,"]:: ")
          leia (mat[i,j])
     fimpara
fimpara
escreval("-----MATRIZ 3 X 3----")
para i de 1 ate 3 faca
     para j de 1 ate 3 faca
          escreva (mat[i,j])
     fimpara
     escreval("")
fimpara

para i de 1 ate 3 faca
     para j de 1 ate 3 faca
          se (i=j) entao
             soma<-soma+mat[i,j]
          fimse
     fimpara
fimpara
escreval("A soma da diagonal principal = ", soma)
fimalgoritmo
*/
#include <iostream>					
using namespace std;


int main()								
{
    int soma=0;
    int matriz [3][3];
    for (int i =0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout << "Elemento ["<<i<<"] ["<<j<<"] -->";
            cin >> matriz[i][j];
            if (i==j)
            {
                soma+=matriz[i][j];
            }
        }
    }
    for (int i=0; i<3;i++)
    {
        for (int j=0; j<3; j++)
        {
            cout << matriz[i][j] << "  ";
        }
        cout <<endl;
    }
    cout << "A soma da diagonal principal = " << soma << endl;
    system("pause");				
	return 0;	
}