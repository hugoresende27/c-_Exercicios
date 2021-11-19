#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <locale>
#define MAX 99
/*
strlen() - comprimento da string
strcpy() - copia da string
strcat() - concatenar 2 strings
strcmp() - compara duas strings
*/
using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	char nome[MAX];
	cout<<"Insira nome: ";
	fgets(nome,sizeof(nome),stdin);
	cout<<"\nCOMPRIMENTOS\n";
	printf ("\nstrlen -- tamanho -- %d\n", strlen(nome)-1);		//menos 1 para tirar a posicao /0 
	printf ("\nsizeof -- size -- %d\n", sizeof(nome));		//sizeof vai se 99, tamanho definido em cima
	printf ("\nstrlen (" ")%d", strlen("     Ola o meu nome hugo"));
	
	//////////////////////////////////////////////////////////////
	cout<<"\nSTRCPY STRCAT\n";
	char str1[]="Ola ";
	printf ("\nstrcpy -- copia -- %s\n", strcpy(nome,"Ola "));
	//strcpy(str1, nome);
	//strcpy(str1,""); //limpar a string
	strcat(str1,nome);
	puts (str1);
	//////////////////////////////////////////////////////////////
	cout<<"\nSTRCMP\n";
	char comp1[MAX]="Rita";		//Com A vai dar -1, com Z ja vai dar 1
	char comp2[MAX]="Rita";
	int resultado;
	resultado=(strcmp(comp1,comp2));
	printf ("\n\t%d\n", resultado);
	if (resultado==0)
	{
		printf ("Iguais\n");
	}
	else
	{
		printf("Diferentes\n");
	}
	if (comp1=="Rita")
	{
		cout<<"TESTE";
	}
	char passA[10]="1234";
	char pass[10];
	int resul;
	puts("Insira Pass::");
	fgets(pass,sizeof(passA),stdin);
	resul=strcmp(pass,passA);
	printf("%d", resul);

	system("pause");
	return 0;
}


