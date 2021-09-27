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
	for (int i=2;i<num;i+=2)
	{
			soma+=i;
	}
	cout<<"Soma dos pares:: "<<soma<<endl;
	
	system("pause");
	return 0;
}


