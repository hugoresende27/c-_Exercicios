#include <iostream>					
using namespace std;

float quadrado(float x)
{
    float resultado=x*x;
    return resultado;
}


int main()								
{
    float valor;
    printf ("Qual o valor?-> ");
    scanf("%f",&valor);
    printf("%.2f",quadrado(valor));
    cout<<endl;
    system("pause");				
	return 0;	
}