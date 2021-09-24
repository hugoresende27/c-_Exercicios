#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int num;
	
	cout<<"PAR OU IMPAR\nNumero-> ";
	cin>>num;
	if (num%2==0)
	{
		cout<<"PAR\n";
	}
	else 
	{
		cout<<"IMPAR\n";
	}

	system("pause");
	return 0;
}


