#include <iostream>					
using namespace std;

float fun(float arg)
{
    return arg*arg+arg+1;
}

int fol(long a, long b=1)
{
    return a<<b;
}

int fol(int a, char b='z')
{
    return b-a;
}

int fol(float a, float b=0)
{
    return a*b;
}



int main()								
{
    cout<<fun(fun(1.0));
    cout<<fol(1L)<<fol('x')<<fol(2e0f);
    system("pause");				
	return 0;	
}