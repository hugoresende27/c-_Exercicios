/*
criar um programa q leia 10 num inteiros e imprima quantos estão entre 10 e 20
*/
#include <iostream>
#define MAX 10
#define inf 10
#define sup 20
using namespace std;

int main()
{
    int num,tamVet=0,soma=0;
    int dezVinte[MAX];
    for (int i=0; i<MAX;i++)
    {
        cout << "Num "<<i+1<<"--> ";
        cin >> num;
        if (num>=inf && num<=sup)
        {
            dezVinte[tamVet]=num;
            tamVet++;
            soma+=num;
        }
        else
        {
            cout << "Valor não contablizado, não está entre "<<inf<< " e "<<sup<<endl;
        }
    }
    cout << "Existem "<<tamVet<<" numeros entre "<<inf<<" e "<<sup<<endl;
    if (soma>=50 && soma <=100)
    {
        cout << "A soma é "<<soma<<endl;
    }
    
    for (int i=0; i<tamVet;i++)
    {
        cout <<dezVinte[i]<<" | ";
    }
    
    return 0;
}