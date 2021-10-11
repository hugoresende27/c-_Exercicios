#include <iostream>

using namespace std;

int main ()
{

	int num=-1;
    num<0 ? printf("\tNúmero Positivo\n") : printf("\tNúmero Negativo\n");

    char letra;
    printf("Escreva a letra::");
    scanf("%c", &letra);
    letra ==65 ? printf("\t %c \n",letra+6) : printf("\t %d \n",letra);
    //se codigo ascii da letra = 65, imprime 65+1 = letra B, senão imprime o código da letra de scanf
	system("pause");
	return 0;
}