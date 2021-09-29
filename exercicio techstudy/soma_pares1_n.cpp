/*
 program to find sum of even numbers between 1 to n
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
	int num,soma=0;
	cout<<"Programa soma pares ate n\nAte quanto queres a soma dos pares?->";
	cin>>num;	
	for (int i=2;i<num;i+=2)		//ciclo loop de pares, comeca no 2 e avanca de 2 em 2
	{
			soma+=i;				//numeros q sao pares sao adicionados na var soma
	}
	cout<<"Soma dos pares:: "<<soma<<endl;
	
	system("pause");
	return 0;
}


