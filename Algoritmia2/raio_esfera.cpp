/*
. Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3.P .R3).
Ve = 4.p.r²/3
*/
#include <iostream>	
#include<math.h>
#define PI 3.14159265358979323846
using namespace std;

int calc_volume (float x)
{
    float volume=0;
    volume = ( 4*PI*pow(x,3) )/3 ;
    cout << "TESSTE"<<volume;
    return volume;
}

int main()								
{
    float raio,v;
    printf ("Qual o valor do raio--> ");
    scanf ("%f",&raio);
    v=calc_volume(raio);
    printf ("O volume da esfera com raio %.2f é %.2f\n",raio,v);
    system("pause");				
	return 0;	
}