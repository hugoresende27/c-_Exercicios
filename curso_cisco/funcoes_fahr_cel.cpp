#include <iostream>					
using namespace std;

float fahr_cel(float x)
{
    float fahr=((x-32)*5)/9;
    return fahr;
}

void funcao_teste(float x)
{
    cout<<"Fahrnheit " << x <<" graus corresponde a ";
    cout<<fahr_cel(x)<<" graus Celsius\n";
}

int main()								
{
    funcao_teste(32);
    funcao_teste(212);
    funcao_teste(451);
    system("pause");				
	return 0;	
}