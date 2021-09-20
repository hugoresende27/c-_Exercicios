#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#include <iomanip>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	double arrayChuva[12];
	double soma=0,media=0,maior=0,menor=0,chuva_temp=0;
	
	cout<<"PROGRAMA CHUVA EM ARRAY\n";
	for (int i=1;i<=12;i++)
	{
		cout<<"chuva do mes "<<i<<"--> ";
		cin>>arrayChuva[i];
		while (arrayChuva[i]<0)
		{
			cout<<"chuva do mes "<<i<<"--> ";
			cin>>arrayChuva[i];	
		}
		soma += arrayChuva[i];
		
		media=soma/12;
		maior=arrayChuva[i];
		menor=arrayChuva[i];
	
	}
	
	
	
	for (int i=1;i<=12;i++)
	{
	/*	chuva_temp=arrayChuva[i];
			
		if (chuva_temp>maior)
		{
			maior=chuva_temp;
		}
		else if (chuva_temp<menor)
		{
			menor=chuva_temp;
		}  */
			
		if (arrayChuva[i]>maior)
		{
			maior=arrayChuva[i];
		}
		else if (arrayChuva[i]<menor)
		{
			menor=arrayChuva[i];
		}
		cout<<"O array vai ter valor "<<arrayChuva[i]<<" na posicao "<<i<<endl;
	}
	
	
	cout<<"CHUVA soma::"<<soma<<endl;
	cout<<"CHUVA maior::"<<maior<<endl;
	cout<<"CHUVA menor::"<<menor<<endl;
	cout<<"CHUVA Media:::"<<setprecision(2)<<fixed<<media<<endl;


	system("pause");
	return 0;
}


