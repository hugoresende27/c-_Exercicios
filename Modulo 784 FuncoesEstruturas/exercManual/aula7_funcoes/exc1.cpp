/*
Faça um programa em C que leia três números e, para cada um, imprimir o dobro.
O cálculo deverá ser realizado por uma função e o resultado impresso ao final do
programa.
*/

#include <iostream>	
		
using namespace std;

void dobros3 (int a, int b, int c){
    cout << a*3<<endl;
    cout << b*3<<endl;
    cout << c*3<<endl;
}

int main()								
{
    int a,b,c;
    cout << "VALOR A:: ";
    cin >> a;
    cout << "VALOR B:: ";
    cin >> b;
    cout << "VALOR C:: ";
    cin >> c;
    dobros3(a,b,c);
    system("pause");				
	return 0;	
}