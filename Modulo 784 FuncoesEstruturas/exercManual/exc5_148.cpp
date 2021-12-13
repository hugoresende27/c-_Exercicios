/*
Faça um programa que receba dois valores inteiros, após receber esses dois
valores, uma função deve calcular e retornar para o programa o resultado da soma
e da subtração dos valores. Obs.: Apenas uma função deve realizar esta operação,
desta forma, faça uso de ponteiros.
*/

#include <iostream>	
		
using namespace std;

void somasub(int a, int b, int *ptSoma, int *ptSub);

int main()								
{
    int a,b;
    int *pt1;
    int *pt2;
    cout << "Val 1--> ";
    cin >>a;
    cout << "Val 2--> ";
    cin >>b;
    
    somasub(a,b,pt1,pt2);

    cout << "SOMA: "<< *pt1;
    cout << "SUB:: "<< *pt2;


    system("pause");				
	return 0;	
}

void somasub(int a, int b, int *ptSoma, int *ptSub){
    *ptSoma = a+b;
    *ptSub= a-b;
}