#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int n=6;
	do
	{
		cout<<"Ola do_while nr::"<<n<<endl;  //do normal, executa sempre pelo menos 1x
		n++;
	}while (n<=5);
	
	string pass = "1234";
	string user_pass;
	do
	{
		cout<<"Insira pass:: "<<endl;		//do muito usado com password
		cin >>user_pass;
	}while (pass!=user_pass);
	cout<<"PASS  ACEITE"<<endl;
	
	int opcao=0;
	do
	{
		cout<<"MENU"<<endl;
		cout<<"1. continuar"<<endl;		//do usando num menu
		cout<<"2. sair"<<endl;
		cin>>opcao;	
	}while (opcao==1);
}
