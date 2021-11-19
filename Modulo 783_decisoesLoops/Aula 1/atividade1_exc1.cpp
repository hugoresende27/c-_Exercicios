#include <iostream>					
using namespace std;


int main()								
{
    system ("color 4E"); 
    int a,b;
    printf ("Insira o valor A:: ");
    scanf ("%d",&a);
    printf ("Insira o valor B:: ");
    scanf ("%d",&b);
    if ( a < b )
    {
        cout << "A < B" << endl;
    }
    else if (a > b)
    {
        cout << "A > B" << endl;
    }
    else
    {
        cout << "São iguais" << endl;
    }
    cout << "A::" << a << endl;
    cout << "B::" << b << endl;

    system("pause");				
	return 0;	
}