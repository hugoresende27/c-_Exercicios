/*
Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os
dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais
velho.
*/
#include <iostream>	
#include <string.h>
#define MAX 1
using namespace std;

struct atleta {
    char nome[10];
    int idade;
    float altura;
    char desporto[100];
};

void imprime(atleta x ){
    cout << "\n-------------------------------------";
    printf ("\n%s", x.nome);
    printf("\t%s", x.desporto);
    printf ("\t%d", x.idade);
    printf ("\t%.2f", x.altura);
}

int main()								
{
    atleta tab[5];
    int indiceMaisVelho, indiceMaisAlto;
    float maisAlto=0;
    int maisVelho=0;
    //atleta mais_velho;
    //atleta maior_altura;
    
    //////////////////////////////////////INPUT
    for (int i=0; i<MAX; i++){
        cout << "Nome:: ";
        scanf ("%s", &tab[i].nome);
        fflush(stdin);
        cout << "Desporto:: ";
        scanf ("%s", &tab[i].desporto);
        cout << "Idade:: ";
        scanf ("%d", &tab[i].idade);
        cout << "Altura:: ";
        scanf ("%f", &tab[i].altura);


        if(tab[i].idade>maisVelho){
            indiceMaisVelho = i;    //ao guardar o indice do mais velho na var indiceMaisVelho, posso imprimir
            maisAlto=tab[i].idade;  //usando o array tab de atletas no indice respetivo
        }
        
        if(tab[i].altura>maisAlto){
            indiceMaisAlto = i;
            maisAlto = tab[i].altura;  
        }
    } 
    ////////////////////////////////////OUTPUT
    for (int i=0; i<MAX; i++){
        imprime(tab[i]); 
    } 

    printf ("\n---------- O atleta mais velho -----");
    imprime(tab[indiceMaisVelho]);
    printf ("\n---------- O atleta mais alto -----");
    imprime(tab[indiceMaisAlto]);
    cout << indiceMaisAlto<<indiceMaisVelho;
 

  
    cout << endl;
    system("pause");				
	return 0;	
}