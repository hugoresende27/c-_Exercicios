/* programa para ler inteiros positivos e mostra os seus divisores*/
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main ()
{
	int n;
	
    cout<<"Insira valor para saber os seus divisores inteiros --> ";
    cin>>n;

    for (int i=1; i<=n/2 ;i++)
    {
        if (n%i==0)
            cout<<i<<endl;
    }
    cout<<n<<endl;

    cout<<"A ENCERRAR...\n";
	system ("pause");
	return 0;
}