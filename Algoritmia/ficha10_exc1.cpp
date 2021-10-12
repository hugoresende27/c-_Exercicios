/*
algoritmo "matriz"
var
i:inteiro
vetorA:vetor[0..2] de inteiro
vetorB:vetor[0..2] de inteiro
inicio
para i de 0 ate 2 faca
          escreva("Vetor A ::Elemento ",i,"->")
          leia(vetorA[i])
     fimpara
para i de 0 ate 2 faca
          vetorB[i]<-vetorA[i]
     fimpara
para i de 0 ate 2 faca
          escreva(vetorA[i])
     fimpara
para i de 0 ate 2 faca
          escreva(vetorB[i])
     fimpara
fimalgoritmo
*/

#include <iostream>
using namespace std;

int main()
{
    int tamanho;
    cout << "Qual o tamnho do vetor? --> ";
    cin >> tamanho;
    int vetorA[tamanho];
    int vetorB[tamanho];

    for (int i=0;i<tamanho;i++)
    {
        printf ("Insira valor %d--> " , i+1);
        scanf ("%d", &vetorA[i]);
    }

    for (int i=0; i<tamanho ;i++)
    {
        cout << "VETOR A:: " << vetorA[i] << endl;
    }

    for (int i=0; i<tamanho ;i++)
    {
        vetorB[i]=vetorA[i];
    }
      for (int i=0; i<tamanho ;i++)
    {
        cout << "VETOR B:: " << vetorB[i] << endl;
    }

    system("pause");
    return 0;
}