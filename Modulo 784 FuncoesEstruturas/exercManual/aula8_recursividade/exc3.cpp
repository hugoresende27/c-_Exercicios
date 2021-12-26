/*
Considere um vetor vet de tamanho 20. Construa um programa com algoritmos
recursivos para calcular:
• o elemento máximo do vetor;
• o elemento mínimo do vetor;
• a soma dos elementos do vetor;
• o produto dos elementos do vetor;
• a média dos elementos do vetor.
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////
int maximo(int *v, int tam){ //funcao recebe o vetor e o tamanho do vetor
    if (tam == 1) return v[0];  //se o tamanho for 1, return no elemento 0
    else {
        int aux;        
        aux = maximo(v, tam-1);     //aux vai receber a função com o vetor e tamanho - 1
        if (aux>v[tam-1]) return aux;//se aux for maior do que o elemento do vetor, aux é o maior
        else return (v[tam-1]);     //senão maior é o próprio elemento
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////
int minimo(int *v, int tam){
    if (tam == 1) return v[0];
    else {
        int aux;
        aux = minimo(v, tam-1);
        if (aux < v[tam-1]) return aux;
        else return (v[tam-1]);
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////
int soma(int *v, int pos){
    if (pos > 0) {
        return v[pos] + soma(v, pos-1);
    }
    else {
        return v[pos];
    }
    
}
//////////////////////////////////////////////////////////////////////////////////////////////
int produto(int *v, int pos){
    if (pos > 0) {
        return abs(v[pos] * produto(v, pos-1));
    }
    else {
        return abs(v[pos]);
    }
    
}
//////////////////////////////////////////////////////////////////////////////////////////////
float media(int *v, int pos,int tam){
    if (pos == tam-1) {
        return (v[pos] + media(v, pos-1,tam))/tam;
    }
    if (pos > 0 && pos != tam-1){
        return v[pos]+ media(v,pos-1, tam);
    }
    else {
        return (v[pos]);
    }
    
}

int main()								
{
    int vet[]={55,22,13,4,5,6,7,8,9,10,69,12,2,14,15,16,17,18,19,20};
    printf("O maior %d\n", maximo(vet,20));
    printf("O menor %d\n", minimo(vet,20));
    printf("A Soma  %d\n", soma(vet,19));
    printf("A Produto  %d\n", produto(vet,19));
    printf("A Media  %d\n", media(vet,19,20));
    cout << endl;
    system("pause");				
	return 0;	
}