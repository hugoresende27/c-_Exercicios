#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main ()
{
	setlocale(LC_ALL,"Portuguese");
	float macas,preco;
	
		printf ("\nEXERCICIO 6");
	
	printf ("\nquantas macas?\n");
	scanf ("%f", &macas);
	
	if (macas<=12)
	
		{
			preco = (macas*0.30);			
		}
		
	if (macas>12)
	
		{	
			preco = (macas*0.10);					
		}
		
		
		printf ("\nse comprar %.0f vai custar %.2f euros\n",macas,  preco);
		
system ("pause");


}

