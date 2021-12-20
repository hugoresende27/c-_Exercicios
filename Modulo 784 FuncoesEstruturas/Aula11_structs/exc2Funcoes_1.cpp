/*
Faça um programa que leia o saldo e a percentagem de reajuste de uma aplicação financeira e imprima o
 novo saldo após o reajuste. O cálculo deve ser feito por uma função.
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

float novoSaldo(float *s, float *t){
    return *s+*s*(*t)/100;
}

int main()								
{
    float saldo, taxa;
    cout << "Qual o saldo? --> ";
    cin >> saldo;
    cout << "Qual a taxa?[0-100%] --> ";
    cin >> taxa;
    cout << "Ajuste:: "<< novoSaldo(&saldo,&taxa)<<" Euros";
    cout << endl;

    system("pause");				
	return 0;	
}