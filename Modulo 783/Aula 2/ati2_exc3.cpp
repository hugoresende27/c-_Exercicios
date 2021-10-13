/*
Crie um programa que leia o nome, sexo e idade de um candidato a emprego, sendo que, a vaga de emprego apenas aceita pessoas com idade inferior a 25 anos, do sexo feminino. No final o programa deverá imprimir se o candidato pode ou não ser considerado, tendo em conta as condições descritas.
*/

#include <iostream>					
using namespace std;


int main()								
{
    char nome[10];
    char sexo[2];
    int idade;
    cout << "Qual o seu nome?--> ";
    cin >> nome;
    cout << "Idade? --> ";
    scanf("%d",&idade);
    cout << "Sexo? (M/F)-->";
    cin >> sexo;

    printf("O candidato %s com %d anos do sexo %s \n", nome,idade,sexo);
    if (idade>=25)
    {
        cout << "\tCANDIDATO NÃO ACEITE\n";
    }
    else 
    {
        cout << "\tCANDIDATO ACEITE\n";
    }


    system("pause");				
	return 0;	
}