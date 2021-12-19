/*
Crie uma função recursiva que receba um número inteiro positivo N e calcule o
somatório dos números de 1 a N.
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

int fun1(int a){
    if (a == 1){
        return 1;
    }else {
        return a+fun1(a-1);
    }
}

int soma(int k){
    if (k >0 ){
        return k + soma(k-1);
    }else {
        return k;
    }
}

int main()								
{
    int num;
    cout << "NUM:: ";
    cin >> num;
    cout <<fun1(num)<<endl;
    cout <<soma(num);
    cout << endl;
    system("pause");				
	return 0;	
}