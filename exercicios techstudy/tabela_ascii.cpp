/*
 program to print ASCII value of all Uppercase Alphabet
 */

#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	cout<<"Tabela ASCII\n";
	
	char letra;
	
	for (letra= 'A'; letra<='Z';letra++)
	{
		printf ("Letra ::%c --> ASCII ::%d \n", letra,int(letra));
	}
	
	for (letra= 'a'; letra<='z';letra++)
	{
		printf ("Letra ::%c --> ASCII ::%d \n", letra,int(letra));
	}
	system("pause");
	return 0;
}


