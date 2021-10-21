/*
 program to find first and last digit of any number
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
	int num,priDig,ultDig;
	
	cout<<"Programa ultimos digitos\nInsira um numero::";
	cin>>num;
	ultDig=num%10;		//para encontrar o ultimo numero, resto da divisao por 10
	priDig=num;
	while (num>=10)
	{
		num=num/10;
	}
	priDig=num;
	cout<<"\tPrimeiro digito::"<<priDig<<"\n\tUltimo digito::"<<ultDig<<endl;
	
	system("pause");
	return 0;
}


