/*
Faça um programa que leia os elementos de uma matriz do tipo inteiro com
tamanho 3 X 3 e imprima os elementos multiplicando por 2.
*/


#include <iostream>	
		
using namespace std;


int main()								
{
////////////////////////////////INPUT DE VALORES NA  MATRIZ///////////////////////////////////////
    int mat[3][3];
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << "VALOR ["<<i<<"]["<<j<<"] :: ";
            cin >> mat[i][j];
        }
    }
/////////////////////////////////PRINT MATRIZ///////////////////////////////////////
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << (mat[i][j])*3 << " | ";
        }
        cout << endl;
    }
    system("pause");				
	return 0;	
}