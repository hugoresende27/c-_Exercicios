/*
A sequência de Fibonacci é a sequência de inteiros: 0,1,1,2,3,5,8,13,21,34,....
Implemente uma função recursiva que calcule e imprima todos os elementos
da série Fibonacci de 0 até n. Em que, n deve ser informado pelo usuário do
programa.
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

int fibonnaci(int n){
    if (n == 1 || n == 2){
        return 1;
    }
    else {
        return fibonnaci(n-1) + fibonnaci(n-2);
    }
}

int main()								
{
    int num;
    cout << "Quantos termos da seq de fibonnaci ? ";
    cin >> num;
    for (int i=0; i< num; i++){
        printf ("%d", fibonnaci(i+1));
    }
    
    cout << endl;
    system("pause");				
	return 0;	
}