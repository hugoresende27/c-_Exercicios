/* programa para ler sequencia de inteiros positivos e mostra a soma e multiplicação quando inserido um negativo*/
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main ()
{
	int valor=0,soma=0,mult=1;
	do 
	{	
		cout<<"Insira valor, negativo para terminar...\n";
		cin>>valor;
		if (valor<0)
			break;
		soma+=valor;
		mult*=valor;
		//cout<<"SOMA::"<<soma<<endl<<"MULT::"<<mult<<endl;

	}while (valor>0);
	cout<<"SOMA FINAL::"<<soma<<endl<<"MULT FINAL::"<<mult<<endl;
    

    cout<<"A ENCERRAR...\n";
	system ("pause");
	return 0;
}