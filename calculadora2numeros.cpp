#include <stdio.h>
#include <locale.h>


int main ()
{
	setlocale(LC_ALL,"Portuguese");
	int macas,preco;
	
	printf ("quantas macas?\n");
	scanf ("&i", &macas);
	if (macas<12)
		{
			preco = (macas *30)/10;
			printf ("\ncomprou %i macas por %i \n", macas, preco);
		}
	if (macas>12)
	{
	
				preco = macas *.10;
			printf ("\ncomprou %i macas por %i \n", macas, preco);
}
//system ("pause");
}

