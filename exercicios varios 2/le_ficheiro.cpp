/*how to read a text file full of integers and print its content.*/
#include <iostream>	
#include <stdio.h>
#include<stdlib.h>	
using namespace std;


int main()								
{

    FILE* apontador;
    int num;

    apontador = fopen("testes.txt","r");//"local", modo-> "r" read, "r+" read and write

    if (!apontador)
    {
        printf ("Não deu para abrir o ficheiro...");
        exit(101);
    }
    while ((fscanf(apontador,"%d",&num))==1)
    {
        printf (" %d ",num);
    }
    printf("\n\n\n");
    system("pause");				
	return 0;	
}