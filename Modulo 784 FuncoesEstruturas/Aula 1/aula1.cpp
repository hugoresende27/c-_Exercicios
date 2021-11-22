#include <iostream>	
		
using namespace std;

//FUNÇÕES SÃO SUBPROGRAMAS 
//numa função ou procedimento, só me interessa saber os para parametros que a função recebe e o seu retorno
float soma (int a = 0, int b = 0 ,int c=100);

void ola(string);

void contagem(int);
float contagem2(int x=100);

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
    cout << "\nSOMA ::" << soma(num1, soma(num2,num3));
    cout << "\nsoma-->" << soma(num1,num2,num3);
    cout << "\nsoma-->" << soma(num1,num2);
    cout << "\nsoma-->" << soma();

    ola("Hugo Resende");
    contagem (20);
    hello();
    cout << contagem2(50);
    cout << endl;
    system("pause");				
	return 0;	
}

float soma (int a, int b, int c )
{
    return a + b + c;
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

float contagem2(int x)
{
    int res;
    for (int i=1; i<=x;i++)
    {
        res = i;
        cout << i << " # ";
    }
    return 0;
}
void hello()
{
    cout << "HELLO HELLO \n";
}