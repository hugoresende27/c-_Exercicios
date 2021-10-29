/*
Usando o programa anterior, procure no vetor todos os números pares e copie esses números para um novo vetor (vet_copia).
*/
#include <iostream>	
#define TAM 10		
using namespace std;

int main()								
{
    int vetor[TAM];
    int pares[TAM];
    int cont=0;
   

    for (int i=0; i<TAM; i++)
    {
        printf ("[%d] --> ",i+1);
        scanf("%d",&vetor[i]);
    }
    
    for (int i=0; i<TAM; i++)
    {
        if (vetor[i] %2 ==0)
        {
            pares[cont]=vetor[i];
            cont++;
        }
    
    } 
    cout << "**** VETOR PARES ****\n";
    for (int i=0; i<cont; i++)
    {
        printf ("[%d] ",pares[i]);
    }  
    system("pause");				
	return 0;	
}