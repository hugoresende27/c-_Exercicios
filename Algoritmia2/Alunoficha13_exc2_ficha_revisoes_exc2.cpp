/*
Crie um algoritmo que peça o nome e idade a 3 pessoas. Depois deve verificar se existem pessoas com o mesmo nome e em
caso afirmativo indicar quanto são e qual a soma das suas idades. Em caso negativo deverá apresentar os nomes das
pessoas sempre concatenadas com a palavra “Aluno” sempre que o nome tenha mais que 4 letras.

Algoritmo "Revisoes_exc2"
Var
idades:vetor[1..3] de inteiro
nomes:vetor[1..3] de caracter
i,cont,nomes_iguais,soma_ida:inteiro
Inicio
para i de 1 ate 3 faca
     escreval ("Nome ",i,"--> ")
     leia (nomes[i])
     escreval ("Idade ",i,"--> ")
     leia (idades[i])
fimpara
nomes_iguais<-1
soma_ida<-0
cont<-1
enquanto (cont<3) faca
     se (nomes[cont] = nomes[cont+1]) entao
              nomes_iguais <- nomes_iguais+1
              soma_ida <- idades[cont]+idades[cont+1]
              escreval ("Total de nomes repetidos:: ",nomes_iguais," idades somadas",soma_ida)
     senao
          se (compr(nomes[cont])>4) entao
             escreval("Aluno ",nomes[cont],idades[cont])
          fimse
     fimse
     cont<-cont+1
fimenquanto
Fimalgoritmo
*/
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int idade [3];
    string nomes[3];

    int nomes_iguais=0,soma_idades=0;
    int i=0,j=1;

    for (int i=0 ;i<3; i++ )
    {
        cout << "Indice [" << i << "] Qual o nome?-->";
        cin >> (nomes[i]);
        cout << "Indice [" << i << "]  Idade? -->";
        cin >> idade[i];
    }


for (int i=0; i<3;i++)
{
for (int j=2;j>=0;j--)
{

          if (strcmp(nomes[i].c_str(),nomes[j].c_str())==0)  //nomes[contador]==nomes[contador+1])
          {
               nomes_iguais++;
               soma_idades += idade[i] + idade[j] ;
               cout<<"SOMAIDADES"<<soma_idades;
               break;
          }
          else 
          {
               if (nomes[i].length()>4)
                    cout << "Aluno "<<nomes[i]<<idade[i]<<endl;
          } 
}
}

       
          

cout << "Existem "<< nomes_iguais << " nomes iguais" << "\nSoma de idades::  "<<soma_idades<<endl;
 
 
    system ("pause");
    return 0;
}