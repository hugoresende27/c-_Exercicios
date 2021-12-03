
#include <iostream>	
		
using namespace std;


int main()								
{
    int x,y;
    int *ptr; //apontador 
    x=5;
    y = 25;
    ptr = &x; //apontador aponta para endereco de x

    printf ("valor do valor do apontador *ptr = %d\n",*ptr);
    printf ("valor da var x = %d\n", x);
    printf ("endereco da var x = %p\n", &x);
    printf ("endereco do apontador ptr = %p\n", &ptr);
    printf ("valor de ptr = %p\n", ptr);

    

     *ptr=10; //valor do apontador é 10
     cout << "::::"<<*ptr<<endl;
    // printf ("Agora x vale %d\n",*ptr); //10
    // printf ("Agora ptr vale %p\n", ptr);     //10

    ptr = &y;
    printf ("valor do valor do apontador *ptr = %d\n",*ptr);
    printf ("endereco do apontador ptr = %p\n", &ptr);
    printf ("valor de ptr = %p\n", ptr);

    *ptr = 666;
    printf ("valor do valor do apontador *ptr = %d\n",*ptr);
    printf ("endereco do apontador ptr = %p\n", &ptr);
    printf ("valor de ptr = %p\n", ptr);

    // cout << &ptr<<endl;
    // cout << ptr<<endl;
    // cout << *ptr<<endl;

    // cout << &x<<endl;
    // cout << x<<endl;
    

    system("pause");				
	return 0;	
}