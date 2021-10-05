/* programa para calcular a expressão N^M, N é int de introduzido pelo utilizador*/
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main ()
{

    int resultado{1};
    int n{};

    cout<<"Insira um número :: ";
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        resultado*=n;
    }
    cout<<resultado<<endl;

    cout<<"A ENCERRAR...\n";
	system ("pause");
	return 0;
}