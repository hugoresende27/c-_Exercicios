#include <iostream>	
#include <string>				
using namespace std;
//mechanism called “operator overloading”
//4.4.1.8
int main()
{
    string alfa;
    cout << "Insira texto para converter em Maiusculas:: ";
    getline (cin, alfa);

    for (int i=0; i<alfa.length();i++)
        alfa[i] = alfa[i] - 'a' + 'A';      //algoritmo q funciona para converter strings em MAIUSCULAS
    cout << alfa << endl;

    system("pause");				
	return 0;	
}

