/*
Faça um programa para ler 2 vetores A e B com 5 elementos reais e construir um terceiro
vetor S obtido com os valores comuns a A e B. Ao final, imprimir os 3 vetores.
*/
#include <iostream>	
		
using namespace std;


int main()								
{
    int contador=0;
    float vetorA[5],vetorB[5],vetorS[5];
    for (int i = 0;i<5;i++)
    {
        printf ("vetorA[%d]--> ",i);
        scanf ("%f",&vetorA[i]);
    }

    for (int i = 0;i<5;i++)
    {
        printf ("vetorB[%d]--> ",i);
        scanf ("%f",&vetorB[i]);
    }

    for (int i = 0;i<5;i++)
    {
        for (int j = 0; j<5;j++)
        {
            if (vetorA[i]==vetorB[j])
                {
                    vetorS[contador]=vetorA[i];
                    contador++;
                }
        }
     
    }
    cout << "*******************************************\n";
    for (int i = 0;i<5;i++)
    {
        printf ("\tvetorA[%d]--> %.1f\n", i , vetorA[i]); 
    }
    cout << "*******************************************\n";
    for (int i = 0;i<5;i++)
    {
        printf ("\tvetorB[%d]--> %.1f\n", i , vetorB[i]); 
    }
    cout << "*******************************************\n";
    for (int i = 0;i<contador;i++)
    {
        printf ("\tvetorS[%d]--> %.1f\n", i , vetorS[i]); 
    }

    system("pause");				
	return 0;	
}