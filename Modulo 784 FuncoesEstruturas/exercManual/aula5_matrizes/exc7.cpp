/*
Construa um programa para ler valores para duas matrizes do tipo inteiro de
ordem 3. Gerar e imprimir a matriz diferença.
*/
#include <iostream>	
#define L 3
#define C 3	
using namespace std;


int main()								
{
    ////////////////////////////////INPUT DE VALORES NA  MATRIZ///////////////////////////////////////
    int matA[L][C];
    int matB[L][C];
    int transposta[C][L];
    for (int i=0; i<L; i++){
        for (int j=0; j<C; j++){
            cout << "VALOR MATRIZ A:: ["<<i<<"]["<<j<<"] :: ";
            cin >> matA[i][j];
        }
    }
    for (int i=0; i<L; i++){
        for (int j=0; j<C; j++){
            cout << "VALOR MATRIZ B:: ["<<i<<"]["<<j<<"] :: ";
            cin >> matB[i][j];
        }
    }
///////////////////////////////////////////////////////////////////


    for ( int i= 0; i<L; i++){
        for (int j=0 ; j<C; j++){
            cout << (matA[i][j]-matB[i][j])<< " | ";
        }
        cout << endl;
    }
    system("pause");				
	return 0;	
}