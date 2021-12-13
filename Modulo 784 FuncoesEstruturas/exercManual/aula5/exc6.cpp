/*
Crie um programa que leia valores inteiros em uma matriz A[2][2] e em uma
matriz B[2][2]. Gerar e imprimir a matriz SOMA[2][2]
*/
#include <iostream>	
#define L 2
#define C 2	
using namespace std;


int main()								
{
    ////////////////////////////////INPUT DE VALORES NA  MATRIZ///////////////////////////////////////
    int matA[L][C];
    int matB[L][C];
    int soma[L][C];
    for (int i=0; i<L; i++){
        for (int j=0; j<C; j++){
            cout << "VALOR MATRIZ A["<<i<<"]["<<j<<"] :: ";
            cin >> matA[i][j];
        }
    }
    for (int i=0; i<L; i++){
        for (int j=0; j<C; j++){
            cout << "VALOR MATRIZ B["<<i<<"]["<<j<<"] :: ";
            cin >> matB[i][j];
        }
    }
///////////////////////////////////////////////////////////////////


    for ( int i= 0; i<L; i++){
        for (int j=0 ; j<C; j++){
            soma[i][j]= matA[i][j] + matB[i][j];
        }
    }

    for ( int i= 0; i<L; i++){
        for (int j=0 ; j<C; j++){
            cout << (soma[i][j])<< "| ";
        }
        cout << endl;
    }

    
    
    system("pause");				
	return 0;	
}