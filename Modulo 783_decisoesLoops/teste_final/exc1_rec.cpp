/*
Escreva um programa C para aceitar dois inteiros e verifique se eles são iguais ou não.
*/
#include <iostream>	
		
using namespace std;

int main()								
{
    int num1,num2;
    do {
        cout << "99 para sair!\n";
        cout << "\tNum 1-->";
        cin>> num1;
        if (num1== 99) break;
        cout << "\tNum 2-->";
        cin>> num2;
        if (num2== 99) break;
        if (num1 == num2) cout<<"IGUAIS\n";
        else cout << "DIFERENTES\n";
    } while (true);

    system("pause");				
	return 0;	
}