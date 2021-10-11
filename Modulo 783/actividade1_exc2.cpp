#include <iostream>					
using namespace std;


int main()								
{
    int a,b,c;
    printf ("Insira o valor A:: ");
    scanf ("%d",&a);
    printf ("Insira o valor B:: ");
    scanf ("%d",&b);
    printf ("Insira o valor C:: ");
    scanf ("%d",&c);

    if ( a > b && a > c)
    {
        cout << "O maior é o A-->" << a << endl;
    }
    else if ( b > a && b > c)
    {
        cout << "O maior é o B-->" << b << endl;
    }
    else if ( c > a && c > b)
    {
         cout << "O maior é o C-->" << c << endl;
    }
    
    else 
    {
        cout << "Existem valores iguais\n";
    }
    
    cout << "A::" << a << endl;
    cout << "B::" << b << endl;
    cout << "C::" << c << endl;

    system("pause");				
	return 0;	
}