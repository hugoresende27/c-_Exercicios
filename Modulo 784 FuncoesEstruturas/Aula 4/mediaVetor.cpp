
#include <iostream>	
#define MAX 5		
using namespace std;

float media (int n, float *vnotas);

int main()								
{
    float vnotas[MAX];
    float mediaNotas=0;
    for (int i=0; i< MAX; i++ )
    {
        printf ("Nota %d --> ", i+1);
        scanf ("%f", &vnotas[i]);
    }
    cout << "Media:: "<< media(MAX, vnotas)<< " valores";
    system("pause");				
	return 0;	
}


float media (int n, float *vnotas)
{
    float m =0, soma = 0;
    for (int i=0; i<MAX ; i++)
    {
        soma += vnotas[i];
    }
    m = soma / MAX;
    return m;
}