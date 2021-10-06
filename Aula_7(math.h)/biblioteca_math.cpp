/*
floor(): efetua arredondamento para baixo;
ceil(): efetua arredondamento para cima;
sqrt(): calcula a raiz quadrada;
pow(base, pot): eleva base ao pot (potencia);
sin(): calcula o valor de seno;
cos(): calcula o valor de cosseno;
tan():calcula o valor da tangente;
log(): calcula o valor do logaritmo;
log10(): calcula o logaritmo na base 10;
*/

#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	float num;
	
	printf("BIBLIOTECA math.h\nIntroduza um nr:: ");
	scanf("%f",&num);
	
	printf("pow(,2) ou potencia de 2:: %.2f\n",pow(num,2));
	printf("sqrt() ou raiz quadrada a:: %.2f\n",sqrt(num));
	printf("floor() arredonda para baixo :: %.2f\n",floor(num));
	printf("ceil() arredonda para cima :: %.2f\n",ceil(num));
	printf("sin() seno :: %.3f\n",sin(num));
	printf("cos() coseno :: %.3f\n",cos(num));
	printf("tan() tangente :: %.3f\n",tan(num));
	printf("log() logaritmo :: %.3f\n",log(num));
	printf("log10() logaritmo na base 10 :: %.3f\n",log10(num));
	
	
	system("pause");
	return 0;
}


