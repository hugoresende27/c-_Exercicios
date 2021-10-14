/*
algoritmo "1"
var
i:inteiro
idades:vetor[1..5] de inteiro
p: inteiro

inicio
para i de 1 ate 5 faca
          escreva("Idade ",i,"->")
          leia(idades[i])
     fimpara
escreva ("Qual o indice que quer visualizar?-->")
leia (p)
escreva (idades[p])
fimalgoritmo
*/
#include <iostream>

using namespace std;

int main()
{
    int idade [5];
    string nomes[5];
    int p;
    for (int i=0 ;i<5; i++ )
    {
        cout << "Indice [" << i << "] Qual o nome?-->";
        cin >> (nomes[i]);
        cout << "Indice [" << i << "]  Idade? -->";
        cin >> idade[i];
    }
    cout << "Qual o indice q quer ver? [0-4]--> ";
    cin >> p;
    if (p>4 || p<0)
        cout << "Indice inválido....\n";
    else
    {
        cout << "NOME:: " << nomes[p] <<endl;
        cout << "IDADE:: "<< idade[p] <<endl;

    }
    system ("pause");
    return 0;
}