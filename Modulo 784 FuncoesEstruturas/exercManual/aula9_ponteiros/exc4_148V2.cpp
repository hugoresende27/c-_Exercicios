/*
Elabore um programa que leia um valor do tipo inteiro e, por meio de função,
atualize todas as posições de um vetor com o número inteiro lido, depois imprima
os valores. Utilize ponteiros para as operações
*/

#include <iostream>	
#define M 10	
using namespace std;

void fun (int v, int *pt);

int main()								
{
    int vet[M],val;     
    int *pt = vet;  //apontador pt vai apontar para a primeira posição do vet[0]
    cout << "valor:: ";
    cin >> val;
    fun(val, pt);       
    for (int i=0; i<M; i++){
        //cout << vet[i] << " | ";        //imprime o vetor, aqui os indexes de vet já estão preenchido com val
        cout << *(vet+i) << " ll ";        //imprime o vetor, aqui os indexes de vet já estão preenchido com val
    }
    system("pause");				
	return 0;	
}

void fun (int v, int *pt){      //fun receber o valor e o apontador 
    for (int i=0; i<M; i++){        
        *(pt+i)=v;              //conteudo de apontador +i vai receber o valor
}
}