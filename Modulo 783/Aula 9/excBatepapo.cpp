/*
Um hotel estipulou o preço para a diária em 70€ e mais uma taxa de serviços diários de:
• 15,00€, se o número de dias for menor que 10;
• 8,00€, se o número de dias for maior ou igual a 10;
Crie um programa que imprima o nome,o número da conta e o total da conta de cada cliente, bem como o total recebido pelo hotel.
O programa deverá ler novos clientes até que seja inserido 0 (zero) como número da conta.
*/
#include <iostream>	
#define DIARIA 70	
using namespace std;


int main()								
{
    int numConta,dias;
    float total;
    string nomeCliente;
    cout << "******* Programa Hotel *******\n";
    do
    {
        cout << "Numero de conta (0 para terminar) --> ";
        cin >>numConta;
        if (numConta==0) break;
        cout << "Nome Cliente--> ";
        cin>>nomeCliente;
        cout << "Quantos dias esteve hospedado? --> ";
        cin >> dias;
        if (dias<10)
        {
            total= (DIARIA * dias) + (15 * dias);
        }
        if (dias>=10)
        {
            total= (DIARIA * dias) + (8 * dias);
        }
        cout << "Cliente -> "<<nomeCliente<<" | Num -> "<<numConta<<" | Dias hospedado -> "<<dias<<" | Total a pagar -> "<<total<<" euros"<<endl;
    } while (numConta !=0);
    cout << "Encerrando...\n";
    system("pause");				
	return 0;	
}