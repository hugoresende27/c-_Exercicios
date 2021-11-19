/*
Escreva um programa que possibilite estabelecer o valor final de um produto, que se pretende vender numa loja de conveniência, tendo em conta que ao valor base do mesmo teremos que acrescentar uma taxa de IVA que poderá ser, reduzida - 6%, intermédia - 13% ou normal - 23%. Deverá:
Receber o valor base e nome do produto;
Imprimir o nome do produto e respetivo preço final, mostrando igualmente o valor do IVA (em euros) que foi aplicado.
Altere o programa anterior de modo a que verifique se o produto é perecível (possa estragar) e nesse caso, mostre também a data de validade, além do que já mostrava no ponto 1.
*/
#include <iostream>	
#include<string.h>
#include<iomanip>
using namespace std;


int main()								
{
    char nome [20],tipo_taxa[12],estraga;
    float preco_base,preco_iva,iva;
    int taxa,validade;
    bool pode_estragar=false;
    cout << "Qual o nome do produto? --> ";
    cin >> nome;
    cout << "Qual o preço base? --> ";
    cin >> preco_base;
    cout << "Produto pode se estragar ? (s/n) --> ";
    cin >> estraga;
    estraga = tolower(estraga);
    if (estraga == 's')
    {
        pode_estragar=true;
        cout << "Informe a validade (dias) --> ";
        cin >> validade;
    }
    else
        pode_estragar=false;
    cout << "Qual a taxa de IVA(%)\n";
    cout << "\t1.REDUZIDA (6%)\n";
    cout << "\t2.INTERMÉDIA (13%)\n";
    cout << "\t3.NORMAL (23%)--->";
    cin >> taxa;

    switch (taxa)
    {
    case 1:
        strcpy(tipo_taxa,"REDUZIDA"); 
        iva = preco_base*0.06;
        break;
    case 2:
        strcpy(tipo_taxa,"INTERMÉDIA"); 
        iva = preco_base*0.13;
        break;
    case 3:
        strcpy(tipo_taxa,"NORMAL"); 
        iva = preco_base*0.23;
        break;
    default:
        cout << "Opção inválida\n";
        break;
    }
    preco_iva= iva + preco_base;

    cout << "O produto "<<nome<<" com o preço base de "<<fixed << setprecision(2)<< preco_base<<"€ taxa de IVA "<<tipo_taxa<<" vai custar "<<fixed << setprecision(2)<<preco_iva<<"€\n O IVA vai ser de "<<fixed<<setprecision(2)<<iva<<"€\n";

    if (pode_estragar)
        cout << "Validade de "<<validade<<" dias"<<endl;
    else
        cout << "Produto não tem validade...\n";
    system("pause");			
	return 0;	
}