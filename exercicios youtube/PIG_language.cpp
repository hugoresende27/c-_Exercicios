/*
Write a program, that reads a sentence as input and converts each word to 'Pig Latin'
In this version, to convert a word to Pig Latin, remove the first letter and place it at the end of the word. Then append the string 
"ay" to the word
i.e: I SLEPT MOST OF THE NIGHT =
     IAY LEPTSAY OSTMAY FOAY HETAY IGHTNAY
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;
string lerFrase(string &);
string traduzPig(string);
string corta(string);


int main ()
{
	setlocale (LC_ALL,"Portuguese");
	string frase;
	string traducao;
	
	cout<<"Frase::\n";
	getline(cin,frase);		//ler uma string
	while (frase.size()>0)	//enquanto tamanho da frase maior do que 0, vai percorrer a frase toda
	{
		string palavra=lerFrase(frase);//le a palavra da string frase
		
		palavra=traduzPig(palavra);		//palavra recebe palavra com a funcao traduzPig
		
		traducao += palavra + " ";		//traducao vai recebendo e concatenando com espacos var palavra
	}
	cout<<traducao<<endl;
	
	system("pause");
	return 0;
}

string lerFrase(string &frase)		//recebe frase por referencia &
{
	frase=corta(frase);				//funcao corta para tirar espacos
	int i =0;						
	while (frase[i]!=' ' && i<frase.size())		//inicio da palavra ao localizar o primeiro " " ou ate chegar ao fim da palavra
		i++;									//agr i = ao tamanho, size da palavra
	
	string palavra=frase.substr(0,i);		//copia parte da string de 0 ate i(comprimento da palavra)
	
	frase.erase(0,i);
	return palavra;
	
}

string corta( string frase)		//funcao para cortar espacoes em branco
{
	while(frase[0]== ' ')
		frase.erase(0,1);		//elimina o primeiro caracter se for um espaco ' '
	return frase;
	
}

string traduzPig (string palavra)
{
	char first=palavra[0];
	palavra.append(1,first);
	palavra.append("AY");
	palavra.erase(0,1);
	return palavra;	
}


