#include <iostream>	
		
using namespace std;


void fatorial (int x)
{
    int fat=1,i=1;      //com ciclo while, para fazer o fatorial preciso de 2 var, fat e i de controlo
    while (i<=x)        //enquanto i menor ou igual ao parametro recebido
    {
        fat *= i;       //fatorial = fatorial X i
        i++;            //incremento do i
        cout << "::"<<fat;  //cout do valor do fatorial passo a passo
    }
}

int main()								
{
    int num;
    cout << "Valor a obter o fatorial ? --> ";
    cin >> num;
    fatorial(num);
    cout << endl;
    system("pause");				
	return 0;	
}