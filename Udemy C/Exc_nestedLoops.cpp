#include <iostream>	
#include <string.h>		
using namespace std;


int main()								
{
    int n;
    cout << "Quantas linhas ? --> ";
    cin>>n;
    int lin=1,col=1;
    while (lin<=n)
    {
        lin=1;
        while (lin <= col)
        {
            printf("%d", lin);
            lin++;
        }
       printf ("\n");
       col++;
    }
    system("pause");				
	return 0;	
}