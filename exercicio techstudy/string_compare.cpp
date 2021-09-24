#include <iostream>
#include <cstdlib>
#include <string.h>		//atencao strcmp so funciona com string.h
#include <locale>
/*
program to compare two strings using strcmp
*/
using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	char palavra1[100],palavra2[100];
	cout<<"PROGRAMA COMPARA STRINGS\nInsira uma palavra::";
	cin>>palavra1;
	cout<<"Outra palavra::";
	cin>>palavra2;
	if (strcmp(palavra1,palavra2)==0)		//se igual a 0 strings sao iguais
	{
		cout<<"Sao iguais\n";
	}
	else
	{
		cout<<"Sao diferentes\n";
	}

	system("pause");
	return 0;
}


