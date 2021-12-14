/*
 O departamento comercial da Batatinha S/A necessita atualizar os valores de
seus produtos no seu catálogo de vendas. O presidente ordenou um reajuste de
4.78% para todos os itens. São 15 itens no catálogo. Sua tarefa é elaborar um
programa que leia o valor atual dos produtos e armazene em um vetor, e após isso
efetue o reajuste no valor dos produtos. O reajuste (acesso ao vetor) deverá ser
feito utilizando ponteiros. Imprima na tela o valor reajustado, usando também
ponteiros
*/
#include <iostream>	
#define M 5		
using namespace std;


int main()								
{
    float precos[M];
    float *pt=precos;
    float val,novoPreco;
    for (int i=0; i<M;i++ ){
        cout << "Preco "<<i+1<<"--> ";
        cin >> val;
        *(pt+i)=val;
    }

    for (int i=0; i<M;i++ ){
        cout << *(pt+i)<<" | ";
    }
    cout << "############################\n";

    for (int i=0; i<M;i++ ){
        novoPreco = ((*(pt+i)) * 0.0478) + (*(pt+i));
        cout << novoPreco <<" | ";
    }
    system("pause");				
	return 0;	
}