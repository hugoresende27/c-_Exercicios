/*
Elabore um programa que leia um valor do tipo inteiro e, por meio de função,
atualize todas as posições de um vetor com o número inteiro lido, depois imprima
os valores. Utilize ponteiros para as operações.
*/
#include <iostream>	
	
using namespace std;

void fun(int *pt, int n){
    for (int i=0; i<5; i++){
        *(pt+i) = n;
    }
}

void fun2(int *v, int num){
    int *pt;            //instanciar o apontador
    for (int i=0; i<5;i++){
        pt = &v[i]; //apontador aponta para endereço de memoria do apontador q recebe, que aponta para o vetor, posição vai avançando com o i
        *pt = num;//conteudo de pt vai ser o num
    }
}

int main()								
{
    int val;
    int vet[]={1,2,3,4,5};
    int *pt = vet;

    for (int i=0; i<5;i++){
        cout << vet[i]<< " | ";
    }
    cout << "VAL:: ";
    cin >> val;
    //fun(pt,val);
    fun2(pt,val);
    for (int i=0; i<5;i++){
        cout << vet[i]<< " | ";
    }
    system("pause");				
	return 0;	
}