/*
check whether a triangle can be formed by the given value for the angles.
*/

#include <iostream>
//#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int angA,angB,angC,soma;
	cout<<"PROGRAMA TRIANGULO\n";
	cout<<"Primeiro Angulo-> ";
	cin>>angA;
	cout<<"Segundo Angulo-> ";
	cin>>angB;
	cout<<"Terceiro Angulo-> ";
	cin>>angC;
	soma=angA+angB+angC;
	if (soma==180)
	{
		cout<<"Triangulo\n";
	}
	else
	{
		cout<<"Nao tens uns triangulo\n";
	}

	system("pause");
	return 0;
}


