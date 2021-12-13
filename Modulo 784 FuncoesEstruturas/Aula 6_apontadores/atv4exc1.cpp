/*
Escreva uma função chamada "troca" que troca os valores dos parâmetros recebidos. 
A sua "assinatura" deve ser: void troca(float *a, float *b)
*/

#include <iostream>	
		
using namespace std;

void troca(float *a, float *b);

int main()								
{
    float x,y;
    cout << "VAL 1--> ";
    cin >> x;
    cout << "VAL 2--> ";
    cin >> y;
    troca(&x,&y);
    printf ("VAL 1 = %.2f \t VAL 2 = %.2f", x,y);
    system("pause");				
	return 0;	
}

void troca(float *a,float *b){
    float c;
    c = *a;
    *a = *b;
    *b = c;
}