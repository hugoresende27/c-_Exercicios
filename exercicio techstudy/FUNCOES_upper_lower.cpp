/*
funcoes upper string e lower string
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

void funcaoUpper(char[]);		//prototype da funcaoUpper
void funcaoLower(char[]);

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	char palavra[100];
	int opcao;
	
	cout<<"Insira uma palavra:: ";
	cin>>palavra;
	cout<<"Converter em MAIUSCULAS(1) ou minusculas(2)-->";
	cin>>opcao;
	if (opcao==1)
	{
		funcaoUpper(palavra);		//uso da funcao
	}
	else if (opcao==2)
	{
		funcaoLower(palavra);
	}
	
	
	cout<<palavra<<endl;
	

	system("pause");
	return 0;
}

void funcaoUpper (char p[])		//funcao nao retorna nada, recebe um parametro char
{
	int cont=0;					//contador 
	while (p[cont]!='\0')		//enquanto o contador nao chegar ao fim da string '\0' marca o fim de uma string
	{
		if (p[cont] >= 'a' && p[cont] <= 'z')	//se estiver entre 'a' e 'z'
		{
			p[cont] = p[cont] - 32;			//retirar 32 posicoes e na tabela ASCII obtenho a maiuscula correspondente
		}
		cont++;							//nao esquecer c++ no ciclo while
	}
}

void funcaoLower (char p[])
{
	int cont=0;
	while (p[cont]!='\0')
	{
		if (p[cont] >= 'A' && p[cont] <= 'Z')		//atencao aqui vai de 'A' 'Z' maiusculo
		{
			p[cont] = p[cont] + 32;					//o contrario aqui, avanca 32 posicoes
		}
		cont++;
	}
}


