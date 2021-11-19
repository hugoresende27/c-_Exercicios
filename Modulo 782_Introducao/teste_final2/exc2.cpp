#include <iostream>	
#include <string.h>				
using namespace std;
#define MAX 10

int main()								
{
    char primeiro[MAX],ultimo[MAX];
    printf("Introduza o primeiro nome::");
    gets(primeiro);
    printf("Introduza o último nome::");
    gets(ultimo);
    strcat(primeiro," ");
    strcat(primeiro,ultimo);
    printf ("O seu nome é %s\n",primeiro);
    system("pause");				
	return 0;	
}