/*
Algoritmo "revisoes-1"
Var
num : inteiro
Inicio
num<-0
repita
   escreval("Qual o numero? --> ")
   leia (num)
   se (((num+4) % 2 = 0) e (num<>0))  entao
      escreva ("Numero:: ",num+4," PAR")
   senao
        se (num<>0)  entao
           escreva("Numero:: ",num+4," IMPAR")
        fimse
   fimse

ate (num<>0)
Fimalgoritmo
*/
#include <iostream>					
using namespace std;


int main()								
{
    int num=0;
    do
    {
        cout << "Qual o número? --> ";
        scanf("%d",&num);
        if ( (num!=0) && ( (num+4)%2==0) )
        {
            printf ("O número %d é PAR\n", num+4);
        }
        else 
        {
            if (num!=0) 
                printf ("O número %d é ÍMPAR\n", num+4);
        }
    } while (num == 0);
    
    system("pause");				
	return 0;	
}
