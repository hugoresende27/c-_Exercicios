/* PROGRAM TO PRINT OUT SPACE RESERVED FOR VARIABLES */
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");

	char c;  
	short s;  
	int i;  
	unsigned int ui;  
	unsigned long int ul; 
	float f;
	double d;  
	long double ld; 
	
	printf ("char sizeof:: %d\n", sizeof(c));
	printf ("short sizeof:: %d\n", sizeof(s));
	printf ("int sizeof:: %d\n", sizeof(i));
	printf ("unsigned int sizeof:: %d\n", sizeof(ui));
	printf ("unsigned long int sizeof:: %d\n", sizeof(ul));
	printf ("float sizeof:: %d\n", sizeof(f));
	printf ("double sizeof:: %d\n", sizeof(d));
	printf ("long double sizeof:: %d\n", sizeof(ld));

	system("pause");
	return 0;
}


