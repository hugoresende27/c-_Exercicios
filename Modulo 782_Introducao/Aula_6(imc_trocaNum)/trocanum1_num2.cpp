#include <iostream>		//biblioteca para cin e cout

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	float num1,num2,num3;				//precisamos de 3 variaveis para trocar os valores de num1 com num2
	cout<<"PROGRAMA TROCA NUMEROS\n";
	cout<<"\nPrimeiro numero::";
	cin>>num1;
	num3=num1;						//armazenamos o valor de num1 na var num3
	cout<<"Segundo numero::";
	cin>>num2;
	
	printf("Antes da conversao o numero 1 vale %.2f \ne o numero 2 vale %d\n",num1,num2);
	num1=num2;						//apos ler num2, o valor de num2 fica armazenado na var num1
	num2=num3;						//a var num2 recebe o valor de var num3 que tem armazenado o valor de num1
	cout<<"trocando o primeiro com o segundo,\n primeiro passa a valer "<<num1<<" e o\n segundo passa a valer "<<num2<<endl;
	printf("Num1 = %i e Num2= %i\n",num1,num2);
	system("pause");
	return 0;
}


