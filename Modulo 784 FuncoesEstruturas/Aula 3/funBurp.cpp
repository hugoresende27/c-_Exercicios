/*
Create a function that returns the string "Burp" with the amount of "r's" determined by the input parameters of the function.
*/
#include <iostream>	
		
using namespace std;


void rFunc(int x)
{
    char r = 'r';
    cout << "Bu";
    for (int i=0; i<x;i++)
    {
        cout<< r;
    }
    cout << "p";
}

string longBurp(int num)
{
    return "Bu" + string(num,'r') + 'p'; //função string, primeiro o size e depois o char a repetir
}

int main()								
{
    int cont;
    cout << "Insira um valor para r--> ";
    cin >> cont;
    rFunc(cont);
    cout << endl;
    cout << longBurp(cont);
    cout << endl;
    cout << "Teste imprimir @ 20 vezes" << string(20,'@');
    system("pause");				
	return 0;	
}