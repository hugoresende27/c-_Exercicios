/*C++ program to find power of a number using recursion*/

#include <iostream>	
#include <math.h>

using namespace std;


double elevado(double base, int exp)
{
    if (exp==0)
        return 1;
    else 
        if (exp > 0)
            return base * pow(base, exp -1);
        else
            return 1 / pow(base, -exp);
}

int main()								
{
    int base,exp;
    cout << "Bem vindo, qual a base?--> ";
    cin>>base;
    cout << "Expoente?--> ";
    cin>>exp;
    cout << elevado(base,exp)<<endl;
    system("pause");				
	return 0;	
}