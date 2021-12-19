/*
 Faça um programa em C que calcule, por meio de uma função recursiva, a * b
usando a adição, em que a e b são inteiros não-negativos
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

int fun1(int a,int b){
    if (b>0){
        return a + fun1(a,b-1);
    } else {
        return 0;
    }
}

int main()								
{
    int a,b;
    cout << "Valor A: ";
    cin >> a;
    cout << "Valor B: ";
    cin >> b;
    cout << fun1(a,b);
    cout << endl;
    system("pause");				
	return 0;	
}