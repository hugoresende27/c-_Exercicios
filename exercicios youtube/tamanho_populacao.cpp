#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int organismos=0;
	float taxa_cre=0;
	int dias=0;
	int organismos_dia=0;
	
	while (organismos<2)
	{
		cout<<"Quantos organismos? (minimo 2)--> ";
		cin>>organismos;
	}
	cout<<"Qual a taxa de crescimento? -->";
	cin>>taxa_cre;
	while (taxa_cre<0)
	{
		cout<<"Numero positivo";
		cin>>taxa_cre;
	}
	
	while (dias<1)
	{
		cout<<"Dias? (minimo 1)--> ";
		cin>>dias;
	}
	
	taxa_cre=taxa_cre/100;
	
	
	
	for (int i=1;i<=dias;i++)
	{
		organismos_dia+=i*organismos;
		cout<<"Dia "<<i<<" Organismos-> "<<organismos_dia<<endl;
	}
	cout<<"TOTAL ORGANISMOS:: "<<organismos<<endl;
	cout<<"TAXA CRESCIMENTO:: "<<taxa_cre<<endl;
	cout<<"DIAS:: "<<dias<<endl;
	
	
	

	system("pause");
	return 0;
}


