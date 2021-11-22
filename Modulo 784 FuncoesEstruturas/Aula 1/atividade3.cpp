/*
Crie uma função que receba um valor em graus Celsius e converta para Fahrenheit, retornando esse mesmo valor.

*/

#include <iostream>	
#include <iomanip>

using namespace std;

float grausCelsius(float x)
{
    return (1.8*x) + 32;
}

float grausFahr(float x)
{
    return (x-32) / 1.8;
}

int main()								
{
    float g;
    char op;
    do{
    
    cout << "Quantos graus ? --> ";
    cin >> g;
    cout << "Celsius ou Fahrenheit[(s) para sair]? (c/f)--> ";
    cin >> op;
    op = toupper(op);
    
    switch (op)
    {
    case 'C':
        cout << "\n\t"<< g << " Celsius = "<< setprecision(2)<<fixed<< grausCelsius(g) <<" Fahrenheit\n";
        break;
    case 'F':
        cout << "\n\t"<< g << " Fahrenheit = "<< setprecision(2)<<fixed<< grausFahr(g) <<" Celsius\n";
        break;  
    case 'S':
        exit(1);
        break;
    default:
        cout << "Opção inválida\n";
        break;
    }
    }while (true);
    cout << "Encerrando ...\n";
   
    system("pause");				
	return 0;	
}