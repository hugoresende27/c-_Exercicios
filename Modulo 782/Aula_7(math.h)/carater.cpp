#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	char letra;
	char nome[10];
	int num;
		
	printf("Programa letra \nLetra--> ");
	scanf("%c",&letra);

	printf("O carater %c corresponde ao valor da tabela %i\n",letra,letra);
	
	printf("Qual o numero-->");
	scanf("%d",&num);
	
	printf("O numero %d corresponde ao carater %c\n",num,num);
	
	printf("Qual o teu nome? ");
	scanf("%s",nome);
	printf("Bem vindo %s\n",nome);
	
	system("pause");
	return 0;
}


