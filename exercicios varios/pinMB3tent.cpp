#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main ()
{
	int cont,pin,tent;
	cont = 3;
	tent=1;
	
	

	
	
	
		{
		
		printf ("insira o pin---> \n");
		scanf ("%i", &pin);
		
		
			if (pin == 123)
			{
				printf ("pin aceite\n");
				
			
			}
			else
			{
			cont --;
			tent ++;
			if (cont !=0)
			{
				printf ("tentativa nr %i \n ", tent);
			}
			
			}
	if (cont==0)
		{
			printf ("cartao bloqueado\n");
		}
		}
	return 0;
}
