#include <iostream>
#include <stdio.h>
using namespace std;

int main ()
{

    float euros,valorS,cambio;
    cout<<"Programa Converte € em $ ....\nQual o valor em €?--> ";
    scanf("%f",&euros);
    cout<<"Valor do $ Dólar (0,86 ao dia de hoje)--> ";
    scanf("%f",&cambio);
    valorS=euros*cambio;
    printf ("%.2f € euros = %.2f $ dólares\n", euros,valorS);

    system("pause");
	return 0;
}
