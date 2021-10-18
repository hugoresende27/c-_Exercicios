/*
Elabore um programa que leia dois valores e a operação que se deseja executar (Operações: soma, subtração, divisão, multiplicação). Execute a operação desejada e imprima o resultado.
*/

#include <iostream>	
#include <stdlib.h>
#include <string.h>

using namespace std;


int main()								
{
    char op;
    float num1,num2;
    printf (" ******* CALCULADORA V1 **********\n");

    cout << "Introduza valor 1--> ";
    cin >> num1;
    cout << "Introduza valor 2--> ";
    cin >> num2;

    
    printf (" *** [+] : SOMA ************\n");
    printf (" *** [-] : SUBTRACÇÃO  **********\n");
    printf (" *** [/] : DIVISAO  ************\n");
    printf (" *** [X] : MULTIPLICACAO  ************\n");

    cout << "Qual a operação? -->";
    cin >> op;

    switch (toupper(op))
    {
        case '+':
            cout << "OPCAO 1:: soma"<<endl;
            printf ("%.2f + %.2f = %.2f \n", num1,num2, num1+num2);
            break;
        case '-':
            cout << "OPCAO 2:: subtracao"<<endl;
            printf ("%.2f - %.2f = %.2f \n", num1,num2, num1-num2);
            break;
        case '/':
            cout << "OPCAO 3:: divisao"<<endl;
            printf ("%.2f / %.2f = %.2f \n", num1,num2, num1/num2);
            break;
        case 'X':
            cout << "OPCAO 4:: multiplicacao"<<endl;
            printf ("%.2f X %.2f = %.2f \n", num1,num2, num1*num2);
            break;
        default:
            printf ("Opção Inválida\n");
            exit(0);
    }
    system("pause");				
	return 0;	
}