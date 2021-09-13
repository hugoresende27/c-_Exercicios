#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL,"Portuguese");
	int n1,n2,media;
	
	printf ("introduza a nota de matemática :\n");
	scanf ("%i", &n1);
	printf ("introduza a nota de português:  \n");
	scanf ("%i", &n2);
	
	media = (n1+n2)/2;
	
	if (media >=10)
		{
			printf ("Foste aprovado com media %i",media);
		}
	else 
		{
				printf ("Foste reprovado com media %i",media);
		}
	
	
}
