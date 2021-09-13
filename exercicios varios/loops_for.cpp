#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	
	for (int i=0;i<5;i++)
	{
		cout <<"Olá mundo"<<i<<endl;
	}
	
	for (int h=0;h<24;h++)
	{
		for (int m=0;m<60;m++)				//for dentro de for, nested loop,
		{
			for (int s=0; s<60;s++)
			{
				cout << h << ":" << m << ":" << s <<endl;
			}
		}
	}
}
	
