#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#include <stdio.h>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	
	char nome[6]={'M','a','n','u','e','l'};//declara se o nome com 6 posicoes
	printf ("\n\t %s",nome);
	printf ("\n\t %c", nome[5]);		//indices vai de 0 a 5 , 6 posicoes 
	printf ("\n\t\t %d",sizeof(nome));
	
	char nomeB[7]="Manuel";		//o c++ adiciona um \0 no fim de cada array de carateres, chamado de fim de string
	printf("\n\t %s",nomeB);
	printf ("\n\t\t %d",sizeof(nomeB));
	
	char nomeC[]="Manuel";
	printf ("\n\t %s",nomeC);
	printf ("\n\t\t %d",sizeof(nomeC));
	
	int num[]={69,0,0,0};
	printf ("\n\t\t %i", num[0]);
	printf ("\n\t\t %d",sizeof(num));
	
	char teste[]=" ";
	printf ("\n\t%d",sizeof(teste));
	
	char teste2[4];
	scanf("\n%s", teste2);
	printf ("\n%s",teste2);
	printf ("\n%c", teste2[7]);	//imprime fora do array, faz um overflow, ultrapassa os limites do array
	printf ("%d", sizeof(teste2));

	cout<<endl;
	system("pause");
	return 0;
}


