/*
Crie um programa que apresente um menu com 3 opções:
a. Ler a temperatura de uma pessoa e exibir a mensagem “Febre Alta” (temp ≥ 39), “Febre Moderada” (39 > temp
≥37) ou “Sem Febre” (temp<37).
b. Determinar o IMC sabendo que IMC = PESO / altura2
c. Detetar o nº de letras do nome do utilizador
*/

#include <iostream>	
#include <string.h>	
using namespace std;

int main()								
{
    int op;
do
{
    cout << "******* MENU *********\n";
    cout << "*******1.TEMPERATURA *********\n";
    cout << "*******2.IMC *********\n";
    cout << "*******3.LETRAS *********\n";
    cout << "*******4.SAIR *********\n";
    cout << "Qual a operação? -->";
    cin >> op;

    switch (op)
    {
    case 1:
        float temp;
        cout << "Temperatura--> ";
        cin >> temp;
        if (temp>=39)
            cout << "FEBRE\n";
        else
            if (temp>=37)
                cout << "FEBRE MODERADA\n";
            else
                cout << "SEM FEBRE\n";
        break;
    
    case 2:
        float imc,peso,altura;
        cout << "Peso--> ";
        cin >> peso;
        cout << "Altura-->";
        cin >> altura;
        imc = peso / (altura*2);
        cout << "IMC :: "<<imc<<endl;
        break;

    case 3:
        char nome[10];
        cout << "Qual o seu nome? --> ";
        cin >>nome;
        cout << "O nome "<<nome<<" tem "<<strlen(nome)<<" letras de comprimento\n";
        break; 
    case 4:
        cout << "Encerrando ....\n";
        exit(0);
        break;
    default:
        cout << "opção inválida\n";
        break;
    }
}while (op!=4);
    system("pause");				
	return 0;	
}