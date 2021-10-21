/*
Write a function that takes an integer minutes and converts it to seconds.
Examples
convert(5) ➞ 300           1min    --      60seg
convert(3) ➞ 180           xmin    --      xseg
convert(2) ➞ 120
*/
#include <iostream>	
		
using namespace std;

int minSeg(int x)
{
    return x*60;
}

int main()								
{
    int minutos;
    cout << "Quantos minutos? --> ";
    cin >>minutos;
    cout << "\t-> "<<minutos<<" minutos correpondem a "<<minSeg(minutos)<<" segundos\n";

    system("pause");				
	return 0;	
}