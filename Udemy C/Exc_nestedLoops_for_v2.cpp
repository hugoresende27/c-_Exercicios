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
    int n,contagem=1;
    cout << "Quantas linhas ? --> ";
    cin>>n;
  
    for (int i=0; i<n;i++)   
    {
        contagem=i;
        for (int j=0; j<= i ; j++)
        {

            cout << i+1; 
            contagem++;        
        }
        cout << endl;
    }
    cout << endl;
    system("pause");				
	return 0;	
}