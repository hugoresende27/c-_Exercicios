#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int fatorial,resultado=1;
	
	cout<<"\t\tPROGRAMA FATORIAL\n";
	cout<<"Qual o valor?:: ";
	cin>>fatorial;
	
	for (int i=1;i<=fatorial;i++)
	{
			resultado=i*resultado;
			cout<<resultado<<" X ";
	}
	
	cout<<"\nFATORIAL DE "<<fatorial<<" ::"<<resultado<<endl;

	system("pause");
	return 0;
}


