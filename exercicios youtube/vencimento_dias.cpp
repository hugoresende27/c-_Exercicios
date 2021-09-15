#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	
	double salario=1.0;//1 centimo
	float total=0;
	float salario_dia=0;
	int dias;
	cout<<"Programa vencimento\n";
	cout<<"Quantos dias? ";
	cin>>dias;
	while (dias<1)
	{
		cout<<"Mais do que 0 sff....Quantos dias? ";
		cin>>dias;
	}
	for (int i=1;i<=dias;i++)
	{
		salario_dia=salario/100;
		cout<<"Vais receber "<<salario<<" centimo por dia ao fim de "<<i<<" dias"<<endl;
		cout<<"Vais receber "<<salario_dia<<" euros por dia ao fim de "<<i<<" dias"<<endl;
		total+=salario_dia;
		salario*=2;
		cout<<"Ao todo vais receber "<<total<<" euros ao fim de "<<i<<" dias\n";
	
	}
	cout<<"Ao todo vais receber "<<total<<" euros ao fim de "<<dias<<" dias\n";

	
	system("pause");
	return 0;
}


