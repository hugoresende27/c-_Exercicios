#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

double getVendas(string);
void encontraMelhor(double,double,double,double);		//prototypes

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	double Nvendas,Svendas,Evendas,Ovendas;		//declarar as 4 variaves, 1 para cada loja, tipo double
	
	
	cout<<"PROGRAMA 4 EMPRESAS\n";
	for (int i=0; i<4 ; i++)				//loop para percorrer as 4 empresas
	{
		switch (i)						//switch para cada empresa
		{
			case 0:
				Nvendas = getVendas("Norte");	//caso 0, empresa Norte, usa funcao getVendas com o parametro string "Norte"
				break;							//o valor das vendas da loja do norte fica guardado na var Nvendas
			case 1:
				Svendas = getVendas("Sul");		//Svendas com valor das vendas da loja sul, usa a mesma funcao(getVendas) 
				break;
			case 2:
				Evendas = getVendas("Este");	//Evendas, funcao getVendas com parametro Este, porque case 2
				break;
			default:
				Ovendas = getVendas("Oeste");
				break;
		}	
	}
	encontraMelhor( Nvendas, Svendas,  Evendas,  Ovendas);
	system("pause");
	return 0;
}

double getVendas (string nome)					//funcao para input de vendas, 1 para cada loja, recebe parametro nome tipo string
{
	double vendas=0;
	cout<<"VENDAS DIVISAO "<<nome<< "::euros::->";
	cin>>vendas;
	while (vendas<0)
	{
		cout<<"VENDAS DIVISAO(numero positivo) "<<nome<< "::euros::->";
		cin>>vendas;
	}
	return vendas;									//nao esquecer o return da funcao, neste caso double vendas
	
}

void encontraMelhor (double Nvendas,double Svendas, double Evendas, double Ovendas)	//funcao sem return, no fim cout do valor de melhor e nome da divisao
{
	double melhor=0;				//funcao para encontrar o maior valor das 4 var double vendas
	string divisao="";				//var divisao vai guardar o nome , iniciar vazia ""
	
	if (Nvendas>Svendas && Nvendas>Evendas &&Svendas>Ovendas )		//testes condicionais para encontrar o maior com uso de E
	{
		melhor=Nvendas;					//var double melhor recebe valor de Nvendas e var tipo string divisao recebe "Norte"
		divisao="Norte";
	}
	else if (Svendas>Nvendas && Svendas>Evendas &&Nvendas>Ovendas )
	{
		melhor=Svendas;
		divisao="Sul";
	}
	else if (Evendas>Svendas && Evendas>Nvendas &&Svendas>Ovendas )
	{
		melhor=Evendas;
		divisao="Este";
	}
	else //if (Ovendas>Svendas && Ovendas>Evendas &&Svendas>Nvendas )
	{
		melhor=Ovendas;
		divisao="Oeste";
	}
	
	cout<<"A DIVISAO COM MELHORES VENDAS ::divisao "<<divisao<< " com vendas no total de "<<melhor<<" euros\n";
	
}


