/*2.	Faça um algoritmo que some o conteúdo de dois vetores e armazene o resultado num terceiro vetor.
algoritmo "soma_vetores"
var
i:inteiro
vetorA:vetor[0..2] de inteiro
vetorB:vetor[0..2] de inteiro
vetorC:vetor[0..2] de inteiro
inicio
para i de 0 ate 2 faca
          escreva("Vetor A ::Elemento ",i,"->")
          leia(vetorA[i])
     fimpara
para i de 0 ate 2 faca
          escreva("Vetor B ::Elemento ",i,"->")
          leia(vetorB[i])
     fimpara
para i de 0 ate 2 faca
          vetorC[i]<-vetorB[i]+vetorA[i]
     fimpara
para i de 0 ate 2 faca
          escreva(vetorC[i])
     fimpara
fimalgoritmo
*/
#include <iostream>
using namespace std;

int main()
{
    int tamanho;
    cout << "Qual o tamanho do vetor? --> ";
    cin >> tamanho;
    int vetorA[tamanho];
    int vetorB[tamanho];
    int vetorC[tamanho];

    for (int i=0;i<tamanho;i++)
    {
        printf ("Insira valor %d A--> " , i+1);
        scanf ("%d", &vetorA[i]);
    }
    
    for (int i=0;i<tamanho;i++)
    {
        printf ("Insira valor %d B--> " , i+1);
        scanf ("%d", &vetorB[i]);
    }

    for (int i=0; i<tamanho ;i++)
    {
        cout << "VETOR A:: " << vetorA[i] << endl;
    }
    for (int i=0; i<tamanho ;i++)
    {
        cout << "VETOR B:: " << vetorB[i] << endl;
    }

    for (int i=0; i<tamanho ;i++)
    {
        vetorC[i]=vetorA[i]+vetorB[i];
    }
      for (int i=0; i<tamanho ;i++)
    {
        cout << "VETOR C (Soma):: " << vetorC[i] << endl;
    }

    system("pause");
    return 0;
}
