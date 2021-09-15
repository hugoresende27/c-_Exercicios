#include <iostream>
#include <cstdlib>
#include <string>
#include <locale.h>

using namespace std;

int main ()
{
	setlocale (LC_ALL," ");						//define o idioma 
	const float PI = 3.14159265;				//definicao da var const PI
	int raio;
	float area;
	//cout<<setlocale (LC_ALL," ");
	cout<<" Acentos :: á à í Ú ç \n";
	std::cout<<"Qual o raio do circulo? ";		//std:: necessario se nao usado using namespace std;
	cin>>raio;									//cin = console input cout = console output recebe o valor raio e coloca o valor na var raio
	area=PI*(raio*raio);
	cout<<"Area é = "<<area<<endl;
	
	system("pause");
	return 0;
}


