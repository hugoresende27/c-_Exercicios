#include <iostream>
#include <string.h>
#define MAX 10
using namespace std;

int main ()
{
	char nome[MAX];
    char situacao[MAX];
    float nota;
    printf("Qual o nome?");
    gets(nome);
    printf("Qual a nota?");
    scanf("%f",&nota);
    nota>=10 ? (strcat(situacao,"Aprovado")) : (strcat(situacao,"Reprovado"));
    printf("\n\tNome\tNota\t  Situação");
    printf("\n\t %s \t %.1f \t %s\n",nome,nota,situacao);
	system("pause");
	return 0;
}
