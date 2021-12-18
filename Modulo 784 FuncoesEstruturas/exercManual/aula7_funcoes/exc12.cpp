/*
Faça um programa que leia os catetos (dois catetos) de um triângulo retângulo e
imprima a hipotenusa. Para fazer o cálculo, implemente uma função. Utilize a
fórmula a seguir.
hi potenusa ˘ pcateto12 ¯cateto22
*/

#include <iostream>	
#include <math.h>
#include <iomanip>	
using namespace std;

float form(int cat1, int cat2){
    return sqrt( (pow(cat1,2)+pow(cat2,2)) );
}

int main()								
{
    int c1,c2;
    cout << "CATETO 1:: ";
    cin >> c1;
    cout << "CATETO 2:: ";
    cin >> c2;
    cout << setprecision(3)<<fixed<< form(c1,c2);
    system("pause");				
	return 0;	
}