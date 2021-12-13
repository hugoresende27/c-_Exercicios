#include <iostream>	
#define L 2
#define C 2	
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
    system("pause");				
	return 0;	
}