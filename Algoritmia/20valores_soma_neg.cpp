/*
4.	Escreva um algoritmo em Visualg que leia 20 valores inteiros e no final exiba:
i.	a soma dos números positivos; 
ii.	a quantidade de valores negativos
algoritmo "Soma e negativos"
var
   Num, Soma,negativos,contador: Inteiro
inicio
   contador<-0
   Soma <- 0
   negativos<-0
   Repita
      Escreva ("Digite o valor ==> ")
      Leia(Num)
      se (Num>=0) entao
         Soma <- Soma + Num
      senao entao
         negativos<-negativos+1
      fimse
      contador<-contador+1
   Ate (contador>20)
   EscrevaL("A soma de todos os valores digitados:: ", Soma)
   EscrevaL("Total de negativos:: ",negativos)
fimalgoritmo
*/
#include <iostream>					
using namespace std;
int main()								
{
int num,soma=0,negativos=0,cont=1;
while (cont<=20)
{
    cout<<"Escreva valor "<<cont<<":: ";
    cin>>num;
    if (num>=0) 
    {
        soma+=num;
    }
    else{
        negativos++;
    }
    cont++;
} 
cout<<"A soma :: "<<soma<<endl<<"Total de negativos:: "<<negativos<<endl;
    system("pause");				
	return 0;	
}