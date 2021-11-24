/*
Create a function to find only the root value of x in any quadratic equation ax^2 + bx + c. The function will take three arguments:
a as the coefficient of x^2
b as the coefficient of x
c as the constant term
Examples
quadraticEquation(1, 2, -3) ➞ 1
quadraticEquation(2, -7, 3) ➞ 3
quadraticEquation(1, -12, -28) ➞ 14
Notes
Quadratic equation is always guaranteed to have a root.
Check the Resources tab for more information on quadratic equations.
Calculate only the root that sums the square root of the discriminant, not the one that subtracts it.
Round the value / return only integer value.
*/
#include <iostream>	
#include <math.h>	

using namespace std;

float quadraticEquation (float a, float b, float c)
{
    return (-b + sqrt(pow(b,2) - 4*a*c)  ) / (2*a);
}

int main()								
{
    cout << quadraticEquation(1, 2, -3) <<endl;
    cout << quadraticEquation(2, -7, 3) <<endl;
    cout << quadraticEquation(1, -12, -28)<<endl;
    cout << endl;

    system("pause");				
	return 0;	
}