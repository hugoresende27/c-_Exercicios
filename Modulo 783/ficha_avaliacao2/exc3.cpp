/*
Crie um programa que dado um número de 1 a 7, imprima o dia da semana por
extenso (por exemplo: 1 – Domingo). Use uma estrutura “Switch Case”.
*/

#include <iostream>	
		
using namespace std;


int main()								
{
    int dia;
    cout << "**** EXERCICIO 3 ****\n";
    do
    {
    cout << "Qual o dia da semana [ 1 | 2 | 3 | 4 | 5 | 6 | 7 | 0(sair)] --> ";
    cin >> dia;
    switch (dia)
    {
    case 0:
    	cout << "Encerrando...\n";
        exit(1);
        break;
    case 1:
        cout << "DOMINGO\n";
        break;
    case 2:
        cout << "SEGUNDA\n";
        break;
    case 3:
        cout << "TERÇA\n";
        break;
    case 4:
        cout << "QUARTA\n";
        break;
    case 5:
        cout << "QUINTA\n";
        break;
    case 6:
        cout << "SEXTA\n";
        break;
    case 7:
        cout << "SÁBADO\n";
        break;
    default:
        cout << "OPÇÃO INVÁLIDA\n";
        break;
    }
    }while (dia!=0);
    system("pause");				
	return 0;	
}
