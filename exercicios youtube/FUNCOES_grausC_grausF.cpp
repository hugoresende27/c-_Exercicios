#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#include <iomanip>

using namespace std;

float celsius (float );

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	float t=0;
	
	cout<<"PROGRAMA TEMPERATURA Formula--C = 5/9 * (F-32)\n";
	
	for (int i=0; i<133; i++)
	{
		t=celsius(i);
		cout<<i<<"-> Graus Fahrenheit = "<< setprecision(2) <<fixed<< t<<"-> Graus Celsius"<<endl;
	}
	system("pause");
	return 0;
}

float celsius (float f)
{
	float c=0;
	c=(5.0/9)*(f-32);
	return c;
}


