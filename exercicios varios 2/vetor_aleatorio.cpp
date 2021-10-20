#include <iostream>	
#include<time.h>
using namespace std;
/*This program will define an array and Initialize a 1D with the square of its Index.*/

int main()								
{
    int tamanho;
    
    srand (time(NULL));
    printf ("Qual o tamanho do array? --> ");
    scanf ("%d",&tamanho);
    tamanho = tamanho*tamanho;
    int vetor[tamanho];
    for (int i=0; i<tamanho;i++)
    {
        vetor[i]=rand() % 99;       //aleatorios de 0 a 99  
    }
    for (int i=0; i<tamanho;i++)
    {
        printf ("%d | ",vetor[i]);
    }
    cout << "\n\tVetor de dimensão "<<tamanho<<endl;
    system("pause");				
	return 0;	
}