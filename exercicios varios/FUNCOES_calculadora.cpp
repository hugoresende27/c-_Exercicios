/*
calculadora com funções
*/

#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <locale>

using namespace std;

int soma (int a, int b)
{
	return a+b;
}

int main ()
{
	float valor1, valor2;

	cout<<"PROGRAMA CALCULADORA COM FUNÇÕES\n";
	printf("Valor 1:: ");
	scanf("%d",&valor1);
	printf("Valor 2:: ");
	scanf("%d",&valor2);
	printf("Qual a operação??");
	printf("\n\t1.SOMA");
	printf("\n\t2.SUBTRAÇÃO");
	printf("\n\t3.DIVISÃO");
	printf("\n\t4.MULTIPLICAÇÃO");
	printf("\n\t5.POTÊNCIA");
	printf("\n\t6.RAIZ QUADRADA");
	system("pause");
	return 0;
}


