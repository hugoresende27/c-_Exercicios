#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale (LC_ALL, "portuguese");
	char nome [100];
	printf ("digite o seu nome ");
	gets (nome);
	printf ("%s", nome);
	return 0;
	
}
