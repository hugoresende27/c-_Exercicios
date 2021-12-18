/*
Construa uma função que, recebendo como parâmetros quatro números inteiros,
devolva ao módulo que o chamou os dois maiores números dentre os quatro recebidos. 
Faça um programa que leia tantos conjuntos de quatro valores quantos o
usuário deseje e que acione a função para cada conjunto de valores, apresentando
a cada vez os dois maiores números. Se preferir, utilize vetor para armazenar o
conjunto de valores.
*/

#include <iostream>	
		
using namespace std;

void obtemNums(int *vet, int *pMaior, int *pMaiorB);//funcao recebe params vetor, 2 apontadores 

int main()								
{
    int v[4];
    int maiorA, maiorB;
    for (int i=0; i<4 ; i++){
        cout << "NUM:: ";
        scanf("%d", &v[i]);     //inserir valores no vetor
    }

    obtemNums(v , &maiorA, &maiorB);    
    cout << "MAIOR 1 "<<maiorA;
    cout << "MAIOR 2 "<<maiorB;
    system("pause");				
	return 0;	
}

void obtemNums(int *vet, int *pMaior, int *pMaiorB){
    int aux;
    for (int i=0; i<4; i++){                //primeiro loop 
        for (int j=i+1; j<4; j++){          //segundo loop de i+1 ate 4
            if (vet[i] < vet[j]){           //se j>i
                aux=vet[i];             //aux recebe i
                vet[i]=vet[j];          //i recebe j
                vet[j]=aux;             //j recebe aux, vai ordenar o vetor do maior para o mais pequeno
            }
        }
    }
    *pMaior = vet[0];       //o maior está no [0] e a seguir [1]
    *pMaiorB = vet[1];
}