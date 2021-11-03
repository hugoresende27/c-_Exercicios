/*
Crie um programa que receba 8 elementos inteiros (sem usar vetores) e imprima no final o 
número de elementos pares recebidos e a sua soma (só dos pares). 
*/
#include <iostream>	
		
using namespace std;


int main()								
{
    int num1,num2,num3,num4;
    int soma=0, contador=0;
    
    cout << "Qual o primeiro número ?--> ";
    cin >> num1; 
    if (num1 % 2 == 0)
    {
        soma += num1; 
        contador++;
    }

    cout << "Qual o segundo número ?--> ";
    cin >> num2; 
    if (num2 % 2 == 0)
    {
        soma += num2;
        contador++;
    }

    cout << "Qual o terceiro número ?--> ";
    cin >> num3; 
    if (num3 % 2 == 0)
    {
        soma += num3;
        contador++;
    }

    cout << "Qual o quarto número ?--> ";
    cin >> num4; 
    if (num4 % 2 == 0)
    {
        soma += num4;
        contador++;
    }

    cout << "Existem "<<contador<<" elementos pares e a sua soma vai ser "<<soma<<endl;
    system("pause");				
	return 0;	
}