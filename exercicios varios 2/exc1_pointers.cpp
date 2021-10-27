/*
Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b' respectively. There are also two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.
*/
#include <iostream>	
		
using namespace std;


int main()								
{
    int a,b;
    printf ("Pointer A--> ");
    scanf ("%d",&a);
    printf ("Pointer B--> ");
    scanf ("%d",&b);
    int *ptrA = &a;
    int *ptrB = &b;
    printf ("Valor de a: %d guardado no apontador ptrA: %d\n",a,*ptrA);
    printf ("Valor de b: %d guardado no apontador ptrB: %d\n",b,*ptrB);

    system("pause");				
	return 0;	
}