#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#include <iomanip>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	
	int contador=0;
	
	cout<<"PROGRAMA MANIPULACAO ARRAYS Formula--F(n+1)=3/4*f(n)+4\n";
	cout<<"Qual o valor de N-->";
	cin>>contador;
	
	float meuArray [contador-1];		//definir var array meuArray tamanho = contador-1
	meuArray[0]=3;						//no index 0 de meuArray, valor 3
	
	
	
	for (int i=1; i<=contador; i++)
	{
		meuArray[i]= 0.75 * meuArray[i-1] + 4;		//percorre array com ciclo for, a cada index do array aplica a formula
	}
	
	for (int i=0; i<=contador;i++)
	{
		cout<<"f("<<i<<") ="<<setprecision(2)<<fixed<< meuArray[i]<<endl;	//print do resultado de cada index do array
	}


	system("pause");
	return 0;
}


