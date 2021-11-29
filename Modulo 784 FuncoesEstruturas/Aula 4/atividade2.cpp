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

void imprime_char( int *vet)
{
    for (int i=0 ;i<26 ;i++)
    {
        cout << "\t"<<vet[i]<<"-->"<<char(vet[i])<< endl;
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

    cout << "***************************\n";
    alfabeto2(alf);
    cout << "***************************\n";
    alfabeto2(alfM);


    int alfa[MAX];
    for (int i=0; i<26;i++)
    {
        alfa[i]= 65+i;
    }
    cout << "***************************\n";
    imprime_char(alfa);
    system("pause");				
	return 0;	
}