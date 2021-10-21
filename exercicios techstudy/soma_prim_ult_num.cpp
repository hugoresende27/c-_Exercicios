/*
program to sum first and last digit of a number
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
	int num, soma=0, priNum, ultNum;
	
	cout<<"Programa soma primeiro e ultimo numero\nIntroduza um numero qualquer-> ";
	cin>>num;
	ultNum=num%10;
	priNum=num;
	while (num>=10)
	{
		num = num / 10;
	}
	priNum=num;
	cout<<"TESTE"<<num;
	soma=priNum+ultNum;
	cout<<"A soma = "<<soma<<endl;


	system("pause");
	return 0;
}


