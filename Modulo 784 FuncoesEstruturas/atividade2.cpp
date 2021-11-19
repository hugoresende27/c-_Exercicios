/*
Crie uma função que receba um número e devolva se o mesmo é par;
*/
#include <iostream>	
		
using namespace std;

int parImpar(int x)
{
    if (x %2 == 0)
    {
        return x;
    }
    // else 
    // {
    //     return 0;
    // }
}

int main()								
{
    int num;
    cout << "Qual o número? --> ";
    cin >> num;
    cout << "PAR ou IMPAR :: "<< parImpar(num)<<endl;
    system("pause");				
	return 0;	
}