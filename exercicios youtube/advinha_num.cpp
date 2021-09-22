#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int numRandom=7;
	int aposta;
	
	do
	{
		cout<<"Insira o numero::";
		cin>>aposta;	
	}while (aposta!=numRandom);
	
	cout<<"VENCEDOR"<<endl;;

	system("pause");
	return 0;
}


