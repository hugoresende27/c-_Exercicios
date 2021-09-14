#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"pt_PT");
	const float CAL = 3.9;
	
	for (int i=10;i<=30;i+=5)
	{
		cout<<"calorias ao fim de "<<i<<" minutos--> "<<CAL*i<<endl;
	}
	
	return 0;
}

