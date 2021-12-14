/*
Faça um programa em C que leia o valor de um ângulo em graus e o converta,
utilizando uma função, para radianos e ao final imprima o resultado. Veja a
fórmula de cálculo a seguir.
rad = (ang * pi) / 180

Em que:
• rad = ângulo em radianos
• ang = ângulo em graus
• pi = número do pi
*/
#include <iostream>	
#include <cmath>
#include <iomanip>
#define M_PI 3.14159265358979323846
using namespace std;

float convert(float ang){
    return (ang*M_PI)/180;

}

int main()								
{
    float an;
    cout << "Quantos graus tem o ângulo? --> ";
    cin >> an;
    cout << "IGUAL A :: "<< setprecision(2)<< fixed <<convert(an);
    cout << endl;
    system("pause");				
	return 0;	
}