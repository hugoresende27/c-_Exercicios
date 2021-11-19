#include <iostream>					
using namespace std;


int main()								
{
    int a,b,c,maior;            //recurso a uma var auxiliar chamada maior
    printf ("Insira o valor A:: ");
    scanf ("%d",&a);
    printf ("Insira o valor B:: ");
    scanf ("%d",&b);
    printf ("Insira o valor C:: ");
    scanf ("%d",&c);

    if (a>b)                //testo a com b, o maior recebe o valor na var maior
    {
        maior = a;
    }
    else
    {
        maior = b;
    }
    if (maior > c)          //se maior > do que C, maior é maior, senão o maior é o c
    {
        cout << "O maior é o  :: "<< maior <<endl;
    }
    else
    {
        cout << "O maior é o :: "<< c << endl;
    }

    cout << "A::" << a << endl;
    cout << "B::" << b << endl;
    cout << "C::" << c << endl;

    system("pause");				
	return 0;	
}