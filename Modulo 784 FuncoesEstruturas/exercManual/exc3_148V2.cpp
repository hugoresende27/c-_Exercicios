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
    int *pt=vet;

    for (int i=0; i<MAX;i++){
    
        cout<<"INPUT "<<i<<" :: ";
        cin >> *(pt+i);
        //scanf ("%d", (pt+i));
        //printf("%d", vet[i]);
        printf ("%d \t", *(pt+i)*2);
    }
    for (int i=0; i<MAX;i++){
    
        printf ("%d \t", *(pt+i)*2);
        
    }

    system("pause");				
	return 0;	
}

#include <iostream>
using namespace std;
#define MAX 5

void atualizaValor(int *vet, int a){

	for(int i=0; i<MAX; i++){
		*(vet + i) = a;
	}	
}
