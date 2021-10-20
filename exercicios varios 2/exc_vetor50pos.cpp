/*
Exercício 2: dado um vetor de 50 posições preenchido com valores entre 1 e 50, faça uma função que receba o vetor e um valor. Com o valor faça:
Se o valor for par e maior do que 30, some o valor a cada elemento do vetor;
Se o valor for impar e menor do que 2, inverta os valores do vetor;
Caso nenhuma das condições anteriores, os valores do vetor passam a possuir a raiz quadrada deles mesmos.
*/
#include <iostream>	
#include <math.h>
#include <time.h>

#define MAX 50	
using namespace std;

void mostraVetor (float vet[], int tam = MAX)
{
    for (int i=0; i<tam;i++)
    {
        cout << vet[i] << "|";
    }
}

void principal(float vet[], int valor)
{
    if ( (valor % 2 == 0) && valor > 30 )
    {
        for (int i=0;i<MAX;i++)
        {
            vet[i] += valor;
        }
        cout << "+= valor\n";
    }
        
    else 
        if ( (valor % 2 != 0) && valor<2)
        {
            for (int i=0;i<MAX;i++)
            {
                vet[i] *= -1;
            }
            cout << "*= -1\n";
        }
        else
        {
            for (int i=0;i<MAX;i++)
            {
                vet[i] = sqrt(vet[i]);
            }
            cout << "sqrt (vet[i])\n";
        }
    for (int i= 0; i<MAX ; i++)
    {
        printf ("%.2f |",vet[i]);
    }
}

int main()								
{
    float vetor[MAX];
    int valor;
    srand (time(NULL));
    for (int i=0; i<MAX;i++)
    {
        vetor[i]=rand() % 50 + 1;       //entre 1 e 50 aleatórios
    }
    mostraVetor(vetor);
    cout << "Qual o valor ?-->";
    cin >> valor;
    principal(vetor,valor);
 
    system("pause");				
	return 0;	
}