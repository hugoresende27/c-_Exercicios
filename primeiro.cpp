#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL,"Portuguese");
	printf ("Hello world \n");
	printf ("Olá mundo \n");
	
	float v1,v2,soma,media,n1,n2,n3,n4,median;
	
	printf("introduza o primeiro valor: ");
	scanf ("%f",&v1);
	
	printf("introduza o segundo valor: ");
	scanf ("%f",&v2);
	
	soma = v1 + v2 ;
	media = (v1+v2) / 2 ;
	
	printf ("o resultado da soma de %.2f + %.2f é igual a %.2f\n",v1,v2,soma);
	printf ("o resultado da media de %.2f + %.2f é igual a %.2f\n\n\n",v1,v2,media);
	
	printf("introduza a primeira nota: ");
	scanf ("%f",&n1);
	printf("introduza a segunda nota: ");
	scanf ("%f",&n2);
	printf("introduza a terceira nota: ");
	scanf ("%f",&n3);
	printf("introduza a quarta nota: ");
	scanf ("%f",&n4);
	
	median = (n1+n2+n3+n4)/4 ;
	printf ("A media das 4 notas é %.2f",median);
	
	
	return 0;
}
