#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#include<fstream>


using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	ifstream ficheiro;			//declaracao variavel ficheiro do tipo i(nput)f(ile)stream
	string nome,pri_L,ult_L;
	int cont=50;		//contador, uma gambiarra para quando a primeira iteracao primeira_Letra e ultima_Letra recebem valor de var nome
	
	//ofstream MyFile("Alunos.txt");  //criar o ficheiro
	ficheiro.open("Alunos.txt");	 //abrir o ficheiro
	ficheiro>>nome;					 //ficheiro recebe variavel nome
	cout<<nome<<endl;				//print da variavel nome
	while (ficheiro>>nome)			 //enquanto o ficheiro aberto receber var nome
	{
		
		if (cont==50)				//na iteracao de contador = 50, aqui o inicio da var cont = 50, logo a primeira iteracao
		{
			pri_L=nome;				//primeira_Letra recebe o valor de nome, ou seja a linha 1 do ficheiro Alunos.txt
			ult_L=nome;				//ultima_Letra recebe o valor de nome, ou seja a linha 1 do ficheiro Alunos.txt
			cont++;
		}
		else 
		{
			if (nome<pri_L)			//depois nos ciclos seguintes, se nome menor do que primeira_Letra, 
			{	
				pri_L=nome;			//primeira letra recebe nome
			}
			else if (nome>ult_L)
			{
				ult_L=nome;
			}
		}
		
		cout<<nome<<endl;			//print do ficheiro, neste caso lista de nomes
		
	}
	cout<<"PRIMEIRA LETRA:: "<<pri_L<<endl;
	cout<<"ULTIMA LETRA:: "<<ult_L<<endl;
	ficheiro.close();
	system("pause");
	return 0;
}


