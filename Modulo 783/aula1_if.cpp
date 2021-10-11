#include <iostream>		
#include <locale.h>		

using namespace std;


int main()								
{

    int a,b;
    printf ("Insira o valor A:: ");
    scanf ("%d",&a);
    printf ("Insira o valor B:: ");
    scanf ("%d",&b);
    if ( a < b )
    {
        cout << "A < B" << endl;
    }
    else
    {
        cout << "A > B" << endl;
    }
    cout << "A::" << a << endl;
    cout << "B::" << b << endl;

  system("pause");
  return 0;

   
}