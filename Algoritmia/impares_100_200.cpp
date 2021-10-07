/*
5.	Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200;
Algoritmo "impares 100 200"
Var
num:inteiro;
Inicio

para num<-100 ate 200 passo 1 faca
     se (num%2 <> 0) entao
        escreva (num)
     fimse
fimpara
Fimalgoritmo
*/

#include <iostream>					
using namespace std;

int main()								
{
    for (int i = 100;i<=200;i++)
    {
        if (i % 2!=0)
        {
            cout<<i<<" | ";
        }
    }
    system("pause");				
	return 0;	
}