#include <iostream>

using namespace std;

int main ()
{

	int num=-1;
    num<0 ? printf("\tNúmero Positivo\n") : printf("\tNúmero Negativo\n");

    char letra;
    printf("Escreva a letra::");
    scanf("%c", &letra);
    letra ==65 ? printf("\tVerdade\n") : printf("\tFALSO\n");

	system("pause");
	return 0;
}