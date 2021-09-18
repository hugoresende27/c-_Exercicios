/*
Suppose you want to deposit a certain amount of money into a savings account and then leave it alone to draw interest for the next 10 years. At the end of 10 years you would like to have $10000 in the account. How much would you need to deposit today toi make that happen? You can use the following formula which is known as the percent value formula, to find out:
		F
P =   -----
      (1 + r) (to the power of n)

P - Present value or amount that you need to deposit today
F - Future value that you want in the account (in this case, $10,000)
r - annual interest rate
n - number of years you plan to let the money sit in the account

Write a program that has a function named presentValue that performs this calculation. The function should accept the future value, annual interest rate, and number of years in the arguments. It should return the present value, which is the amount that you need to deposit today.
Demonstrate the function in a program that lets the user experiment with different values for the formula's terms.

*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#include<math.h>
#include<iomanip>

using namespace std;

double deposito(double valor_futuro,double taxa,int anos);

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	double valor_futuro,taxa;
	int anos;
	double resultado;
	
	cout<<"PROGRAMA POUPANCA\n";
	cout<<"Quanto quer poupar? -->";
	cin>>valor_futuro;
	cout<<"Qual a taxa de crescimento? -->";
	cin>>taxa;
	cout<<"Quantos anos a prazo? -->";
	cin>>anos;
	cout<<"Calculando.......................\n";
	resultado = deposito(valor_futuro,taxa,anos);
	cout<<"Vai precisar de depositar "<<setprecision(2)<<fixed<<resultado<< " euros\n";
	system("pause");
	return 0;
}

double deposito(double v,double t,int a)
{
	return v/pow((1+(t/100)),a);	
}


