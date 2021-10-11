#include <iostream>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int num1,num2,soma;   				//variaveis num1 e num2
	cout<<"PROGRAMA CALCULADORA V1\n";	//escreve no ecra "PROGRAMA CALCULADORA"
	cout<<"Valor A:--> ";				//escreve "Valor A:--> "
	cin>>num1;							//le variavel num1
	cout<<"Valor B:--> ";				//escreve "Valor B:--> "
	cin>>num2;							//le variavel num2
	soma=num1+num2;						//variavel soma=num1+num2
	cout<<"SOMA "         <<num1<<" + "<<num2<<" = "<<soma                    <<endl;
	cout<<"SUBTRACAO "    <<num1<<" - "<<num2<<" = "<<num1-num2               <<endl;
	cout<<"MULTIPLICADAO "<<num1<<" X "<<num2<<" = "<<num1*num2               <<endl;
	cout<<"DIVISAO "      <<num1<<" / "<<num2<<" = "<<float(num1)/float(num2) <<endl;	//cast para float	
	system("pause");
	return 0;
}


