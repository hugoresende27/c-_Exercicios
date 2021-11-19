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
    float total,totalHotel=0;
    string nomeCliente;


    int matrix[20][3];
    int clientes=0;

    cout << "******* Programa Hotel *******\n";
    do
    {
        cout << "Numero de conta (0 para terminar) --> ";
        cin >>numConta;
        if (numConta==0) break;
        matrix[clientes][0]=numConta;
        cout << "Nome Cliente--> ";
        cin>>nomeCliente;
        cout << "Quantos dias esteve hospedado? --> ";
        cin >> dias;
        matrix[clientes][1]=dias;
        
        if (dias<10)
        {
            total= (DIARIA * dias) + (15 * dias);
        }
        if (dias>=10)
        {
            total= (DIARIA * dias) + (8 * dias);
           
        }
        cout << "Cliente -> "<<nomeCliente<<" | Num -> "<<numConta<<" | Dias hospedado -> "<<dias<<" | Total a pagar -> "<<total<<" euros"<<endl;
        matrix[clientes][2]=total;
        totalHotel += total;
        
        clientes++;
        
    } while (numConta !=0);
    cout <<"LISTA CLIENTES\n::NUMERO\tDIAS\t\tTOTAL(€)\n";
    for (int i=0; i<clientes;i++)
    {
        for (int j=0; j<3; j++)
        {
            cout << matrix[i][j]<<"\t\t";
        }
        cout << endl;
    }
    cout << "TOTAL HOTEL ::: "<<totalHotel<<" euros"<<endl;
    cout << "Encerrando...\n";
    system("pause");				
	return 0;	
}