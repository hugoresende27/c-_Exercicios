#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int maximo[2],minimo[2];
	float medias[2];
	
	cout<<"TEMPERATURAS\n";
	
	minimo[0]=5;
	minimo[1]=10;
	minimo[2]=-2;
	maximo[0]=30;
	maximo[1]=35;
	maximo[2]=26;
	
	medias[0]=(maximo[0]+minimo[0])/2;
	medias[1]=(maximo[1]+minimo[1])/2;
	medias[2]=(maximo[2]+minimo[2])/2;
	
	cout<<"\t2019\t2020\t2021\t\t"<<endl;
	cout<<"MAX\t"<<maximo[0]<<"\t"<<maximo[1]<<"\t"<<maximo[2]<<endl;
	cout<<"MIN\t"<<minimo[0]<<"\t"<<minimo[1]<<"\t"<<minimo[2]<<endl;
	cout<<"MEDIAS\t"<<medias[0]<<"\t"<<medias[1]<<"\t"<<medias[2]<<endl;
	////////////////////////////////////////////////////////////////////////////////////////
	int max[2],min[2];
	float med[2];
	
	for (int i=0;i<3;i++)
	{	
			cout<<"valor maximo ano "<<i+2019<<"-> ";
			cin>>max[i];
			cout<<"valor minimo ano "<<i+2019<<"-> ";
			cin>>min[i];
	}
	for (int i=0;i<3;i++)
	{
		med[i]=(max[i]+min[i])/2;
		cout<<"Medias::"<<med[i]<<endl;
	}
	
	system("pause");
	return 0;
}


