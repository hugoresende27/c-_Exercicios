/*
Crie um programa que dado um valor em graus celsius, converta para fahrenheit e viceversa. 
Instruções: Se o utilizador inserir “f”, deverá ser inserido um valor de graus celsius e 
convertido para fahrenheit, em caso de inserir “c”, deverá receber graus fahrenheit e 
converter para celsius (use “switch case”).
C -> F ℉ =℃ * 1.8 + 32
F -> C  - ℃ =(℉ - 32) / 1.8
*/
#include <iostream>	
#include <iomanip>		
using namespace std;


int main()								
{
    char op;
    float graus_C,graus_F;
    cout << "******** Programa temperaturas **********\n";
    cout << "********  f. Celsius - Fahrenheit *******\n";
    cout << "********  c. Fahrenheit - Celsius *******\n";
    cout << "** (Escolha [f] ou [c] para converter) **\n";
    cout << "************************************ --->  ";
    cin >> op;
    op = tolower(op);

    switch (op)
    {
    case 'f':
        cout << "Graus Celsius? --> ";
        cin >> graus_C;
        graus_F=(1.8*graus_C) + 32;
        cout << "\n\t"<< graus_C << " Celsius = "<< setprecision(2)<<fixed<<graus_F<<" Fahrenheit\n";
        break;
    case 'c':
        cout << "Graus Fahrenheit? --> ";
        cin >> graus_F;
        graus_C=(graus_F-32) / 1.8;
        cout << "\n\t"<< graus_F << " Fahrenheit = "<< setprecision(2)<<fixed<<graus_C<<" Celsius\n";
        break;
    
    default:
        cout << "Opção Inválida!!\n";
        break;
    }
    
    system("pause");				
	return 0;	
}