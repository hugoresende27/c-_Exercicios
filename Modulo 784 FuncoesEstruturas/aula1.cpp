#include <iostream>	
		
using namespace std;

//FUNÇÕES SÃO SUBPROGRAMAS 
//numa função ou procedimento, só me interessa saber os para parametros que a função recebe e o seu retorno
float soma (int , int );

void ola(string);

void contagem(int);

void hello();

int main()								
{
    int num1, num2,num3;
    cout << "Função Soma\n";
    cout << "Valor 1--> ";
    cin >> num1;
    cout << "Valor 2--> ";
    cin >> num2;
    cout << "Valor 3--> ";
    cin >> num3;
    cout << "SOMA :: "<< soma(num1, soma(num2,num3));
    ola("Hugo Resende");
    contagem (20);
    hello();
    cout << endl;
    system("pause");				
	return 0;	
}

float soma (int a, int b)
{
    return a + b;
}

void ola(string a)
{
    cout << "\n\tOlá senhor "<<a<<endl;
}

void contagem(int x)
{
    for (int i=1; i<=x;i++)
    {
        cout <<i<<" - ";
    }
}

void hello()
{
    cout << "HELLO HELLO \n";
}