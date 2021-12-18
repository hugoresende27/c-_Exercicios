/*
Construa um programa que armazene dados em uma matriz de ordem 4 e imprima: Todos os elementos com números ímpares.
*/
#include <iostream>	
#define L 4
#define C 4
using namespace std;


int main()								
{
    ////////////////////////////////INPUT DE VALORES NA  MATRIZ///////////////////////////////////////
    int mat[L][C];
    int transposta[C][L];
    for (int i=0; i<L; i++){
        for (int j=0; j<C; j++){
            cout << "VALOR ["<<i<<"]["<<j<<"] :: ";
            cin >> mat[i][j];
        }
    }
///////////////////////////////////////////////////////////////////


    for ( int i= 0; i<L; i++){
        for (int j=0 ; j<C; j++){
            if ((mat[i][j]) % 2 != 0) cout << (mat[i][j])<< " | ";
        }
        cout << endl;
    }
    system("pause");				
	return 0;	
}