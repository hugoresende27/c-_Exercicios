/*
C -> F ℉ =℃ * 1.8 + 32
F -> C  - ℃ =(℉ - 32) / 1.8
*/
#include <iostream>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	float graus_C,graus_F;				//variaves graus_C, graus_F
	cout<<"PROGRAMA TEMPERATURA\n";
	cout<<"Graus celsius--> ";			//escreve no ecra "Graus celsius--> "
	cin>>graus_C;						//le a valor introduzido e guarda-o na variavel graus_C
	graus_F=(1.8*graus_C) + 32;			//formula para calcular graus_F
	cout<<graus_C<<" Graus Celsius corresponde a "<<graus_F<<" Graus Fahrenheit"<<endl;
	system("pause");
	return 0;
}


