/*
 program to find factorial of any number
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
	int num,i,num2;
	long long fat,fat2;	
	cout<<"Programa fatorial\nInsira um numero-> ";
	cin>>num;
	cout<<"CICLO WHILE\n";	
	fat=1;
	i=1;
	while (i<=num)		//enquanto i menor ou igual ao numero inserido
	{
		fat = fat*i;	//fatorial vai ser fatorial vezes 1, 2, 3, 4, ...
		i++;			//incremento do i
	}
	cout<<"O fatorial de !"<<num<<" ::: "<<fat<<endl;	
	
	cout<<"Programa fatorial\nInsira um numero-> ";
	cin>>num2;
	cout<<"CICLO FOR\n";
	fat2=1;
	for (int j=1;j<=num2;j++)
	{
		fat2=fat2*j;
	}
	cout<<"O fatorial de !"<<num2<<" ::: "<<fat2<<endl;	
	system("pause");
	return 0;
}


