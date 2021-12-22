/*
Escreva um programa que, dados 5 números inteiros, recebidos do teclado e guardados
num array, retorne o maior e o menor desses valores. Utilize uma função (maxmin) que
verifique o maior e o menor valor do array, passado por referência e retornando um array
com esses dois valores (na posição 1 o maior e na posição 2 o menor). Imprima esses
valores no ecrã, bem como o vetor recebido.
Exemplo: dados os números, 5, 3, 1, 9, 10. Resultado: maiorMenor[0] = 10,
maiorMenor[1] = 1
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

int vet2[2];

void printArray(int *vet){
    for (int i=0; i<5;i++){
        cout <<*(vet+i)<< " | ";
    }
}

int * maxmin(int *arr){
    int *pt = vet2;
    int maior=0;
    int menor = arr[0];
    for (int i=0; i<5;i++){
        if (*(arr+i)<menor){
            menor = *(arr+i);
        }
        if(*(arr+i)>maior){
            maior = *(arr+i);
        }
       
    }
    *(pt+0) = maior;
    *(pt+1) = menor;
    return vet2;
}

int main()								
{
    int vet[5];
    int *ptr;
    for (int i=0; i<5;i++){
        cout << "Valor "<< i+1<< " :: ";
        cin >> vet[i];
    }
    printArray(vet);

    cout<<"\nVETOR maxmin\n";
    ptr=maxmin(vet);
    for (int i=0; i<2;i++){
        cout <<*(ptr+i)<< " - ";
    }
    cout << endl;
    system("pause");				
	return 0;	
}