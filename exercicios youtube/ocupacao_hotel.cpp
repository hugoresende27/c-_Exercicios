#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int pisos=0;
	int quartos=0;
	int quartos_ocupados=0;
	int total_quartos=0;
	int total_quartos_ocupados=0;
	int quartos_desocupados;
	float taxa_ocupacao=0;
	cout<<"PROGRAMA HOTEL "<<endl;
	while (pisos<=0)
	{
		cout<<"Quantos andares tem o hotel? (minimo 1) --> ";
		cin>>pisos;
	}

	for (int i=1;i<=pisos;i++)
	{
		if (i==13)
		{
			cout<<"Quarto 13 --> manutencao\n";
			continue;
		}
		else
		{
		cout<<"ANDAR:: "<<i<<"\nQUARTOS:: ";
		cin>>quartos;
			
			while (quartos<10)
			{
				cout<<"Minimo 10 quarto...\n";
				cin>>quartos;
			}
			total_quartos+=quartos;
			
			cout<<"ANDAR:: "<<i<<"\nQUARTOS OCUPADOS:: ";
			cin>>quartos_ocupados;
			while (quartos_ocupados<0) 
			{
				cout<<"Minimo 0 quartos...\n";
				cin>>quartos_ocupados;
			}
				while  (quartos_ocupados>quartos)
				{
					cout<<"Nao podes ter mais quartos ocupados do que quartos existentes...";
					cin>>quartos_ocupados;
				}
			
			
			total_quartos_ocupados+=quartos_ocupados;
		}	
	}
	cout<<"Existe o total de "<<total_quartos<<" quartos no hotel"<<endl;
	cout<<"Existe o total de "<<total_quartos_ocupados<<" quartos ocupados no hotel"<<endl;
	quartos_desocupados=total_quartos-total_quartos_ocupados;
	cout<<"Existe o total de "<<quartos_desocupados<<" quartos desocupados no hotel"<<endl;
	
	taxa_ocupacao=float(total_quartos_ocupados)/total_quartos;
	cout<<"TAXA OCUPACAO:: "<<taxa_ocupacao*100<<"%"<<endl;
	printf ("Taxa de ocupacao:: %.2f %\n",taxa_ocupacao*100);
	
	
	

	system("pause");
	return 0;
}


