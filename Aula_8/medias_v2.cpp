#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	float nota1,nota2,nota3,nota4,soma,media;
	
	printf("Nota do Pedro::");
	scanf("%f",&nota1);
	printf("Nota da Maria::");
	scanf("%f",&nota2);
	printf("Nota do Sergio::");
	scanf("%f",&nota3);
	printf("Nota da Carla::");
	scanf("%f",&nota4);
	
	printf ("\tALUNO\tNOTA\n");
	printf("\tPedro\t %.1f \n", nota1);
	printf("\tMaria\t %.1f \n", nota2);
	printf("\tSergio\t %.1f \n", nota3);
	printf("\tCarla\t %.1f \n", nota4);
	soma=nota1+nota2+nota3+nota4;
	media=soma/4;
	printf("Media da turma :: %.2f \n",media);
	
	system("pause");
	return 0;
}


