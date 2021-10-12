/*
5.	Crie um algoritmo que solicite a entrada de 10 números pelo utilizador, armazenando-os num vetor, e então crie outro vetor com os valores do primeiro multiplicados por 5.
Exiba os valores dos dois vetores no ecrã, simultaneamente, em duas colunas (um em cada coluna), uma posição por linha.
algoritmo "5nomes"
var
i:inteiro
vetorA:vetor[1..10] de inteiro
vetorB:vetor[1..10] de inteiro
inicio
para i de 1 ate 10 faca
          escreva("Nome ",i,"->")
          leia(vetorA[i])
     fimpara
para i de 1 ate 10 faca
          vetorB[i]<-vetorA[i]*5
     fimpara
Escreval("--------------")
para i de 1 ate 10  faca
          escreval(vetorA[i]," ----",vetorB[i])
     fimpara
fimalgoritmo
*/
#include <iostream>
using namespace std;

int main()
{
    
    int vetor[10];
    int vetor2[10];
    

    for (int i=0;i<5;i++)
    {
        printf ("Insira valor %d--> " , i+1);
        scanf ("%d", &vetor[i]);
    }

    for (int i=0; i<5 ;i++)
    {
        vetor2[i]=vetor[i]*5;
    }
    for (int i=0; i<5 ;i++)
    {
        printf("| %d",vetor[i]);
    }
    printf("VETOR MULTIPLICADO POR 5\n");
    for (int i=0; i<5 ;i++)
    {
        printf("| %d",vetor2[i]);
    }

    system("pause");
    return 0;
}