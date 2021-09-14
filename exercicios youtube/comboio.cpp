#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	
	float velocidade,distancia;
	int horas;
	cout<<"PROGRAMA COMBOIO\n";
	cout<<"Qual a velocidade de viagem? ";
	cin>>velocidade;
	
	while (velocidade<=0)
	{
		cout<<"Velocidade incorrecta...Insira novamente o valor: \n";
		cin>>velocidade;
	}
	cout<<"\nQuantas horas viajou? ";
	cin>>horas;
	while (horas<=0)
	{
		cout<<"Horas incorrectas...Insira novamente o valor: \n";
		cin>>horas;
	}
	
	for (int i=0;i<=horas;i++)
	{
		distancia=velocidade*i;
		cout<<"Hora "<<i<<" percorreu "<<distancia<<" km\n";
	}
	cout<<"Percorreu "<<distancia<<" km a uma velocidade de "<<velocidade<<"km/h num total de "<<horas<<" horas\n";
	system("pause");
	return 0;
}


