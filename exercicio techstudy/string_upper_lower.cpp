/*
Write C++ program to find string length
Write C++ program to convert a string to Lower case
Write C++ program to convert a string to Upper case
*/

#include <iostream>
#include <cstdlib>
#include <string.h>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	string palavra;						//para usar o size, variavel pode ser string
	char palavra2[10];					//para usar strlwr e strupr tem de ser tipo char
		
	cout<<"PROGRAMA STRINGS\nIntroduza uma palavra-->";
	cin>>palavra;
	
	cout<<"size() ::"<<palavra.size()<<endl;
	cout<<"Outra palavra::";
	cin>>palavra2;
	cout<<"strlwr(var) ::"<<strlwr(palavra)<<endl;
	cout<<"strupr(var) ::"<<strupr(palavra)<<endl;

	system("pause");
	return 0;
}


