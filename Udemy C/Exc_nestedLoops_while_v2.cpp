#include <iostream>	
#include <string.h>		
using namespace std;
/*
1
22
333
4444
55555
*/

int main()								
{
    int n,aux=1;
    cout << "Quantas linhas ? --> ";
    cin>>n;
    int lin=1,col=1;
    while (lin<=n)
    {
        lin=1;
        while (lin <= col)
        {
            printf("%d", aux);
            lin++;
        }
       printf ("\n");
       col++;
       aux=lin;
    }
 
    system("pause");				
	return 0;	
}