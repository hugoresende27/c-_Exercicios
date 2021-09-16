#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int tamanho=0;
	cout<<"PROGRAMA QUADRADOS\n";
	
	while (tamanho<=0 || tamanho>50)
	{
		cout<<"Tamanho (1 a 50)--> ";
		cin>>tamanho;	
	}

	
	for (int linhas=0;linhas<tamanho;linhas++)		//loop de linhas
	{
		for(int c=0;c<tamanho;c++)					//loop colunas, dentro do loop linhas, em ambos o limite <tamanho
		{	
			cout<<"X";								//print de X * tamanho
		}
		cout<<"\n";									//no fim de cada coluna, quebra a linha, comeca nova iteracao
	
	}
	cout<<"\nFINAL\n";
	system("pause");
	return 0;
}


