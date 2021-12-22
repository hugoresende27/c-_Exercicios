/*
Escreva um programa em C para trocar dois números usando uma função que recebe esses 
dois números e troca os seus conteúdos (utilize apontadores dentro da função para trocar 
os conteúdos).
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

void trocaNums(int *a,int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()								
{
    int numA,numB;
    cout<< "Valor A:: ";
    cin >> numA;
    cout<< "Valor B:: ";
    cin >> numB;
    printf ("ANTES DA FUNCAO TROCA::\n Numero A :: %d\nNumero B :: %d", numA,numB);
    trocaNums(&numA,&numB);
    printf ("\nDEPOIS DA FUNÇÃO TROCA::\n Numero A :: %d\nNumero B :: %d", numA,numB);

    cout << endl;
    system("pause");				
	return 0;	
}