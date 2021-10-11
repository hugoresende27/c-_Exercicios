#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#include <math.h>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	float num,pot,resultado;
	printf("Introduza um numero::");
	scanf("%f",&num);
	printf("Elevado a ::");
	scanf("%f",&pot);
	resultado=pow(num,pot);
	printf ("O numero %.1f elevado a %.1f = %.1f\n", num,pot,resultado);

	system("pause");
	return 0;
}


