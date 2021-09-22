#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#include "retangulo.h"


using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	double altura=0;
	double comp=0;
	
	do
	{
		cout<<"Altura Retangulo::";
		cin>>altura;
		cout<<"Comprimento Retangulo::";
		cin>>comp;
		
		Retangulo rect(altura,comp);
		cout<<"Area::"<<rect.area()	;
		cout<<"Perimetro::"<<rect.perimetro();
	}
	while (altura!=0 && comp!=0);


	system("pause");
	return 0;
}


