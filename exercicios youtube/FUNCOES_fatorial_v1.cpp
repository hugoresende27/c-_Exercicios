#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

void fatorial (int n)
{
	int fat=1;
	for (int i =1;i<=n;i++)
	{
		fat=fat*i;
		printf("%d X ",fat);
	}
	//return fat;
}

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int num,resultado;
	cout<<"Funcao fatorial\nQual o Num?:: ";
	cin>>num;
	cout<<"Resultado fatorial "<<num<<" ::";
	//resultado = fatorial (num);
	//cout<<resultado<<endl;
	fatorial(num);
	
	system("pause");
	return 0;
}





