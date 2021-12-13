/*
Crie um programa que leia e armazene os elementos de uma matriz inteira com
tamanho 5 X 5 e imprimi-la. Troque, a seguir:
• a segunda linha pela quinta;
• a terceira coluna pela quinta;
• a diagonal principal pela diagonal secundária
*/
#include <iostream>	
#define L 5
#define C 5
using namespace std;


int main()								
{
    ////////////////////////////////INPUT DE VALORES NA  MATRIZ///////////////////////////////////////
    int mat[L][C];
    int aux=0;
    for (int i=0; i<L; i++){
        for (int j=0; j<C; j++){
            cout << "VALOR ["<<i<<"]["<<j<<"] :: ";
            cin >> mat[i][j];
        }
    }

 ////////////////////////////////////////////////////print da matriz
    
    for ( int i= 0; i<L; i++){
        for (int j=0 ; j<C; j++){
            cout << (mat[i][j])<< " | ";
        }
        cout << endl;
    }
////////////////////////////////////////////////////
    for (int i=0; i<C; i++){//a segunda linha pela quinta;
        aux = mat[1][i];
        mat[1][i]=mat[4][i];
        mat[4][i] = aux;
    }

    ////////////////////////////////////////////////////print da matriz
    cout << "SEGUNDA PELA TERCEIRA LINHA\n";
    for ( int i= 0; i<L; i++){
        for (int j=0 ; j<C; j++){
            cout << (mat[i][j])<< " | ";
        }
        cout << endl;
    }

    /////////////////////////////////• a diagonal principal pela diagonal secundária
    int aux2=0;

    for ( int i= 0; i<L; i++){
        for (int j=0 ; j<C; j++){
            if (i==j){
                aux2 = mat[i][j];
                mat[i][j]=mat[4-i][4-j];
                mat[4-i][4-j] = aux2;
            }
        }
    }
      ////////////////////////////////////////////////////print da matriz
    cout << "diagonal principal pela diagonal secundária\n";
    for ( int i= 0; i<L; i++){
        for (int j=0 ; j<C; j++){
            cout << (mat[i][j])<< " | ";
        }
        cout << endl;
    }

       //////////////////////////////////////////////////////////NAO FUNCIONA
       /*
    for (int i=0; i<L; i++){//a terceira coluna pela quinta;
        aux = mat[i][2];
        mat[i][2]=mat[i][4];
        mat[i][4] = aux;
    }
    

    for (int i=0; i<5; i++) {
            aux = mat[i][2];
            mat[i][2] = mat[i][4];
            mat[i][4] = aux;
        }
        
     ////////////////////////////////////////////////////print da matriz
    cout << "TERCEIRA PELA QUINTA COLUNA\n";
    for ( int i= 0; i<L; i++){
        for (int j=0 ; j<C; j++){
            cout << (mat[i][j])<< " | ";
        }
        cout << endl;
    }
*/
 
    system("pause");				
	return 0;	
}