/*
7.	Faça um algoritmo que conte de 1 a 100 e a cada múltiplo de 10 emita a mensagem:
Múltiplo de 10”
Algoritmo "1 a 100"
Var
ctr:inteiro
Inicio
para ctr<-1 ate 100 passo 1 faca
     se (ctr%10=0) entao
        escreval ("Multiplo de 10::",ctr)
     fimse
fimpara
Fimalgoritmo
*/
#include <iostream>					
using namespace std;


int main()								
{
    for (int i=1;i<=100;i++)
    {
        if ( i % 10 == 0)
            cout<<"Multiplo de 10:: "<<i<<endl;

    }

    system("pause");				
	return 0;	
}