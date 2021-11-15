/*
Crie um programa que possibilite o armazenamento e impressão no ecrã da seguinte
estrutura (matriz):
Sapato tipo 1 50
Sapato tipo 2 60
Sapato tipo 3 40
Sapato tipo 4 30
*/
#include <iostream>	
#include <string.h>	
using namespace std;


int main()								
{
    string matriz [4][2];
    for (int i=0; i<4; i++)
    {
        for(int j=0; j<2; j++)
            {
                printf ("Insira o elemento [%d][%d]--> ", i,j);
                // fflush(stdin);
                //cin >> matriz[i][j];
                //scanf("%s", matriz[i][j]);
                getline(cin >> ws, matriz[i][j]);
            }
    }
    for (int i=0; i<4; i++)
    {
        for(int j=0; j<2; j++)
            {
             cout << matriz[i][j] << "\t";
            }
        cout <<endl;
    }
    system("pause");				
	return 0;	
}
