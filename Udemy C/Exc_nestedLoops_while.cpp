#include <iostream>	
#include <string.h>		
using namespace std;
/*
1
12
123
1234
12345
123456
*/

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