/*
Escreva um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra for A o procedimento
calcula a média aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2) e se for H, a sua média
harmônica. A média calculada também deve retornar por parâmetro
*/
#include <iostream>	
		
using namespace std;

float mediaA (float n1,float n2,float n3,char s)
{
    float media=0;
    switch (s)
    {
    case 'A':
        media=(n1+n2+n3)/3;
        return media;
        break;

    case 'P': 
        media=(n1*.5)+(n2*.3)+(n3*.2) ;
        return media;
        break;

    case 'H':
        media= ( n1 + n2 + n3 ) / 3 ;
        return media;
        break;
    
    default:
        break;
    }
 
}

int main()								
{
    float nota1,nota2,nota3;
    char op;
    float res;
    printf ("Qual a nota 1?-> ");
    scanf("%f",&nota1);
    printf ("Qual a nota 2?-> ");
    scanf("%f",&nota2);
    printf ("Qual a nota 3?-> ");
    scanf("%f",&nota3);
    printf ("Qual a LETRA?(A | P | H ) ?-> ");
    fflush(stdin);
    scanf("%c",&op);
    op=toupper(op);
    res=mediaA(nota1,nota2,nota3,op);
    printf ("MEDIA :: %.3f\n",res);
    system("pause");				
	return 0;	
}