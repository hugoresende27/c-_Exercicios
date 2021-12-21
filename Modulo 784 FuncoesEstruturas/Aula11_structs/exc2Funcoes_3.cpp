/*
Faça um programa que leia um vetor com tamanho 10 de números inteiros. Após ler, uma função deve criar um novo vetor com base no primeiro (passe o vetor por referência), mas, o novo vetor deve ser ordenado de forma crescente (utilize uma outra função de ordenação que receba o vetor por referência. O programa deve imprimir este novo vetor após a ordenação. Nota: para realizar a ordenação do vetor, poderá utilizar o algoritmo de "ordenação por inserção", colocado abaixo.
Algoritmo de "ordenação por inserção" em português estruturado
para j ← 2 até comprimento faça         
    elemento ← v[j]                                
    i ← j - 1                                      
 enquanto (i > 0 e v[i] > elemento) faça
     v[i + 1] ← v[i]
     i ← i - 1
 fimenquanto
 v[i + 1] ← elemento
fimpara
///////////////////////////////////
*vet
int aux,i;
for (int j=1;j<MAX;j++){
    aux = vet[j];
    i = j-1;}
while (i>0 && vet[i]>aux){
    vet[i+1]=vet[i]
    i = i-1}
vet[i+1]=aux;

*/
#include <iostream>	
#include <string.h>
#include <math.h>	
#define MAX 3	
using namespace std;


int * ordenavetB(int *vet){
    int aux,i;
    for (int j=1;j<MAX;j++){
        aux = vet[j];
        i = j-1;
        
        while (i>=0 && vet[i]>aux){
            vet[i+1]=vet[i];
            i = i-1;
            }
    vet[i+1]=aux;
    }
    return vet;
}



void imprimeVetor(int *p){
    for (int i=0; i<MAX; i++){
        cout << *(p+i)<<" | ";
    }
    cout<<endl;
}

int * copiarVetor(int *vet, int *vet2){
    
    for (int i=0; i<MAX; i++){
        vet2[i]=vet[i];
    }
    ordenavetB(vet2);
    return vet2;
}

int main()								
{
    int vet[MAX];
    int vet2[MAX];
    int *pt = vet;
    for (int i=0; i< MAX; i++){
        cout << "Valor :: ";
        cin >>vet[i];
    }

    //imprimeVetor(vet);
    //ordenavetB(vet);
    copiarVetor(vet,vet2);
    imprimeVetor(vet2);
    imprimeVetor(vet);


    //insercao(vet);
    //imprimeVetor(pt);
    cout << endl;
    system("pause");				
	return 0;	
}