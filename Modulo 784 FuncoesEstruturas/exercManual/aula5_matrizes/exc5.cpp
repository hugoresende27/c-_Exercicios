/*
Faça um programa que permita entrar com valores em uma matriz A de tamanho
3 X 4. Gerar e imprimir uma matriz B que é o triplo da matriz A
*/

#include <iostream>	
#define L 3
#define C 4	
using namespace std;


int main()								
{
    ////////////////////////////////INPUT DE VALORES NA  MATRIZ///////////////////////////////////////
    int mat[L][C];
    for (int i=0; i<L; i++){
        for (int j=0; j<C; j++){
            cout << "VALOR ["<<i<<"]["<<j<<"] :: ";
            cin >> mat[i][j];
        }
    }
///////////////////////////////////////////////////////////////////


    for ( int i= 0; i<L; i++){
        for (int j=0 ; j<C; j++){
            cout << (mat[i][j])*3<< "| ";
        }
        cout << endl;
    }
    
    system("pause");				
	return 0;	
}