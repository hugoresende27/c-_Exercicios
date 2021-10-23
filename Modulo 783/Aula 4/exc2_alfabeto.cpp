/*Imprima o alfabeto completo, maiúsculo se o utilizador inserir “M” e minúsculo se o utilizador inserir “m”;*/
#include <iostream>	
		
using namespace std;


int main()								
{
    char op;
    printf ("Programa alfabeto\nEscolha uma opção [M/m]\n");
    printf ("\t[M]->MAIUSCULAS\n\t[m]->minusculas\n\t---> ");
    scanf ("%c",&op);
    if (op=='m')
    {
        for (char a='a';a<'z';a++)
        {
            printf ("%c | ", a);
        }
    }
    else
    {
        if (op=='M')
        {
            for (char a='A';a<'Z';a++)
            {
                printf ("%c | ", a);
            }
        }
        else
        {
            printf ("Opção Inválida\n");
        }
    }
    system("pause");				
	return 0;	
}