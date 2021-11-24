/*
Create a function that takes voltage and current and returns the calculated power.
Examples
circuitPower(230, 10) ➞ 2300
circuitPower(110, 3) ➞ 330
circuitPower(480, 20) ➞ 9600
*/
#include <iostream>	
		
using namespace std;

int circuitPower(int voltage, int current) {
    return voltage*current;
	
}

int main()								
{
    cout << circuitPower(230,10) << endl;
    cout << circuitPower(110,3)  << endl;
    cout << circuitPower(480,20) << endl;
    system("pause");				
	return 0;	
}