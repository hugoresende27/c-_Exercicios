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
    int n,contagem=1;
    cout << "Quantas linhas ? --> ";
    cin>>n;
  
    for (int i=0; i<n;i++)   
    {
        contagem=1;
        for (int j=0; j<= i ; j++)
        {
            cout << contagem; 
            contagem++;        
        }
        cout << endl;
    }
    cout << endl;
    system("pause");				
	return 0;	
}