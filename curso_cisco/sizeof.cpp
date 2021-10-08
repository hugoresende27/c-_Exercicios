#include <iostream>					
using namespace std;


int main()								
{
    int i;
    float f;
    short int si;
    long int li;
    double d;
    bool b;
    char c;
    
    printf ("inteiro tem %i bytes\n",sizeof(i));
    printf ("inteiro pointer tem %i bytes\n",sizeof(int *));
    printf ("float tem %i bytes\n",sizeof(f));
    printf ("short int tem %i bytes\n",sizeof(si));
    printf ("long int tem %i bytes\n",sizeof(li));
    printf ("double tem %i bytes\n",sizeof(d));
    printf ("bool tem %i bytes\n",sizeof(b));
    printf ("char tem %i bytes\n",sizeof(c));
    
    system("pause");				
	return 0;	
}