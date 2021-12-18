/*
Usando a estrutura "atleta"do exercício anterior, escreva um programa que leia
os dados de cinco atletas e os exiba por ordem de idade, do mais velho para o
mais novo.
*/
#include <iostream>	
#include <string.h>
#include <algorithm>
#define MAX 5
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

    ///////////////////////////////////
//função compare https://www.section.io/engineering-education/getting-started-with-structs-sorting-in-c++/
   //////////////////////////////////////
bool compare( atleta a, atleta b){
	/** to use another attribute for sorting, just replace 'age' with it eg. (a.roll_no < b.roll_no)
	 the return value determines which student will go first in the sorted array **/
	if(a.idade < b.idade)
		return 1;
	else 
		return 0;
}


int main()								
{
    atleta tab[5];
    atleta auxiliar;
    

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


    } 
    ///////////////////////////////////
//função sort https://www.section.io/engineering-education/getting-started-with-structs-sorting-in-c++/
   //////////////////////////////////////
    sort(tab,tab+MAX, compare); 
    ////////////////////////////SOLUÇÃO MANUAL//////////////////////////
    //o segundo loop inicia no index seguinte, vai comparar os dois indexes e se o index seguinte(j)
    //for maior do que o index anterior(i), vai guardar valor numa var auxiliar. O index seguinte(j)
    //vai receber o valor que estava no index anterior(i) e finalmente o index anterior(i) recebe o
    //que estava na var auxiliar. O loop vai ser feito 5 vezes para cada index, logo 25 iterações no
    //total
    for (int i=0; i<MAX; i++){
        for(int j= i+1; j<MAX; j++){  //(j=i+1)index seguinte       //xx:29:30:xx
            if (tab[j].idade>tab[i].idade){                         //30 > 29
                //passar tudo para um var auxiliar
                auxiliar.idade = tab[j].idade;                      //aux = 30
                auxiliar.altura = tab[j].altura;
                strcpy(auxiliar.desporto,tab[j].desporto);
                strcpy(auxiliar.nome,tab[j].nome);

                //trocar as posições, 
                //j passa a ser i
                tab[j].idade = tab[i].idade;                        //29:29:xx
                tab[j].altura = tab[i].altura;                      //aux=30; 
                strcpy(tab[j].desporto,tab[i].desporto);
                strcpy(tab[j].nome,tab[i].nome);
                //i passa a ser auxiliar
                tab[i].idade = auxiliar.idade;              //xx:30:29:xx
                tab[i].altura = auxiliar.altura;            //
                strcpy(tab[i].desporto,auxiliar.desporto);
                strcpy(tab[i].nome,auxiliar.nome);

            }
           
        }
    }
    
    
    
    
    ////////////////////////////////////OUTPUT
    printf ("\n---------- Lista ordenada mais velhor para mais novo-----");
    for (int i=0; i<MAX; i++){
        imprime(tab[i]); 
    } 

 
  
    cout << endl;
    system("pause");				
	return 0;	
}