/*Crie um programa que imprima todos os números pares entre 0 e 50; */
#include <iostream>			
using namespace std;
int main()								
{
    for (int i=0;i<=50;i++)
    {
        if (i%2==0)
        printf ("%d | ",i);
    }
    system("pause");				
	return 0;	
}