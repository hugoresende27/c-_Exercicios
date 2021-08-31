#include <stdio.h>
#include <stdlib.h>
int main()
{
   int val, aux, soma = 0, quociente;


		printf("Introduza uma valor entre 100 e 10000\n");
   		scanf("%d", &val);
   	
if (val>10000 || val <=100)
   	{
	   printf ("entre 100 e 10000  !!!!\n");
	  system ("pause");
	   
	}
	
else {

   aux = val;

   while (aux != 0)
   {
      quociente = aux % 10;
      soma       = soma + quociente;
      aux         = aux / 10;
   }

   printf("Soma dos digitos %d = %d\n", val, soma);


   system ("pause");
}
}
