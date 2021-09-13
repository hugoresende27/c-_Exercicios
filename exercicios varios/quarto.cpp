#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	
	printf ("introduza o numero :\n");
	scanf ("%i", &n1);
	printf ("introduza o numero: \n");
	scanf ("%i", &n2);
	
	if (n1<n2)
		{
			printf ("a ordem é %i e depois %i", n1,n2);
		}
	else 
		{
			printf ("a ordem é %i e depois %i", n2,n1);
		}
	
	
}
