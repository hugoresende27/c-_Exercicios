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
    int soma;
    int sub;
    cout << "Val 1--> ";
    cin >>a;
    cout << "Val 2--> ";
    cin >>b;
    
    somasub(a,b,&soma,&sub);    //a função soma vai receber como params a,b, endereco de memoria de &soma e &sub

    cout << "\nSOMA: "<< soma;  //print da var soma, vai ter o conteudo do *ptSoma = a+b
    cout << "\nSUB:: "<< sub;

    cout << endl;
    system("pause");				
	return 0;	
}

void somasub(int a, int b, int *ptSoma, int *ptSub){
    *ptSoma = a+b;
    *ptSub= a-b;
}