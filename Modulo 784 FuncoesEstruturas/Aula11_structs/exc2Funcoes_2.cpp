/*
Faça um programa que verifique quantas vezes um número é divisível por outro.
 A função deve receber dois parâmetros, o dividendo e o divisor. Ao ler o divisor, 
 é importante verificar se ele é menor que o dividendo. No final imprima o resultado.
*/

#include <iostream>	
#include <string.h>
#include <math.h>		
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

    int diviDen,diviSor;
    cout << "DIVIDENDO :: ";
    cin >> diviDen;
    cout << "DIVISOR :: ";
    cin >> diviSor;
    cout << "TOTAL:: "<<divs(diviDen,diviSor)<<endl;
    cout << endl;
    system("pause");				
	return 0;	
}