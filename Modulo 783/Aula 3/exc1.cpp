/*
Crie um programa que escreva por extenso o dia da semana a que corresponde um número de ordem dado pelo utilizador. (exemplo: dia 1 - Domingo).
*/
#include <iostream>	
		
using namespace std;


int main()								
{
    int dia;
    cout << "Insira o dia da semana? --> ";
    cin >> dia;
    switch (dia)
    {
        case 1:
            cout <<"O dia "<<dia<<" corresponde a DOMINGO\n";
            break;
        case 2:
            cout <<"O dia "<<dia<<" corresponde a SEGUNDA\n";
            break;
        case 3:
            cout <<"O dia "<<dia<<" corresponde a TERÇA\n";
            break;
        case 4:
            cout <<"O dia "<<dia<<" corresponde a QUARTA\n";
            break;
        case 5:
            cout <<"O dia "<<dia<<" corresponde a QUINTA\n";
            break;
        case 6:
            cout <<"O dia "<<dia<<" corresponde a SEXTA\n";
            break;
        case 7:
            cout <<"O dia "<<dia<<" corresponde a SÁBADO\n";
            break;
        default:
            cout<< "Dia inválido\n";
            break;

    }
    system("pause");				
	return 0;	
}