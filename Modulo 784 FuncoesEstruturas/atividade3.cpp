/*
Crie uma função que receba um valor em graus Celsius e converta para Fahrenheit, retornando esse mesmo valor.

*/

#include <iostream>	
#include <iomanip>

using namespace std;

float grausCelsius(float x)
{
    return (1.8*x) + 32;
}

int main()								
{
    float g;
    cout << "Quantos graus Celsius? --> ";
    cin >> g;
    cout << "\n\t"<< g << " Celsius = "<< setprecision(2)<<fixed<< grausCelsius(g) <<" Fahrenheit\n";
    system("pause");				
	return 0;	
}