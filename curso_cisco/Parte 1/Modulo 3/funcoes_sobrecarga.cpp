#include <iostream>					
using namespace std;

float maior(float a, float b)
{
    int m = a;
    if (b > m)
        m = b;
    return m;
}

float maior(float a, float b, float c)  
{
    int m = a;
    if (b > m)
        m = b;
    if (c > m)
        m = c;
    return m;
}

int main()								
{
    cout<<"O maior de 5,1 é o "<< maior(5,1)<<endl;     //sobrecarga da função , consoante o número de parametros vai ser usada maior()
    cout<<"O maior de 5,6,7 é o "<< maior(5,6,7)<<endl;
    system("pause");				
	return 0;	
}