#include <iostream>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int lado,area;						//definir variaveis lado e area do tipo inteiro
	cout<<"PROGRAMA AREA QUADRADO\n";
	cout<<"Quanto mede o lado? --> ";	//escreve no ecra "Quanto mede o lado? -->"
	cin>>lado;							//le o valor introduzido pelo utilizador
	area=lado*lado;						//calculo da area, lado vezes lado
	cout<<"Area do quadrado com lado "<<lado<<" = "<<area<<" metros quadrados"<<endl;//escreve no ecra area do quadrado
	system("pause");
	return 0;
}


