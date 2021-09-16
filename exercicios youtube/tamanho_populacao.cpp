#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	float organismos=0.0f;
	float taxa_cre=0.0f;
	int dias=0;
	float organismos_dia=0.0f;
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
	
	
	for (int i=1;i<=dias;i++)
	{																		
		organismos_dia=((taxa_cre/100)*organismos)+organismos;
											
		cout<<"Dia "<<i<<" Organismos-> "<<organismos_dia<<endl;
		
		organismos=organismos_dia;		// var organismos, que tem o valor total da populacao recebe o valor da var orga_dia
	}
	cout<<"TOTAL ORGANISMOS:: "<<organismos<<endl;
	cout<<"TAXA CRESCIMENTO:: "<<taxa_cre<<" %"<<endl;
	cout<<"DIAS:: "<<dias<<endl;
	
	
	

	system("pause");
	return 0;
}


