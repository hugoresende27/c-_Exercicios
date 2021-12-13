#include <iostream>	
#include <string.h>
using namespace std;


int main()								
{
    int valor=12;
    cout << &valor; 
    cout << "CONTEUDO:: "<<valor<<endl;
    cout << "ENDEREÇO:: "<<&valor<<endl;
    int *val = &valor; 
    cout << "CONTEUDO VAL:: "<<val<<endl;
    cout << "CONTEUDO ONDE APONTA VAL, VALOR:: "<<*val<<endl;
    cout << "ENDEREÇO VAL:: "<<&val<<endl;
    cout << val;
    system("pause");				
	return 0;	
}