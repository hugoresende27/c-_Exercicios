/*
 program to count number of alphabets, digits and special characters in string
 <string> is for c++ std::string class
<string.h> is for c string functions (like strlen(), etc.), which should be <cstring> for c++ project 
(this is the third, you didn't know of).
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#define MAXIMO 100

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int letras=0,numeros=0,especiais=0,contador=0;
	char palavra[MAXIMO];
	cout<<"PROGRAMA CONTA LETRAS NUMEROS E CARATERES ESPECIAIS\nInsira a palavra::";
	cin>>palavra;

	while (palavra[contador]!='\0')		//enquanto palavra na posicao contador nao chegar ao fim
	{
		if ((palavra[contador]>='a' && palavra[contador]<='z') || (palavra[contador]>='A' &&palavra[contador]<='Z'))
		{	//se palavras entre 'a' e 'z' ou 'A' e 'Z'
			letras++;	//adiciona na var letras
		}
		else if (palavra[contador]>='0' && palavra[contador]<='9')
		{
			numeros++;
		}
		else
		{
			especiais++;
		}
		contador++;
	}
	
	cout<<"TOTAL LETRAS::"<<letras<<endl;
	cout<<"TOTAL NUMEROS::"<<numeros<<endl;
	cout<<"TOTAL ESPECIAS::"<<especiais<<endl;

	system("pause");
	return 0;
}


