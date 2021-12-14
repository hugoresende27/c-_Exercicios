//Faça um programa que calcule e imprima o fatorial de um número, usando uma
//função que receba um valor e retorne o fatorial desse valor.
//5 = 5 x 4 x 3 x 2 x 1 = 120
#include <iostream>	
		
using namespace std;


int fat(int n){
    int fat = 1;        //fatorial = 1
    int i = 1;          // i = 1
    while (i<=n){       //equanto i menor ou igual a n
        fat *= i;           //fatorial = fatorial X i
        i++;            //incremento i
        cout << ": "<<fat;
    }
    return fat;
}

int fat2(int n){
    int fat = 1;
    for (int i=1; i<=n; i++){
        fat *= i;
    }
    return fat;
}

int main()								
{
    int nr;
    cout << "Qual o nr? --> ";
    cin >> nr;
    cout << "FATORIAL :: "<<fat(nr)<<endl;
    cout << "FATORIAL :: "<<fat2(nr)<<endl;
    system("pause");				
	return 0;	
}