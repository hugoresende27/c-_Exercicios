/*
Crie um programa que leia o nome, sexo e idade de um candidato a emprego, sendo que, a vaga de emprego apenas aceita pessoas com idade inferior a 25 anos, do sexo feminino. No final o programa deverá imprimir se o candidato pode ou não ser considerado, tendo em conta as condições descritas.
*/
#include <iostream>	
#include <string.h>				
using namespace std;


int main()								
{
    char nome[10];
    char sexo;
    int idade;
    cout << "Qual o seu nome?--> ";
    scanf("%s",nome);               //cin >> nome;

    cout << "Idade? --> ";
    scanf("%d",&idade);

    fflush(stdin);      			//limpar a memória do teclado, para inserir um char 
    cout << "Sexo? (M/F)-->";            
    scanf("%c", &sexo);
    

    
    if (idade < 25 && (sexo =='F' || sexo == 'f'))
    {
        cout << "\tCANDIDATA ACEITE\n";
    }
    else 
    {
        cout << "\tCANDIDATO NÂO ACEITE\n";
    }
	printf("O candidato %s com %d anos do sexo %s \n", nome,idade,sexo);

    system("pause");				
	return 0;	
}
