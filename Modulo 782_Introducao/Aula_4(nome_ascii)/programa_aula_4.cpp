#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main ()
{
	//setlocale (LC_ALL,"Portuguese");
	char num ;   			    //int - tipo de dados da variável com chamada num=> declarar a varável
	cout<<num<<endl;				
	num = '9'+1;	 		   		    //atribuir o valor 20 à varável num=> definir a variável
	cout<<"Valor::"<<(int)num<<endl;	    //saida para o ecrã
	cout<<"Valor::";
	cin>>num;
	cout<<"Introduziu o valor: "<<(char)num<<endl;
	system("pause");
	return 0;
}

