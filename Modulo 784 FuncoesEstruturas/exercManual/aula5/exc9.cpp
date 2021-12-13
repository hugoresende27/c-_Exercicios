/*
Construa um programa em C que leia valores inteiros para a matriz A3 x 5. Gerar e
imprimir a matriz SOMALINHA, em que cada elemento é a soma dos elementos
de uma linha da matriz A. Faça o trecho que gera a matriz separado da entrada e
da saída
*/
#include <iostream>	
#define L 3
#define C 3	
using namespace std;


int main()								
{
    ////////////////////////////////INPUT DE VALORES NA  MATRIZ///////////////////////////////////////
    int matA[L][C];
    int soma[]={0,0,0};

    for (int i=0; i<L; i++){
        for (int j=0; j<C; j++){
            cout << "VALOR MATRIZ A["<<i<<"]["<<j<<"] :: ";
            cin >> matA[i][j];
        }
    }
////////////////////////////////////////////////////////////
    for (int i=0; i<L; i++){
        for (int j=0; j<C; j++){
           soma[i]+=matA[i][j];  
        }     
    }
    for (int i=0; i<L; i++){
          cout << soma[i] << " | ";    
  
    }

   

    
    system("pause");				
	return 0;	
}