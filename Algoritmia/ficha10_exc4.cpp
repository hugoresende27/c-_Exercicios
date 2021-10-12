/*
4.	Escreva um algoritmo que solicite ao utilizador a entrada de 5 nomes, e que exiba a lista desses nomes no ecrã.
Após exibir essa lista, o programa deve mostrar também os nomes na ordem inversa em que o utilizador os digitou, um por linha.
algoritmo "5nomes"
var
i:inteiro
vetorA:vetor[1..5] de caracter
inicio
para i de 1 ate 5 faca
          escreva("Nome ",i,"->")
          leia(vetorA[i])
     fimpara
para i de 1 ate 5 faca
          escreval(vetorA[i])
     fimpara
Escreval("INVERSO")
para i de 5 ate 1 passo -1 faca
          escreval(vetorA[i])
     fimpara
fimalgoritmo
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    
    string nomes[5];  //para getline (cin,var)
    //char nomes[5];
    /*
    char teste[5];
    gets(teste);
    cout << teste;
    */

    for (int i=0;i<5;i++)
    {
        printf ("Insira nome %d--> " , i+1);
        //fgets(nomes,sizeof(nomes),stdin);
        //gets(nomes[i]); //não funciona com nomes[i], apenas com nomes.
        getline (cin, nomes[i]); //para string nomes[5];
    }

    
    for (int i=0; i<5 ;i++)     //atenção aqui começa a ser armazenado no vetor nomes os nomes da posição 0 a 4
    {
        cout << "Nomes :: " << nomes[i] << endl;
    }

    for (int i=4; i>=0 ;i--)    //para fazer o ciclo invertido, tenho de começar no 4 e até > ou = a 0, i--
    {
        cout << "Nomes Inverso :: " << nomes[i] << endl;
    }
   
    system("pause");
    return 0;
}