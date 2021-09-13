#include <iostream>
//#include <locale.h>
//#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	float num,soma=0;
	int cont=0;
	setlocale(LC_ALL, "Portuguese");

	while (cont<10)
	{
		cout<< "Introduza 10 valores"<< endl;
		cin >> num;
		cont++;
		if (num < 40)
		{
			soma = soma +num ;
		}
		else 
		{
			cout << "entre 0 e 40 !!!" << endl;
		}
	}
	cout <<"A soma dos números menores que 40 é: "<< soma<< endl;
	return 0;
	system ("pause");
}