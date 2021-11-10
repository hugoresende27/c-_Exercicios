/*
criar um programa q leia 10 num inteiros e imprima quantos estão entre 10 e 20
*/
#include <iostream>
#define MAX 10
using namespace std;

int main()
{
    int num,tamVet=0,soma=0;
    int dezVinte[MAX];
    for (int i=0; i<MAX;i++)
    {
        cout << "Num "<<i+1<<"--> ";
        cin >> num;
        if (num>=10 && num<=20)
        {
            dezVinte[tamVet]=num;
            tamVet++;
            soma+=num;
        }
    }
    cout << "Existem "<<tamVet<<" numeros entre 10 e 20\n";
    cout << "A soma é "<<soma<<endl;
    for (int i=0; i<tamVet;i++)
    {
        cout <<dezVinte[i]<<" | ";
    }
    
    return 0;
}