/*
crie uma função recursiva que retorne a soma dos 100 elementos da sequencia onde o próximo elemento é o dobro do anterior. Exemplo: 1, 2, 4, 8, 16, 32, 64…
*/

#include <iostream>	
		
using namespace std;


void funcRecursiva()
{
    double a;
    double soma;
    for (int i=0;i<100;i++)
    {
        if (i==0)
            a = 1;
        else
            a = 2*(a);
        cout << a << " ** ";
        soma += a;
    }
    cout << "SOMA "<<soma;
}

int main()								
{
    
    funcRecursiva();
    system("pause");				
	return 0;	
}