/*
Write a C++ program to swap first and last digits of any number.
Sample Output:
Input any number: 12345
The number after swapping the first and last digits are: 52341
*/
#include <iostream>	
#include <string.h>

using namespace std;

int main()								
{
    string numero,numero2;
    int aux;
    cout << "insira um número:: ";
    cin >> numero;

    aux  = numero[0];
    numero[0]=numero[numero.size()-1];
    numero [numero.size()-1]=aux;

    cout << "Ultimo troca com primeiro-->"<< numero<<endl;

    system("pause");				
	return 0;	
}