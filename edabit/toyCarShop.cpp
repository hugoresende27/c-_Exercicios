/*
You work in a toy car workshop, and your job is to build toy cars from a collection of parts. Each toy car needs 4 wheels, 1 car body, and 2 figures of people to be placed inside. Given the total number of wheels, car bodies and figures available, how many complete toy cars can you make?
Examples                // 1 CARRO = 4 WHEELS ; 1 BODIES; 2 FIGURES
cars(2, 48, 76) ➞ 0
// 2 wheels, 48 car bodies, 76 figures
cars(43, 15, 87) ➞ 10
cars(88, 37, 17) ➞ 8
*/
#include <iostream>	
		
using namespace std;

int cars(int wheels, int bodies, int figures) {
    int carros=0;
    while (wheels>=4 && figures >= 2 && bodies >= 1)
    {
        carros++;
        wheels-=4;
        figures-=2;
        bodies--;
    };
    return carros;
	
}

int main()								
{
    cout << cars(2, 48, 76) << endl;
    cout << cars(43, 15, 87) << endl;
    cout << cars(88, 37, 17) << endl;
    cout << endl;
    system("pause");				
	return 0;	
}