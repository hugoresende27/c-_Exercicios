#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main ()
{
	//setlocale (LC_ALL,"Portuguese");
	char num ;   			    //int - tipo de dados da vari�vel com chamada num=> declarar a var�vel
	cout<<num<<endl;				
	num = '9'+1;	 		   		    //atribuir o valor 20 � var�vel num=> definir a vari�vel
	cout<<"Valor::"<<(int)num<<endl;	    //saida para o ecr�
	cout<<"Valor::";
	cin>>num;
	cout<<"Introduziu o valor: "<<(char)num<<endl;
	system("pause");
	return 0;
}

