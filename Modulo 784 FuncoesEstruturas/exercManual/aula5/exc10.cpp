/*
Construa um programa em C que leia valores inteiros para a matriz A3 x 5. Gerar e
imprimir a matriz SOMACOLUNA, em que cada elemento é a soma dos elementos
de uma coluna da matriz A. Faça o trecho que gera a matriz separado da entrada
e da saída.
*/
#include <iostream>	
#define L 3
#define C 5	
using namespace std;


int main()								
{
    ////////////////////////////////INPUT DE VALORES NA  MATRIZ///////////////////////////////////////
    int matA[L][C];
    int somaC[]={0,0,0,0,0};

    for (int i=0; i<L; i++){
        for (int j=0; j<C; j++){
            cout << "VALOR MATRIZ A["<<i<<"]["<<j<<"] :: ";
            cin >> matA[i][j];
        }
    }
////////////////////////////////////////////////////////////
    for (int j=0; j<C; j++){        //inverti os ciclos, percorri primeiro as colunas e depois as linhas    
        for (int i=0; i<L; i++){
           somaC[j]+=matA[i][j];
            
        }     
    }
    for (int i=0; i<C; i++){
          cout << somaC[i] << " | ";    
  
    }

    system("pause");				
	return 0;	
}