#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#include <time.h>

using namespace std;

int viraMoeda();

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	
	int vezes=0,m,cara=0,coroa=0;
	
	cout<<"PROGRAMA ATIRA MOEDA AO AR\n";
	cout<<"Quantas vezes quer atirar a moeda?--> ";
	cin>>vezes;
	while (vezes<0)
	{
		cout<<"Quantas vezes quer atirar a moeda?(numero positivo)--> ";
		cin>>vezes;
	}
	srand (time(NULL));		//seed do rand precisa ser fora do loop
	
	


	for (int i=1 ; i<=vezes; i++)
	{
		cout<<i<<"-->lancamento";
		m=viraMoeda();
		if (m==1)
		{
			cout<<"::CARA !\n";
			cara++;
		}
		else
		{
			cout<<"::COROA !\n";
			coroa++;
		}	
	}
	
	cout<<"TOTAL DE CARAS::"<<cara<<endl;
	cout<<"TOTAL DE COROAS::"<<coroa<<endl;
	system("pause");
	return 0;
}

int viraMoeda()
{
	int n=0;
	n= 1 + rand()%2;		//gerar aleaorios entre 0 e 1  #srand (time(NULL));	 #biblioteca <time.h>
	return n;

}


