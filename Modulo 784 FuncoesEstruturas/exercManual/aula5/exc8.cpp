/*
Faça um programa que leia uma matriz 4 X 5 de inteiros, calcule e imprima a
soma de todos os seus elementos.
*/
#include <iostream>	
#define L 4
#define C 5	
using namespace std;


int main()								
{
    ////////////////////////////////INPUT DE VALORES NA  MATRIZ///////////////////////////////////////
    int matA[L][C];
    int soma=0;
    for (int i=0; i<L; i++){
        for (int j=0; j<C; j++){
            cout << "VALOR MATRIZ A["<<i<<"]["<<j<<"] :: ";
            cin >> matA[i][j];
        }
    }
////////////////////////////////////////////////////////////
    for (int i=0; i<L; i++){
        for (int j=0; j<C; j++){
           soma+=matA[i][j];    
        }
    }

    cout << "A soma vai ser "<<soma<<endl;

    
    system("pause");				
	return 0;	
}