/*
Faça um programa que verifique quantas vezes um número é divisível por outro.
A função deve receber dois parâmetros, o dividendo e o divisor. Ao ler o divisor, é
importante verificar se ele é menor que o dividendo. Ao final imprima o resultado.
*/

#include <iostream>	
		
using namespace std;

int divs(int x, int y){
    int res=0;
    while (x>=y)
    {
        x = x / y;
        res++;
    }
    return res;
}

int main()								
{
    int num1,num2;

    cout << "DIVIDENDO :: ";
    cin >> num1;
    cout << "DIVISOR :: ";
    cin >> num2;
    cout << "TOTAL:: "<<divs(num1,num2)<<endl;
    system("pause");				
	return 0;	
}