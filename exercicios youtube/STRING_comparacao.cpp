#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#include <cctype>				//biblioteca para usar o upper

using namespace std;

string letrasG(string s);					//proto funcoes
bool mesmaS (string s1,string s2);

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	string nome1,nome2;
	int resultado;
		
	cout<<"PROGRAMA NOMES IGUAIS\n";
	cout<<"Nome 1:: ";
	cin>>nome1;
	cout<<"Nome 2:: ";
	cin>>nome2;
	
	resultado=mesmaS(letrasG(nome1), letrasG(nome2) );
	if (resultado==1)
	{
		cout<<"Nomes IGUAIS"<<endl;
	}
	else
	{
		cout<<"Nomes DIFERENTES"<<endl;
	}
	system("pause");
	return 0;
}

string letrasG(string s)					//funcao letras Grandes, no loop uso short i, ate var recebida.size() ou length()
{											
	for (short i=0; i<s.length();i++)
	{
		s[i]=toupper(s[i]);					//var na posicao i recebe funcao toupper var (s) posicao [i]
	}
	return s;								//retorno da variavel, agr com todos os carateres maiusculos
}

bool mesmaS(string s1, string s2)			//funcao tipo bool , verifica se strings sao iguais, se sim return true else false
{
	if (s1==s2)
	{
		return true;
	}
	else
	{
		return false;
	}
}


