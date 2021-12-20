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
*p1,*p2
int aux,i;
for (int j=2;j<MAX;j++){
    aux = *p1;
    i = j-1;}
while (i>0 && *p2>aux){
    *(p2+i)=*p1
    i = i-1}
*(p2+i)=aux;

*/
#include <iostream>	
#include <string.h>
#include <math.h>	
#define MAX 5	
using namespace std;

void insercao ( int v[])
{
    for (int j = 1; j < MAX; ++j) {
    int x = v[j];
    int i = j - 1;
    while (i >= 0 && v[i] > x) { 
        v[i+1] = v[i];
        --i; }
    v[i+1] = x; }
    cout << endl;
}


void ordenavet(int *p1, int *p2){
    int aux,i;
    for (int j=1;j<MAX;j++){
        if (*(p1+i)>*(p1+j)){
            aux = *(p1+i);
            i = j-1;
        }
        while (i>=0 && *(p1+i)>aux){
            *(p1+i+1)= *(p2+i);
            i = i-1;
            }
    *(p2+j+1)=aux;
    }
    cout << endl;
}
void ordenavetB(int *p1){
    int aux,i;
    for (int j=1;j<MAX;j++){
        if (*(p1+i)>*(p1+j)){
            aux = *(p1+i);
            i = j-1;
        }
        while (i>=0 && *(p1+i)>aux){
            *(p1+i+1)= *(p1+i);
            i = i-1;
            }
    *(p1+j+1)=aux;
    }
    cout << endl;
}

void imprimeVetor(int *p){
    for (int i=0; i<MAX; i++){
        cout << *(p+i)<<" | ";
    }
}

int main()								
{
    int vet[MAX];
    int vet2[MAX];
    int *pt = vet;
    int *pt2 = vet2;
    for (int i=0; i< MAX; i++){
        cout << "Valor :: ";
        cin >>vet[i];
    }

    imprimeVetor(vet);
    ordenavetB(vet);
    imprimeVetor(vet2);


    //insercao(vet);
    //imprimeVetor(pt);
    cout << endl;
    system("pause");				
	return 0;	
}