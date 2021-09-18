/*
Write a program that calculates the average of a group of test scores, where the lowest score in the group is dropped. It should use
 the following functions:
- void getScore() should ask the user for a test score, store it in a reference paramater variable, and validate it. 
This function should be called by main once for each of the five scores to be entered.
- void calcAverage() should calculate and display the average of the four highest scores. This function should be called just once by main, 
and should be passed the five scores.
- int findLowest() should find and return the lowest of the five scores passed to it. It should be called by calcAverage() function, 
which uses the function to determine which of the five scores to drop.

NOTE: Do not accept test scores lower than 0 or higher than 100
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#include <iomanip>

using namespace std;

int lerNota (int,int, int &total);		//&total variavel de referencia, o seu valor vai sendo atualizado
float calcMedia(int,int);
int lerPior(int MediasArray[5]);

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int MediasArray[5];					//declaracao array de 5 posicoes
	int nota=0;
	float media=0;
	int pior=0;
	int total=0;
	
	cout<<"PROGRAMA MEDIA 4 MELHORES DE 5\n";
	
	for (int i=1; i<=5; i++)			//loop para ler a nota dos exames 1 a 5, usando a funcao lerNota
	{
		nota= lerNota(nota,i,total)	;
		MediasArray[i-1] = nota;				//tamanho do array i-1 porque i comeca no 1 e nao no 0 recebe valor nota
		
	}
	
	pior=lerPior(MediasArray);
	cout<<"Pior nota:: "<<pior<<endl;
	media=calcMedia(total,pior);
	cout<<"Media:: "<<media;
	cout<<"\nFIM##############################";
	

	system("pause");
	return 0;
}

int lerNota (int nota,int i, int &total)			//funcao lerNota
{	
	cout<<"Introduza a nota para exame "<<i<<"--> ";
	cin>>nota;
	while (nota<0 || nota>100)
	{
		cout<<"(entre 0 e 100) exame "<<i<<"--> ";
		cin>>nota;
	}	
	total+=nota;									//variavel de referencia total vai recebendo e somando o valor da var nota
	return nota;
}

int lerPior (int MediasArray[5])					//funcao ler a menor nota, recebe como parametro array
{
	int pior=MediasArray[0];					//var pior tem valor de array na posicao [0]
	for (int i=1;i<5;i++)						//loop para percorrer o array, so 4 iteracoes porque a posicao [0] tem o valor pior
	{
		if (MediasArray[i]<pior)				//se noutra posicao do array o valor for menor do que pior
			pior=MediasArray[i];				//pior recebe esse valor
	}
	return pior;
}

float calcMedia(int t,int p)
{
	float media=0;
	int soma4=0;
	soma4=t-p;
	media = soma4 / 4.0;
	return media;
}


