#include <iostream>	
		
using namespace std;
#define MAX 2

int main()								
{
    int matriz [MAX][MAX];
    for (int i=0;i<MAX;i++)
    {
        for (int j=0;j<MAX;j++)
        {
            printf ("input :: %d : %d--> ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for (int i=0;i<MAX;i++)
    {
        for (int j=0;j<MAX;j++)
        {
            printf ("[%d]",matriz[i][j]);
        }
        printf ("\n");
    }

    system("pause");				
	return 0;	
}