#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL,"Portuguese");
	float n1,n2,soma,sub,div,mult;
	printf ("introduza o primeiro valor --> ");
	scanf ("%f", &n1);
	printf ("introduza o segundo valor --> ");
	scanf ("%f", &n2);

	
	soma = n1+n2;
	sub  = n1-n2;
	div  = n1/n2;
	mult = n1*n2;
	
	printf ("o resultado da soma entre %.2f + %.2f � %.2f\n", n1,n2,soma);
	printf ("o resultado da subtrac��o entre %.2f - %.2f � %.2f\n", n1,n2,sub);
	printf ("o resultado da divis�o entre %.2f / %.2f � %.2f\n", n1,n2,div);
	printf ("o resultado da multiplica��o entre %.2f X %.2f� %.2f\n", n1,n2,mult);
	
	
	return 0;
}
