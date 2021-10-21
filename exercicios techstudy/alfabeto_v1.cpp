/*
 program to print alphabets from a to z
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int contagem;
	char a='a';
	do
	{
		contagem=int(a);	//contagem recebe cast int do valor do caracter 'a'
		//cout<<contagem<<endl;
		cout<<a<<" ";
		contagem++;		//incremento contagem
		
		a=char(contagem);	//a recebe cast de contagem
	}while (contagem<='z');


	system("pause");
	return 0;
}


