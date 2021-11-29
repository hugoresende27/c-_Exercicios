
#include <iostream>	
		
using namespace std;


int main()								
{
    int a,b,c;
    int *ptr1, *ptr2;
    a=90;
    b = 2;
    c = 3;

    ptr1 = &a;
    ptr2 = &b;
    printf ("A(*ptr1) : %d e B(*ptr2) : %d\n",*ptr1,*ptr2);
    printf ("A : %d e B : %d\n",a,b);

    ptr2 = &a;
    ptr1 = &b;
    printf ("A(*ptr1) : %d e B(*ptr2) : %d\n",*ptr2,*ptr1);
    printf ("A : %d e B : %d\n",a,b);
    system("pause");				
	return 0;	
}