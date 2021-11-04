#include <iostream>		
using namespace std;
/*PRINT NUMEROS DE 1...n*/

int main()								
{
    int n,x=1;
    cout<<"Imprimir até onde?--> ";
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cout << " -> " << i;
    }
    cout<< "\n*****************\n";
    while (x<=n)
    {
        cout << " -> " << x;
        x++;
    }
    system("pause");				
	return 0;	
}