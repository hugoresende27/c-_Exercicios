//#include <iostream>
//#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <locale>
#define MAX 10	//define um valor constante

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	//const int MAX = 10;
	char nome [MAX];
	puts("Qual o nome? ");	//imprime uma string
	gets (nome);			//le apenas strings
	puts ("Outra x..");
	fgets(nome,sizeof(nome),stdin);		//fgets ( string, tamanho max string, stdin) limita a entrada
	//fgets(nome,10,stdin);
	puts (nome);
	printf ("%d", sizeof(nome));
	


	system("pause");
	return 0;
}


