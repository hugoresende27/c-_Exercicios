#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	
	cout<<"PROGRAMA SETA\n";
	int seta[10];
	
/*	for (int i=0;i<10;i++)
	{
		seta[i]+=1;	
		cout<<seta[i]<<endl;
	}
	*/
	int cont=0;
	
	while (cont<10)
	{
		seta[cont] =1;
		cout<<seta;
		cont+=1;
	}
	
	cout<<"\nFINAL\n";
	system("pause");
	return 0;
}


