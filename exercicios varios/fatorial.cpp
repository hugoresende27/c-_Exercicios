#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

	
    int n;
    unsigned long long factorial = 1;
    char saida;
do
{
	cout <<"Programa Factorial"<<endl;
	
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <=n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }
    
    
    
 	cout <<"\n\nSair do Programa Factorial? (S/N)"<<endl;
	cin >> saida;
		if ((saida =='S') || (saida == 's'))
				{
					cout <<"Adeus!"<<endl;
					system ("pause");
				}
		
}
	while ((saida != 's') && saida != 'S');
				

    return 0;
system ("pause");
}