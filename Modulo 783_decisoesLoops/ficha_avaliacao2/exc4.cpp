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
                if (i%2==0)
                {
                    printf ("Insira o tipo [%d][%d]--> ", i,j);
                    getline(cin , matriz[i][j]);
                } else {
                    printf ("Insira o código [%d][%d]--> ", i,j);
                    getline(cin , matriz[i][j]);
                }              
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

    string pesquisa;
    cout << "Qual o produto a pesquisar? --> ";
    getline(cin, pesquisa);
    for (int i=0; i<4; i++)
    {
        if (strcmp(matriz[i][1].c_str(),pesquisa.c_str())==0)
        {
            cout << matriz[i][0];
        }
        
    }
    system("pause");				
	return 0;	
}
