#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int num=0,maior=0,menor=0,cont=1;
	
	cout<<("MAIOR E MENOR(-99 para sair))\n");
	while (num!= -99)
	{

		cout<<"Valor "<<cont<<":: ";
		cin>>num;
	/*	if (num==-99)
		{
			break;
		}*/
		if (cont==1)
		{
			maior=menor=num;
		}
		else
		{
		
			if (num>maior && num !=-99)
			{
				maior=num;
			}
			else if (num<menor && num!=-99)
			{
				menor=num;
			}
		}
		//cout<<"|"<<maior<<"|"<<menor<<"|"<<num<<endl;
		cont+=1;
		
	}
	cout<<"TOTAL DE VALORES::"<<cont;
	cout<<"\nMAIOR::"<<maior;
	cout<<"\nMENOR::"<<menor;

	cout<<("\nENCERRANDO O PROGRAMA...\n");
	system("pause");
	return 0;
}


