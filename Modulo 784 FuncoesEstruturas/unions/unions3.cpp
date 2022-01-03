#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

struct abc1 {
    int a;
    float b;
};

union abc2 {        //union têm o mesmo endereço de memória
    int a;
    float  b;
};

int main()								
{
    struct abc1 x;
    union abc2 z;

    cout << &x.a <<endl;
    cout << &x.b <<endl;


    cout << &z.a <<endl; 
    cout << &z.b <<endl; 
    cout << endl;
    system("pause");				
	return 0;	
}