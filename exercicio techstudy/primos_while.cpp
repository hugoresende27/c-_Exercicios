/*
 program to check whether a number is Prime number or not using while loop
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
	int num,inicio,fim;
	
	
	cout<<"Programa numeros primos\nInsira numero::";
	cin>>num;
	fim=0;
	inicio=2;
	while (inicio<=num/2)
	{
		if (num%inicio==0)
		{
			fim=1;
			break;
		}
		inicio++;
	}
	if (fim==0)
	{
		cout<<"O numero "<<num<<" considera se PRIMO\n";
	}
	else
	{
		cout<<"O numero "<<num<<" NAO se considera se PRIMO\n";
	}
	system("pause");
	return 0;
}


