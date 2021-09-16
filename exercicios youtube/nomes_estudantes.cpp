#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int numEstudantes=0;
	string nomeEstudante,priEstudante,ultEstudante;
	
	cout<<"PROGRAMA ESTUDANTES\n";
	while (numEstudantes<1 || numEstudantes>25)
	{
		cout<<"Quantos estudantes (1-25)?-->";
		cin>>numEstudantes;
	}
	for (int i=1;i<=numEstudantes;i++)
	{
		cout<<"Nome "<<i<<":: ";
		cin>>nomeEstudante;
		if (i==1)
		{
			priEstudante=ultEstudante=nomeEstudante;
		}
		else
		{
			if(nomeEstudante<priEstudante)
			{
				priEstudante=nomeEstudante;
			}
			else if (nomeEstudante>ultEstudante)
			{	
				ultEstudante=nomeEstudante;
			}
		}
	}
	cout<<"Primeiro-->"<<priEstudante<<endl;
	cout<<"Ultimo-->"<<ultEstudante<<endl;
	system("pause");
	return 0;
}


