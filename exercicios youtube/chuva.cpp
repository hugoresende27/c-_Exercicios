#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int anos=0;
	int meses=0;
	float chuva=0;
	float total_chuva=0;
	float media=0;
	cout<<"PROGRAMA CHUVA\n";
	while (anos<=0)
	{
		cout<<"ANOS (minimo 1):: ";
		cin>>anos;	
	}
	for (int i=1;i<=anos;i++)
		for (int j = 1; j<=12;j++)
		{
		
			{
				cout<<"ANO "<<i<<"--MES "<<j<<"--> chuva:: ";
				cin>>chuva;
				chuva+=chuva;
			}
		}
	meses=anos*12;		
	media=chuva/meses;
	cout<<"Total de meses:: "<<meses<<"\nTotal de chuva:: "<<chuva;
	cout<<"\nA media foi de "<<media<<"%";
	printf ("\nMedia %.2f %\n",media);
	system("pause");
	return 0;
}


