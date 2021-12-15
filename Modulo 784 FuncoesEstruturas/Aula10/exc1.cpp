/*
Crie um programa que guarde num array 10 números inteiros recebidos do utilizador e que por intermédio de uma 
função, copie para um novo array apenas as posições ímpares do array inicial. Imprima os dois arrays no ecrã. 
Nota: Utilize apenas apontadores para manipular os arrays.
*/

#include <iostream>	
#define T 10	
using namespace std;


void imprimeArray(int *pt){
    for (int i=0; i<T;i++){
        cout << *(pt+i)<<" | ";
    }
}

void mudaArray(int *ptA, int *ptB){
    int cont=0;
    for (int i=0; i<T;i++){ 
        if (i % 2 != 0){
            *(ptB+cont) = *(ptA+i);
            cont++;
        }
    }
}

int main()								
{
    int arrA[T];
    int arrB[5];
    int *pontA = arrA;// pontA aponta para arrA
    int *pontB = arrB;// pontB aponta para arrB

    for (int i=0; i<T; i++){
        cout << "Posição "<<i+1<<"--> ";
        cin >> arrA[i];
    }

    imprimeArray(pontA);
    cout << "###################################\n";
    mudaArray(pontA,pontB);
    cout << "###################################\n";
    for (int i=0; i<5;i++){
        cout << arrB[i] <<" | ";
    }
    system("pause");				
	return 0;	
}