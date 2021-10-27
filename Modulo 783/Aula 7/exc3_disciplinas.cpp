/*
Insira e mostre a seguinte matriz:
Disciplina
Matemática
História
Física
Geografia
*/
#include <iostream>	
#include <string.h>	
using namespace std;

int main()								
{
    char matriz [5][11];
    char temp [11];
    for (int i=0;i<4;i++)
    {
           printf ("LINHA:: %d  -->",i);
           gets(temp);
           fflush(stdin);
           strcpy(matriz[i],temp);
           cout <<"TESTE"<< matriz[i]<<endl;
    }
    cout<< "*******************************\n";
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<strlen(matriz[i]);j++)
        {
      
            printf ("%c", matriz[i][j]);
        }  
        printf ("\n");   
    }

    system("pause");				
	return 0;	
}