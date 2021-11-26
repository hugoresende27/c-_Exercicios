#include <iostream>	
		
using namespace std;


int main()								
{
    int a, *ptr, **ptr2;
    a=9;
    printf ("\nVALOR DE a = %d", a);
    printf ("\nENDERECO DE MEMORIA DE a = %x", &a); //x	Unsigned hexadecimal integer	7fa


    
    ptr = &a;
    ptr2 = &ptr;
    *ptr += 5;
    printf ("\nVALOR DE a = %d", a);
    printf ("\nAPONTADOR ptr a = %x", ptr);
    printf ("\nENDERECO MEMORIA APONTADOR ptr a = %x", &ptr);
    printf ("\nvar a apontada por ptr a = %d", *ptr);//valor da própria var a

    **ptr2 = **ptr2 + 10;
    printf ("\nVALOR DE a = %d", a);
    printf ("\nAPONTADOR **ptr2 a = %x", ptr2);
    printf ("\nENDERECO MEMORIA APONTADOR ptr a = %x", &ptr2);
    printf ("\nvar a apontada por ptr a = %d", **ptr2);
    cout <<endl;
    system("pause");				
	return 0;	
}