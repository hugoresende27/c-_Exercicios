#include <stdio.h>
#include <locale.h>


main ()
{
	setlocale(LC_ALL,"Portuguese");
	int dia;
	
	
	printf ("ESCOLHA UM NUMERO DE 1 A 7\n");
	scanf ("%i", &dia);
	switch (dia)
		{
			case 1:
				printf ("domingo !!!");
				break;
			case 2:
				printf ("segunda !!!");
				break;
			case 3:
				printf ("ter�a !!!");
				break;
			case 4:
				printf ("quarta !!!");
				break;
			case 5:
				printf ("quinta !!!");
				break;
			case 6:
				printf ("sexta !!!");
				break;
			case 7:
				printf ("s�bado !!!");
				break;
			default:
				printf ("dia inv�lido");
				break;
		}
			
		}
