/*
. Crie um programa que contenha um vetor de inteiros com tamanho 5. Utilizando
apenas ponteiros, leia valores e armazene neste vetor e após isso, imprima o
dobro de cada valor lido.
*/


#include <iostream>	
#define MAX 5	
using namespace std;


int main()								
{
    int vet[MAX];
    int *pt;

    for (int i=0; i<MAX;i++){
        pt = &vet[i]; //pt vai ser o endereco de memoria de vet[i]
        cout<<"INPUT:: ";
        //scanf("%d",pt);
        cin >> *pt;
    }
    for (int i=0; i<MAX;i++){
        pt = &vet[i];
        cout<<*pt * 2<<"\t | ";
        
    }

    system("pause");				
	return 0;	
}