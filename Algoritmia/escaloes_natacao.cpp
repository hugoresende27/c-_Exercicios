/*
6.	Elabore um algoritmo que dada a idade de um nadador classifique-o em uma das seguintes categorias:
a.	Infantil A = 5 a 7 anos
b.	Infantil B = 8 a 11 anos
c.	Juvenil A = 12 a 13 anos
d.	Juvenil B = 14 a 17 anos
e.	Adultos = Maiores de 18 anos
contar
Var
idade:inteiro
Inicio
escreva ("Qual a idade?-->")
leia(idade)
se (idade>=18) entao
   escreva("Adulto")
   senao
        se (idade>=14) entao
           escreva ("Juvenil B")
           senao
                se (idade>=12) entao
                   escreva ("Juvenil A")
                   senao
                        se(idade>=8) entao
                        escreva("Infantil B")
                        senao
                             escreva("Infantil A")
                   fimse
         fimse
   fimse
fimse
Fimalgoritmo
*/
#include <iostream>					
using namespace std;
int main()								
{
    int idade;
    cout<<"Qual a idade?";
    cin>>idade;
    if (idade>=18)
        cout<<"ADULTO\n";
    else if (idade>=14)
        cout<<"Juvenil B\n";
    else if (idade>=12)
        cout<<"Juvenil A\n";
    else if (idade>=8)
        cout<<"Infantil B\n";
    else if (idade>=5)
        cout<<"Infantil A\n";
    else
        cout<<"Sem escalão\n";

    system("pause");				
	return 0;	
}