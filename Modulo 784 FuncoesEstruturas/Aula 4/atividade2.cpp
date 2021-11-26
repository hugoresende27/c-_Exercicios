/*passar numa funcao por referencia todas as letras do alfabeto*/
#include <iostream>	
#define MAX 26		
using namespace std;


void alfabetos(char x)
{
    for ( x = 'a'; x <= 'z'; x++ )
    {
        cout << x << " | ";
    }
}

void alfabeto2 (char *vet)
{
    for (int i=0; i<MAX; i++)
    {
        cout << vet[i] << " | ";
    }
}

int main()								
{
    char alf[MAX];
    char alfM[MAX];
    int cont=0;  
    for (int i = 97; i <= 122; i++)
    {
        alf[cont] = char(i);
        cont++;
    }
    cont =0;
    for (int i = 65; i <= 90; i++)
    {
        alfM[cont] = char(i);
        cont++;
    }
    alfabeto2(alf);
    alfabeto2(alfM);
    system("pause");				
	return 0;	
}