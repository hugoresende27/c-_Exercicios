#include <iostream>	
		
using namespace std;

int soma (int x,int y)
{
    return x+y;
}

int main()								
{
    int a,b;
    printf ("Qual o valor de A--> ");
    scanf ("%d",&a);
    printf ("Qual o valor de B--> ");
    scanf ("%d",&b);
    printf (" %d + %d = %d\n", a , b , soma(a,b) );
    system("pause");				
	return 0;	
}