#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	float nota1,nota2,nota3,nota4,soma,media;			//variaveis
	char  nome1[10],nome2[10],nome3[10],nome4[10];	//vetor de caraters -- array
	
	printf("PROGRAMA MEDIAS\n");
	printf ("Nome Aluno 1:: ");
	scanf("%s",nome1);
	printf("Nota do Aluno 1:: ");
	scanf("%f",&nota1);		//& para receber var primitiva
	printf ("Nome Aluno 2:: ");
	scanf("%s",nome2);
	printf("Nota do Aluno 2:: ");
	scanf("%f",&nota2);
	printf ("Nome Aluno 3:: ");
	scanf("%s",nome3);
	printf("Nota do Aluno 3:: ");
	scanf("%f",&nota3);
	printf ("Nome Aluno 4:: ");
	scanf("%s",nome4);
	printf("Nota do Aluno 4:: ");
	scanf("%f",&nota4);
	
	printf("\n\tALUNO\tNOTA\n");
	printf("\t======\t====\n");
	printf("\t%s \t %.1f\n",nome1,nota1);
	printf("\t%s \t %.1f\n",nome2,nota2);
	printf("\t%s \t %.1f\n",nome3,nota3);
	printf("\t%s \t %.1f\n",nome4,nota4);
	soma=nota1+nota2+nota3+nota4;
	media=soma/4;
	printf("\n\tMEDIA::: %.2f\n",media);
	
	system("pause");
	return 0;
}


