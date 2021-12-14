/*
Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas
vendas oferecendo desconto. Faça um programa que permita entrar com o valor
de um produto e o percentual de desconto e imprimir o novo valor com base no
percentual informado. Para fazer o cálculo, implemente uma função.
*/

#include <iostream>	
#include <iomanip>	
using namespace std;

float desc(float p, float d){
    return p * (d/100);
}

int main()								
{
    float preco, desconto;
    cout << "PREÇO --> ";
    cin >> preco;
    cout << "DESCONTO (0-100%) --> ";
    cin >> desconto;
    cout << "PREÇO COM DESCONTO "<< setprecision(3)<<fixed<< desc(preco,desconto)<<" EUROS"<<endl;
    system("pause");				
	return 0;	
}