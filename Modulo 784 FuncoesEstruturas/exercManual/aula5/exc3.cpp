/*
Crie um programa que armazene dados inteiros em uma matriz de ordem 5 e
imprima: Todos os elementos que se encontram em posições cuja linha mais
coluna formam um número par.
*/

#include <iostream>	
#define M 3	
using namespace std;


int main()								
{
    ////////////////////////////////INPUT DE VALORES NA  MATRIZ///////////////////////////////////////
    int mat[M][M];
    for (int i=0; i<M; i++){
        for (int j=0; j<M; j++){
            cout << "VALOR ["<<i<<"]["<<j<<"] :: ";
            cin >> mat[i][j];
        }
    }
    /////////////////////////////////////////////////////////////////////////
   
    for (int i=0; i<M; i++){
        for (int j=0; j<M; j++){        
            if ( (i+j) % 2 == 0){
                cout << mat[i][j] << " | ";
            }
        }
    }
    
    system("pause");				
	return 0;	
}