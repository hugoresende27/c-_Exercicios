/*
1. Crie um programa que guarde o código, a quantidade, o valor de compra e o valor de venda de 30 produtos. O output poderá ser:
de todos os produtos (opção 1) ou
somente de um produto ao digitar o código do mesmo (opção 2).

produtos[i].c_str(),codigo.c_str()

*/
#include <iostream>	
#include <string.h>
#define TAM 3//10//1		
using namespace std;


int main()								
{
    string produtos [TAM];
    int qtd [TAM];
    float valCompra[TAM];
    float valVenda[TAM];
    int op;
    string codigo;
    bool encontrado=false;

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
    do
    {
        cout << "**************************\n";
        cout << "** 1.Todos os produtos ***\n";
        cout << "** 2.Por código        ***\n";
        cout << "** 3.Sair              ***\n";
        cout << "**************************\n";
        cout << "Opção [1/2/3]--> ";
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
                if (strcmp(produtos[i].c_str(),codigo.c_str())==0) //preciso converter a string para c_str()
                {
                    encontrado = true;
                    cout << "PRODUTOS\tQUANTIDADE\tCOMPRA\tVENDA\n";
                    cout <<"-> "<< produtos[i]<<"\t\t"<<qtd[i]<<"\t\t"<<valCompra[i]<<"\t"<<valVenda[i]<< endl;
                    break;//não preciso de percorrer o resto do vetor, quando encontrado o codigo único
                }
            }
            if (encontrado == false)
            {
                cout << "Produto não encontrado!\n";
            }
            break;
        case 3:
            cout<<"Encerrando...\n";
            exit(1);
            break;
        
        default:
            cout << "Opção inválida!\n ";
            break;
        }
    }while ( op!=3 );
 
    system("pause");				
	return 0;	
}
