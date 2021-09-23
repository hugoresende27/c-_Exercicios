#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int valor;
	
	cout<<"\t\t==TABUADA V1==\n";
	cout<<"Tabuada do:: ";
	cin>>valor;
	for (int i=1;i<=10;i++)
	{
		printf("\t\t %d X %d = %d\n", valor,i,(i*valor));
	}
	


	system("pause");
	return 0;
}


