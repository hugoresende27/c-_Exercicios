/*
Escreva um programa que possibilite estabelecer o valor final de um produto, que se pretende vender numa loja de conveniência, tendo em conta que ao valor base do mesmo teremos que acrescentar uma taxa de IVA que poderá ser, reduzida - 6%, intermédia - 13% ou normal - 23%. Deverá:
Receber o valor base e nome do produto;
Imprimir o nome do produto e respetivo preço final, mostrando igualmente o valor do IVA (em euros) que foi aplicado.
*/
#include <iostream>	
#include<string.h>
using namespace std;


int main()								
{
    char nome [20],tipo_taxa[10];
    float preco_base,preco_iva;
    int taxa;
    cout << "Qual o nome do produto? --> ";
    cin >> nome;
    cout << "Qual o preço base? --> ";
    cin >> preco_base;
    cout << "Qual a taxa de IVA(%)\n";
    cout << "\t1.REDUZIDA (6%)\n";
    cout << "\t2.INTERMÉDIA (13%)\n";
    cout << "\t3.NORMAL (23%)--->";
    cin >> taxa;

    switch (taxa)
    {
    case 1:
        strcpy(tipo_taxa,"REDUZIDA"); 
        preco_iva= (preco_base*0.06) + preco_base;
        break;
    case 2:
        strcpy(tipo_taxa,"INTERMÉDIA"); 
        preco_iva= (preco_base*0.13) + preco_base;
        break;
    case 3:
        strcpy(tipo_taxa,"NORMAL"); 
        preco_iva= (preco_base*0.23) + preco_base;
        break;
    default:
        cout << "Opção inválida\n";
        break;
    }

    cout << "O produto "<<nome<<" com o preço base de "<<preco_base<<"€ taxa de IVA "<<tipo_taxa<<" vai custar "<<preco_iva<<"€\n";
    system("pause");			
	return 0;	
}