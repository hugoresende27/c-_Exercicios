/*
8.	Construa um algoritmo para pagamento de comissão de vendedores de peças, levando-se em consideração que a sua comissão será de 5% do total da venda e que o utilizador  tem os seguintes dados:
a.	 Identificação do vendedor
b.	Código da peça
c.	Preço unitário da peça
d.	Quantidade vendida
*/
#include <iostream>					
using namespace std;
int main()								
{
    char vendedor[10];
    int qtd,idPeca;
    float preco_unit,total;
    cout<<"Nome do vendedor--> ";
    cin>>vendedor;
    cout<<"Código da peça--> ";
    cin>>idPeca;
    cout<<"Preço Unitário--> ";
    cin>>preco_unit;
    cout<<"Quantidade--> ";
    cin>>qtd;
    total=preco_unit*qtd;
    cout<<"O vendedor "<<vendedor<<" vendeu "<<qtd<<" peças com o código "<<idPeca<<" sendo o total de "<<total<<"€ e o total com desconto de 5%:: "<<(total-(total*0.05))<<"€"<<endl;;
    system("pause");				
	return 0;	
}