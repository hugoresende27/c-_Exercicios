/*Crie um programa que leia o valor da tabuada que se deseja saber, por exemplo se inserir 7 , devemos calcular 7X1=7, 7X2=14,…; Se o número inserido não estiver entre 0 e 10, sinalizar com mensagem de erro.*/
#include <iostream>	
		
using namespace std;

int main()								
{   
    int num;
    printf ("*** PROGRAMA TABUADA ***\n\tQual a tabuada?--> ");
    scanf ("%d",&num);
    if (num<0 || num >10)
    {
        printf ("ERRO, valor tem de ser entre 0 e 10\n");
    }
    else
    {
        printf ("Tabuada do %d\n",num);
        for (int i=1;i<=10;i++)
        {
            printf (" %d X %d = %d\n", num , i , num*i);
        }
    }
 

    
    system("pause");				
	return 0;	
}