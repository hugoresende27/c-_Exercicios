#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main ()
{
	int m=6;
	while (m<=5)
	{
		cout <<"Ola while nr:: "<<m<<endl;		//while normal so executa se m<=5
		m++;
	}
	

	
	int opcao = 1;						//se var opcao for 0 , nunca vai executar
	while (opcao == 1)
	{
		cout<<"Menu"<<endl;
		cout<<"1.continuar"<<endl;		//while usado no menu
		cout<<"2.sair"<<endl;
		cin>>opcao;						//sem cin para input fazia infinite loop
	}
	
	
}
