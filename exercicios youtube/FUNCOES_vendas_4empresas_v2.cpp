#include <iostream>

using namespace std;

double getSales(string);
void findHighest(double,double,double,double);

int main ()
{
	double NEsales,SEsales,NWsales,SWsales;
	for (int i=0; i<4 ; i++)
	{
		switch (i)
		{
			case 0:
				NEsales = getSales("NE");
				break;
			case 1:
				SEsales = getSales("SE");
				break;
			case 2:
				NWsales = getSales("NW");
				break;
			default:
				SWsales = getSales("SW");
				break;
		}
	}
	findHighest (NEsales,SEsales,NWsales,SWsales);
}


double getSales(string name)
{
	double sales=0;
	cout<<"Vendas da divisao "<<name<<" euros:: ";
	cin>>sales;
	
	while (sales<0)
	{
		cout<<"Vendas da divisao(acima de 0) "<<name<<" euros:: ";
		cin>>sales;
	}
	return sales;
}

void findHighest (double NEsales,double SEsales,double NWsales,double SWsales)
{
	double highest=0;
	string division="";
	
	if (NEsales>SEsales && NEsales>NWsales && SEsales>SWsales)
	{
		highest = NEsales;
		division ="Nordeste";
	}
	else if (SEsales>NEsales && SEsales>NWsales && SEsales>SWsales)
	{
		highest = SEsales;
		division ="Sudeste";
	}
	else if (NWsales>NEsales && NWsales>SEsales && NWsales>SWsales)
	{
		highest = NWsales;
		division ="Noroeste";
	}
	else
	{
		highest = SWsales;
		division ="Sudoeste";
	}
	
	cout<<"Divisao com mais vendas "<<division<<" total de vendas de "<<highest<<endl;
	
}

