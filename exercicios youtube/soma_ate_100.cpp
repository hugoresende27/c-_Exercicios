/* programa para somar valores até o total da soma ser 100*/
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main ()
{
    const int max{100};
    int resultado{};
    int n{};

    do
    {
        cout<<"Insira Número::";
        cin>>n;
        resultado+=n;
        cout<<"Até agora vamos em ..."<<resultado<<endl;
    }while (resultado<=100);

    cout<<"A ENCERRAR...\n";
	system ("pause");
	return 0;
}