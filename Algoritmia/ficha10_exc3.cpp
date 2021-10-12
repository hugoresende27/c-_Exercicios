/*
3.	Escreva um algoritmo que solicite ao utilizador a entrada de 5 números, e que exiba o somatório desses números no ecrã. Após exibir a soma, o programa deve mostrar também os números que o utilizador digitou, um por linha.
algoritmo "soma_5num"
var
i,soma:inteiro
vetorA:vetor[1..5] de inteiro
inicio
soma<-0
para i de 1 ate 5 faca
          escreva("Vetor ::Elemento ",i,"->")
          leia(vetorA[i])
          soma<-soma+vetorA[i]
     fimpara
para i de 1 ate 5 faca
          escreval(vetorA[i])
     fimpara
Escreval("A soma de todos os elementos:: ",soma)
fimalgoritmo
*/

#include <iostream>
using namespace std;

int main()
{
    
    int vetorA[5];
    int soma=0;
    

    for (int i=0;i<5;i++)
    {
        printf ("Insira valor %d--> " , i+1);
        scanf ("%d", &vetorA[i]);
        soma+=vetorA[i];

    }

    for (int i=0; i<5 ;i++)
    {
        cout << "VETOR :: " << vetorA[i] << endl;
    }
    cout << "A soma vai dar :: " << soma << endl;

    system("pause");
    return 0;
}