/*
reverse a string enter by user
*/

#include <iostream>
#include <cstdlib>
#include <string.h>
#include <locale>
#define MAXIMO 100		//define MAXIMO com valor 100

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	char palavra[MAXIMO];
	char palavra_rev[MAXIMO];
	int contador=0,compr=0;
	
	cout<<"Insira uma palavra para inverter:: ";
	cin>>palavra;
	
	compr=strlen(palavra);						//atencao, preciso string.h, compr igual ao numero de index da string palavara
	for (int i = compr - 1;i>=0; i--)			//loop for comeca na ultima letra, ate chegar ao 0(primeira letra), i--
	{
		palavra_rev[contador] = palavra[i];		//var palavra_rev na posicao 0 recebe a ultima posicao
		contador++;								//incremento do contador
	}
	//palavra_rev[compr]='\0';
	
	cout<<"Invertido fica::"<<palavra_rev<<endl;
	system("pause");
	return 0;
}


