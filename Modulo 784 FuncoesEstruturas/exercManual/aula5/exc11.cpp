/*
Entrar com valores para uma matriz C 2 x 3. Gerar e imprimir a C t.
A matriz transposta é gerada trocando linha por coluna. Veja o exemplo a seguir:
*/
#include <iostream>	
#define L 2
#define C 3	
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
            cout << (mat[i][j])<< " | ";
        }
        cout << endl;
    }
///////////////////////////////////////////////////////////////////

    cout << "#############################################\n";
    for ( int i= 0; i<C; i++){
        for (int j=0 ; j<L; j++){
            cout << (mat[j][i])<< " | ";
            //transposta[i][j]=mat[i][j];
        }
        cout << endl;
    }
    /*
    for ( int i= 0; i<C; i++){
        for (int j=0 ; j<L; j++){
            cout << (transposta[j][i])<< " | ";  
        }
        cout << endl;
    }
    */
    system("pause");				
	return 0;	
}