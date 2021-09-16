#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int lojas[5];			//array das 5 lojas
	int venda=0;
	
	cout<<"PROGRAMA LOJAS\n";
	for (int i=0;i<5;i++)			//loop para percorrer 5 lojas 
	{
		cout<<"Quanto vendeu a loja "<<i+1<<" :: ";
		cin>>venda;
		lojas[i]=venda/100;			//array na posicao [i] recebe o valor de venda/100, cada 100 = 1 #	
	}
	
	for (int c=0;c<5;c++)		//loop para percorrer 5 lojas, desta vez mostrando # para cada 100 de venda
	{
		cout<<"Loja | "<<c+1<<" |";
		for (int f=0;f<lojas[c];f++)		//loop para print do #, enquanto f<valor na var lojas[1], lojas[2],...
		{	
			cout<<"#";						//print de 1 # para cada "valor" dentro de cada loja
		}
		cout<<endl;
	}


	system("pause");
	return 0;
}


