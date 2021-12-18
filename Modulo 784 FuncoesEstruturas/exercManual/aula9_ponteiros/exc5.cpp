/*
Faça um programa que receba dois valores inteiros, após receber esses dois
valores, uma função deve calcular e retornar para o programa o resultado da soma
e da subtração dos valores. Obs.: Apenas uma função deve realizar esta operação,
desta forma, faça uso de ponteiros.
*/
#include <iostream>	
		
using namespace std;

void fun(int *soma,int *sub,int x, int y){//função void recebe 2 apontadores e as 2 vars 
    *soma = x+y;//cada apontador é uma operação
    *sub = x-y;
}


int main()								
{
    int a,b;
    int so,su;//uma variavel para cada operacao
    printf ("Qual o valor A -> ");
    scanf("%d",&a);
    printf ("Qual o valor B -> ");
    scanf("%d",&b);
    fun(&so, &su, a,b);//chamar a função, passar as referências das operações e as vars

    cout<<":SOMA: "<< so<<endl;//aqui a var so vai ter o conteudo do apontador *soma da fun
    cout<<":SUB: "<< su<<endl;//su vai ter o conteudo do apontador *sub= x-y
    system("pause");				
	return 0;	
}