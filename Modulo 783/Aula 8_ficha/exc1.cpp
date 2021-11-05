/*
1. Crie um programa que guarde o código, a quantidade, o valor de compra e o valor de venda de 30 produtos. O output poderá ser:
de todos os produtos (opção 1) ou
somente de um produto ao digitar o código do mesmo (opção 2).
*/
#include <iostream>	
#include <string.h>
#define TAM 3		
using namespace std;


int main()								
{
    string produtos [TAM];
    int qtd [TAM];
    float valCompra[TAM];
    float valVenda[TAM];
    int op;
    char codigo[5];

    cout << "***** PROGRAMA PRODUTOS *****\n";
    for (int i=0; i<TAM; i++)
    {
        cout << "CODIGO PRODUTO "<<i+1<<" --> ";
        cin >> produtos[i];
        cout << "QUANTIDADE PRODUTO "<<i+1<<" --> ";
        cin >> qtd[i];
        cout << "VALOR DE COMPRA PRODUTO "<<i+1<<" --> ";
        cin >> valCompra[i];
        cout << "VALOR DE VENDA PRODUTO "<<i+1<<" --> ";
        cin >> valVenda[i];
    }
   

    cout << "**************************\n";
    cout << "** 1.Todos os produtos ***\n";
    cout << "** 2.Por código        ***\n";
    cout << "**************************\n";
    cout << "Opção [1/2]--> ";
    cin >> op;
    switch (op)
    {
    case 1:
        cout << "PRODUTOS\tQUANTIDADE\tCOMPRA\tVENDA\n";
        for (int i=0; i<TAM; i++)
        {
            cout <<"-> "<< produtos[i]<<"\t\t"<<qtd[i]<<"\t\t"<<valCompra[i]<<"\t"<<valVenda[i]<< endl;
        }
        break;
    case 2:
        cout << "Qual o código do produto? --> ";
        cin >> codigo;
        for (int i=0;i<TAM;i++)
        {
            if (strcmp(produto[i],codigo)==0)
            {
                cout <<"-> "<< produtos[i]<<"\t\t"<<qtd[i]<<"\t\t"<<valCompra[i]<<"\t"<<valVenda[i]<< endl;
            }
        }
    
    default:
        cout << "Opção inválida!\n ";
        break;
    }
 


    system("pause");				
	return 0;	
}