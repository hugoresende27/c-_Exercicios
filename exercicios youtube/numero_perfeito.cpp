/* programa para saber se um número é perfeito (numero perfeito = soma dos seus divisores inteiros) */
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main ()
{
	int n,soma=0;
	
    cout<<"Insira valor para saber se é um número perfeito --> ";
    cin>>n;

    for (int i=1; i<=n/2 ;i++)
    {
        if (n%i==0)
            soma+=i;
    }
    cout<< ((soma==n? "PERFEITO": "NÂO PERFEITO"))<<endl;

    cout<<"A ENCERRAR...\n";
	system ("pause");
	return 0;
}