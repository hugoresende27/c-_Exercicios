#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;


double calculoRetail (double,double);		//prototype::chamada funcao calculoRetail, uma vez q a funcao esta escrita depois do main
												
int main ()
{
	setlocale (LC_ALL,"Portuguese");
	double preco_venda=0;
	double taxa=0;
	double total=0;
	
	cout<<"PROGRAMA PRECOS\n";
	cout<<"Preco de venda? (nr positivo)--> ";
	cin>>preco_venda;
	cout<<"Imposto % ? (nr positivo)-->";
	cin>>taxa;
	while (preco_venda<0 || taxa<0)
	{
		cout<<"Preco de venda? (nr positivo)--> ";
		cin>>preco_venda;
		cout<<"Imposto % ? (nr positivo)-->";
		cin>>taxa;
	}
	
	total=calculoRetail(preco_venda,taxa);
	cout<<"Vai ter um custo total de "<<total<<" euros com um imposto de "<<taxa<<"%"<<endl;
	
	
	system("pause");
	return 0;
}

double calculoRetail (double custo, double imposto)		//funcao calculoRetail recebe 2 parametros, double custo e double perc(entagem)
{
	double custo_total=0;								//declarada a variavel custo_total=0
	custo_total=((custo/100)*imposto) + custo;			//calculo custo /100 por ser %
	return custo_total;
	
}





