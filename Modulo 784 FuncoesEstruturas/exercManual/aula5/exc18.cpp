/*
. Faça um programa que leia uma matriz 5 X 5 inteira e apresente uma determinada
linha da matriz, solicitada via teclado
*/
#include <iostream>	
#define L 2
#define C 2	
using namespace std;


int main()								
{
    ////////////////////////////////INPUT DE VALORES NA  MATRIZ///////////////////////////////////////
    int mat[L][C];
    int qual;
    for (int i=0; i<L; i++){
        for (int j=0; j<C; j++){
            cout << "VALOR ["<<i<<"]["<<j<<"] :: ";
            cin >> mat[i][j];
        }
    }
///////////////////////////////////////////////////////////////////


    for ( int i= 0; i<L; i++){
        for (int j=0 ; j<C; j++){
            cout << (mat[i][j])<< " | ";
        }
        cout << endl;
    }

    do{
        cout << "Qual a linha? --> ";
        cin >> qual;
    }while (qual <=0 || qual > L);
  
    for (int i=0;i<C;i++){
        cout << mat[qual-1][i]<<" | ";
    }
    system("pause");				
	return 0;	
}