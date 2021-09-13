#include <stdio.h>
#include <stdlib.h>
int  main ()
 {
 	int a,b,c,tabuada;
 	a=0;
 	b=10;
 	
 do 
 		{
 			printf ("\n----%i-----", a);
 			printf ("---%i---",b);
 			a++;
 			b--;
		 }
		 	while (a<10 || b>10);
	for (c=1; c<=20; c++)
		{
			printf ("\n %d \n",c);
		}
		printf ("\nTABUADA DO 9\n");
	for (tabuada=1; tabuada<=10;tabuada++)
		{
			
			printf ("\n 9 X %i = %i", tabuada,tabuada*9);
		}
		
		printf ("\n CONTANDO DE 3 EM 3\n");
	for (tabuada=0; tabuada<=30;tabuada = tabuada +3)
		{
			printf ("\n de 3 em 3 = %i", tabuada);
		}
		return 0;
		system ("pause");
	 
}
