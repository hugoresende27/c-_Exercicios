#include <iostream>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");		//output de acentos correctos
	//formula: IMC = peso/ (altura x altura)
	
	float peso,altura,imc;		//definir as variaveis
	
	cout<<"PROGRAMA IMC"<<endl;
	cout<<"Qual o seu peso?(kgs)-->";
	cin>>peso;							//le variavel peso
	cout<<"Qual a sua altura?(mts)-->";
	cin>>altura;						//le variavel altura
	imc=peso/(altura*altura);			//aplica formula imc
	cout<<"IMC ::: "<<imc<<endl;		//escreve o imc
	printf("O IMC e %d",imc);
	system("pause");
	return 0;
}


