/*
Faça um programa que modifique as vogais de uma frase. O programa deve ler uma frase (max. 100 caracteres) e 
armazeá-la num vetor. Imprimir a frase lida trocando as vogais, isto é, trocar 'a' pelo 'u', 'e' pelo 'o', 'i'
pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'. Usar uma função void (procedimento) para realizar a troca e uma função 
para realizar a impressão da frase trocada. A função deve ter como parâmetro um ponteiro char referente ao vetor.
Dica: Use a função gets() da biblioteca string.h para realizar a leitura da frase. use o switch para realizar as
trocas. Só considere as letras minúsculas.
 */
#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

char * trocaVogais(char *vet){
    int i;
    for (i=0; i<100;i++){
        if (vet[i] == '\0') break;
    }
    //cout << strlen(vet);
    int tam=i;
    for (int j=0; j<strlen(vet);j++){
        switch (vet[j])
        {
        case 'a':
            vet[j]='u';
            break;
        case 'e':
            vet[j]='o';
            break;
        case 'i':
            vet[j]='u';
            break;
        case 'o':
            vet[j]='a';
            break;
        case 'u':
            vet[j]='e';
            break;
        default:
            break;
        }
    }
    return vet;
}

int main()								
{
    char frase[100];
    cout << "Qual a frase?? ";
    fgets(frase,100,stdin);
    cout << trocaVogais(frase);
    cout << endl;
    system("pause");				
	return 0;	
}